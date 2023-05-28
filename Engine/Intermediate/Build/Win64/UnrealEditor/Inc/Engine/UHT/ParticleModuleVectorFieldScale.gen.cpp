// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldScale::StaticRegisterNativesUParticleModuleVectorFieldScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldScale);
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister()
	{
		return UParticleModuleVectorFieldScale::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VectorFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleRaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Field Scale" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData[] = {
		{ "Comment", "/** Per-particle vector field scale. Evaluated using emitter time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale = { "VectorFieldScale", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Per-particle vector field scale. Evaluated using emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw = { "VectorFieldScaleRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::ClassParams = {
		&UParticleModuleVectorFieldScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldScale.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVectorFieldScale.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldScale>()
	{
		return UParticleModuleVectorFieldScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScale);
	UParticleModuleVectorFieldScale::~UParticleModuleVectorFieldScale() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldScale, UParticleModuleVectorFieldScale::StaticClass, TEXT("UParticleModuleVectorFieldScale"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldScale), 4279010333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_3109210747(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
