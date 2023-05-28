// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationDirect.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationDirect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationDirect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationDirect_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationDirect::StaticRegisterNativesUParticleModuleLocationDirect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationDirect);
	UClass* Z_Construct_UClass_UParticleModuleLocationDirect_NoRegister()
	{
		return UParticleModuleLocationDirect::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationDirect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationDirect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDirect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Direct Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationDirect.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** \n\x09 *\x09The location of the particle at a give time. Retrieved using the particle RelativeTime. \n\x09 *\x09IMPORTANT: the particle location is set to this value, thereby over-writing any previous module impacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
		{ "ToolTip", "The location of the particle at a give time. Retrieved using the particle RelativeTime.\nIMPORTANT: the particle location is set to this value, thereby over-writing any previous module impacts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, Location), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Location_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09""An offset to apply to the position retrieved from the Location calculation. \n\x09 *\x09The offset is retrieved using the EmitterTime. \n\x09 *\x09The offset will remain constant over the life of the particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
		{ "ToolTip", "An offset to apply to the position retrieved from the Location calculation.\nThe offset is retrieved using the EmitterTime.\nThe offset will remain constant over the life of the particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, LocationOffset), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_LocationOffset_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09Scales the velocity of the object at a given point in the time-line.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
		{ "ToolTip", "Scales the velocity of the object at a given point in the time-line." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, ScaleFactor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_ScaleFactor_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Currently unused. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationDirect.h" },
		{ "ToolTip", "Currently unused." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationDirect, Direction), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Direction_MetaData)) }; // 3056335262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationDirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_ScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDirect_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationDirect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationDirect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationDirect_Statics::ClassParams = {
		&UParticleModuleLocationDirect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationDirect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDirect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationDirect()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationDirect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationDirect.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationDirect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationDirect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationDirect>()
	{
		return UParticleModuleLocationDirect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationDirect);
	UParticleModuleLocationDirect::~UParticleModuleLocationDirect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationDirect, UParticleModuleLocationDirect::StaticClass, TEXT("UParticleModuleLocationDirect"), &Z_Registration_Info_UClass_UParticleModuleLocationDirect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationDirect), 1374656791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_3880306271(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationDirect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
