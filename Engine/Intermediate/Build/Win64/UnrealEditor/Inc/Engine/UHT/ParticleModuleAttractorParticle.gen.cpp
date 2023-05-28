// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorParticle.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorParticle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod;
	static UEnum* EAttractorParticleSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAttractorParticleSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAttractorParticleSelectionMethod>()
	{
		return EAttractorParticleSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enumerators[] = {
		{ "EAPSM_Random", (int64)EAPSM_Random },
		{ "EAPSM_Sequential", (int64)EAPSM_Sequential },
		{ "EAPSM_MAX", (int64)EAPSM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "EAPSM_MAX.Name", "EAPSM_MAX" },
		{ "EAPSM_Random.DisplayName", "Random" },
		{ "EAPSM_Random.Name", "EAPSM_Random" },
		{ "EAPSM_Sequential.DisplayName", "Sequential" },
		{ "EAPSM_Sequential.Name", "EAPSM_Sequential" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAttractorParticleSelectionMethod",
		"EAttractorParticleSelectionMethod",
		Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod.InnerSingleton;
	}
	void UParticleModuleAttractorParticle::StaticRegisterNativesUParticleModuleAttractorParticle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorParticle);
	UClass* Z_Construct_UClass_UParticleModuleAttractorParticle_NoRegister()
	{
		return UParticleModuleAttractorParticle::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorParticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrengthByDistance_MetaData[];
#endif
		static void NewProp_bStrengthByDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrengthByDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[];
#endif
		static void NewProp_bAffectBaseVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenewSource_MetaData[];
#endif
		static void NewProp_bRenewSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenewSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceVel_MetaData[];
#endif
		static void NewProp_bInheritSourceVel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastSelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Particle Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The source emitter for attractors\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The source emitter for attractors" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The radial range of the attraction around the source particle.\n\x09 *\x09Particle-life relative.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The radial range of the attraction around the source particle.\nParticle-life relative." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The strength curve is a function of distance or of time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The strength curve is a function of distance or of time." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_SetBit(void* Obj)
	{
		((UParticleModuleAttractorParticle*)Obj)->bStrengthByDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance = { "bStrengthByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09The strength of the attraction (negative values repel).\n\x09 *\x09Particle-life relative if StrengthByDistance is false.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The strength of the attraction (negative values repel).\nParticle-life relative if StrengthByDistance is false." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, the velocity adjustment will be applied to the base velocity.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_SetBit(void* Obj)
	{
		((UParticleModuleAttractorParticle*)Obj)->bAffectBaseVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity = { "bAffectBaseVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09The method to use when selecting an attractor target particle from the emitter.\n\x09 *\x09One of the following:\n\x09 *\x09Random\x09\x09- Randomly select a particle from the source emitter.  \n\x09 *\x09Sequential  - Select a particle using a sequential order. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "The method to use when selecting an attractor target particle from the emitter.\nOne of the following:\nRandom          - Randomly select a particle from the source emitter.\nSequential  - Select a particle using a sequential order." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, SelectionMethod), Z_Construct_UEnum_Engine_EAttractorParticleSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod_MetaData)) }; // 1836718281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09Whether the particle should grab a new particle if it's source expires.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "Whether the particle should grab a new particle if it's source expires." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_SetBit(void* Obj)
	{
		((UParticleModuleAttractorParticle*)Obj)->bRenewSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource = { "bRenewSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\n\x09 *\x09Whether the particle should inherit the source veloctiy if it expires.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
		{ "ToolTip", "Whether the particle should inherit the source veloctiy if it expires." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_SetBit(void* Obj)
	{
		((UParticleModuleAttractorParticle*)Obj)->bInheritSourceVel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel = { "bInheritSourceVel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorParticle), &Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorParticle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex = { "LastSelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorParticle, LastSelIndex), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bStrengthByDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bAffectBaseVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bRenewSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_bInheritSourceVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::NewProp_LastSelIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorParticle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::ClassParams = {
		&UParticleModuleAttractorParticle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorParticle()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorParticle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAttractorParticle.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorParticle>()
	{
		return UParticleModuleAttractorParticle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorParticle);
	UParticleModuleAttractorParticle::~UParticleModuleAttractorParticle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::EnumInfo[] = {
		{ EAttractorParticleSelectionMethod_StaticEnum, TEXT("EAttractorParticleSelectionMethod"), &Z_Registration_Info_UEnum_EAttractorParticleSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1836718281U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorParticle, UParticleModuleAttractorParticle::StaticClass, TEXT("UParticleModuleAttractorParticle"), &Z_Registration_Info_UClass_UParticleModuleAttractorParticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorParticle), 1758779648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_4032975069(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
