// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationPrimitiveSphere::StaticRegisterNativesUParticleModuleLocationPrimitiveSphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveSphere);
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_NoRegister()
	{
		return UParticleModuleLocationPrimitiveSphere::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationPrimitiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sphere" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::NewProp_StartRadius_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The radius of the sphere. Retrieved using EmitterTime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h" },
		{ "ToolTip", "The radius of the sphere. Retrieved using EmitterTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveSphere, StartRadius), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::NewProp_StartRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::NewProp_StartRadius_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::NewProp_StartRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveSphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::ClassParams = {
		&UParticleModuleLocationPrimitiveSphere::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveSphere>()
	{
		return UParticleModuleLocationPrimitiveSphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveSphere);
	UParticleModuleLocationPrimitiveSphere::~UParticleModuleLocationPrimitiveSphere() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveSphere, UParticleModuleLocationPrimitiveSphere::StaticClass, TEXT("UParticleModuleLocationPrimitiveSphere"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveSphere), 2313658583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_3087194454(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveSphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
