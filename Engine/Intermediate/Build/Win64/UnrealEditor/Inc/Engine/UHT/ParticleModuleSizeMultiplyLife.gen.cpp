// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSizeMultiplyLife::StaticRegisterNativesUParticleModuleSizeMultiplyLife()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeMultiplyLife);
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister()
	{
		return UParticleModuleSizeMultiplyLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyX_MetaData[];
#endif
		static void NewProp_MultiplyX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyY_MetaData[];
#endif
		static void NewProp_MultiplyY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyZ_MetaData[];
#endif
		static void NewProp_MultiplyZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiplyZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/**\n\x09 *\x09The scale factor for the size that should be used for a particle.\n\x09 *\x09The value is retrieved using the RelativeTime of the particle during its update.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "The scale factor for the size that should be used for a particle.\nThe value is retrieved using the RelativeTime of the particle during its update." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSizeMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the X-component of the scale factor will be applied to the particle size X-component.\n\x09 *\x09If false, the X-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the X-component of the scale factor will be applied to the particle size X-component.\nIf false, the X-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX = { "MultiplyX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the Y-component of the scale factor will be applied to the particle size Y-component.\n\x09 *\x09If false, the Y-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Y-component of the scale factor will be applied to the particle size Y-component.\nIf false, the Y-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY = { "MultiplyY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 *\x09If true, the Z-component of the scale factor will be applied to the particle size Z-component.\n\x09 *\x09If false, the Z-component is left unaltered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Z-component of the scale factor will be applied to the particle size Z-component.\nIf false, the Z-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ = { "MultiplyZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeMultiplyLife>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams = {
		&UParticleModuleSizeMultiplyLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeMultiplyLife>()
	{
		return UParticleModuleSizeMultiplyLife::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeMultiplyLife);
	UParticleModuleSizeMultiplyLife::~UParticleModuleSizeMultiplyLife() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeMultiplyLife, UParticleModuleSizeMultiplyLife::StaticClass, TEXT("UParticleModuleSizeMultiplyLife"), &Z_Registration_Info_UClass_UParticleModuleSizeMultiplyLife, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeMultiplyLife), 4103391058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_1434151506(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeMultiplyLife_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
