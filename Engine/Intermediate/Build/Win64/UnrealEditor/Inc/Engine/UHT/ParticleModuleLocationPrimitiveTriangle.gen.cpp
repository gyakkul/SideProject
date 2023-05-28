// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveTriangle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationPrimitiveTriangle::StaticRegisterNativesUParticleModuleLocationPrimitiveTriangle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveTriangle);
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_NoRegister()
	{
		return UParticleModuleLocationPrimitiveTriangle::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Triangle" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, StartOffset), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_StartOffset_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Height), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Height_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Angle), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Angle_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveTriangle, Thickness), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Thickness_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::NewProp_Thickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveTriangle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::ClassParams = {
		&UParticleModuleLocationPrimitiveTriangle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveTriangle>()
	{
		return UParticleModuleLocationPrimitiveTriangle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveTriangle);
	UParticleModuleLocationPrimitiveTriangle::~UParticleModuleLocationPrimitiveTriangle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveTriangle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveTriangle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveTriangle, UParticleModuleLocationPrimitiveTriangle::StaticClass, TEXT("UParticleModuleLocationPrimitiveTriangle"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveTriangle), 398941823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveTriangle_h_1264577758(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveTriangle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveTriangle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
