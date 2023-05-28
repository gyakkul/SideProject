// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScaleBySpeed() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSizeScaleBySpeed::StaticRegisterNativesUParticleModuleSizeScaleBySpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeScaleBySpeed);
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister()
	{
		return UParticleModuleSizeScaleBySpeed::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Speed" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "Comment", "/** By how much speed affects the size of the particle in each dimension. */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "By how much speed affects the size of the particle in each dimension." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, SpeedScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "Comment", "/** The maximum amount by which to scale a particle in each dimension. */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "The maximum amount by which to scale a particle in each dimension." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, MaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScaleBySpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams = {
		&UParticleModuleSizeScaleBySpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScaleBySpeed>()
	{
		return UParticleModuleSizeScaleBySpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScaleBySpeed);
	UParticleModuleSizeScaleBySpeed::~UParticleModuleSizeScaleBySpeed() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeScaleBySpeed, UParticleModuleSizeScaleBySpeed::StaticClass, TEXT("UParticleModuleSizeScaleBySpeed"), &Z_Registration_Info_UClass_UParticleModuleSizeScaleBySpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeScaleBySpeed), 2683767962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_1718006408(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScaleBySpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
