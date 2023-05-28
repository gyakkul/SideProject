// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorLine.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorLine() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAttractorLine::StaticRegisterNativesUParticleModuleAttractorLine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorLine);
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister()
	{
		return UParticleModuleAttractorLine::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Line Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** The first endpoint of the line. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The first endpoint of the line." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0 = { "EndPoint0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** The second endpoint of the line. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The second endpoint of the line." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1 = { "EndPoint1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** The range of the line attractor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The range of the line attractor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** The strength of the line attractor. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The strength of the line attractor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorLine, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorLine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::ClassParams = {
		&UParticleModuleAttractorLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAttractorLine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorLine.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorLine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAttractorLine.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorLine>()
	{
		return UParticleModuleAttractorLine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorLine);
	UParticleModuleAttractorLine::~UParticleModuleAttractorLine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorLine, UParticleModuleAttractorLine::StaticClass, TEXT("UParticleModuleAttractorLine"), &Z_Registration_Info_UClass_UParticleModuleAttractorLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorLine), 2232289336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_3721089077(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorLine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
