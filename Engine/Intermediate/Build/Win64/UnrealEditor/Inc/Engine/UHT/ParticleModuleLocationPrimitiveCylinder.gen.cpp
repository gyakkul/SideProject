// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveCylinder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CylinderHeightAxis;
	static UEnum* CylinderHeightAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_CylinderHeightAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CylinderHeightAxis"));
		}
		return Z_Registration_Info_UEnum_CylinderHeightAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<CylinderHeightAxis>()
	{
		return CylinderHeightAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enumerators[] = {
		{ "PMLPC_HEIGHTAXIS_X", (int64)PMLPC_HEIGHTAXIS_X },
		{ "PMLPC_HEIGHTAXIS_Y", (int64)PMLPC_HEIGHTAXIS_Y },
		{ "PMLPC_HEIGHTAXIS_Z", (int64)PMLPC_HEIGHTAXIS_Z },
		{ "PMLPC_HEIGHTAXIS_MAX", (int64)PMLPC_HEIGHTAXIS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "PMLPC_HEIGHTAXIS_MAX.Name", "PMLPC_HEIGHTAXIS_MAX" },
		{ "PMLPC_HEIGHTAXIS_X.DisplayName", "X" },
		{ "PMLPC_HEIGHTAXIS_X.Name", "PMLPC_HEIGHTAXIS_X" },
		{ "PMLPC_HEIGHTAXIS_Y.DisplayName", "Y" },
		{ "PMLPC_HEIGHTAXIS_Y.Name", "PMLPC_HEIGHTAXIS_Y" },
		{ "PMLPC_HEIGHTAXIS_Z.DisplayName", "Z" },
		{ "PMLPC_HEIGHTAXIS_Z.Name", "PMLPC_HEIGHTAXIS_Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"CylinderHeightAxis",
		"CylinderHeightAxis",
		Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_CylinderHeightAxis()
	{
		if (!Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton, Z_Construct_UEnum_Engine_CylinderHeightAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CylinderHeightAxis.InnerSingleton;
	}
	void UParticleModuleLocationPrimitiveCylinder::StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveCylinder);
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_NoRegister()
	{
		return UParticleModuleLocationPrimitiveCylinder::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialVelocity_MetaData[];
#endif
		static void NewProp_RadialVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RadialVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationPrimitiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cylinder" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** If true, get the particle velocity form the radial distance inside the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "If true, get the particle velocity form the radial distance inside the primitive." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveCylinder*)Obj)->RadialVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity = { "RadialVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveCylinder), &Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The radius of the cylinder. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "The radius of the cylinder." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius = { "StartRadius", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartRadius), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The height of the cylinder, centered about the location. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "The height of the cylinder, centered about the location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight = { "StartHeight", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, StartHeight), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 * Determine the particle system axis that should represent the height of the cylinder.\n\x09 * Can be one of the following:\n\x09 *   PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.\n\x09 *   PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.\n\x09 *   PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h" },
		{ "ToolTip", "Determine the particle system axis that should represent the height of the cylinder.\nCan be one of the following:\n  PMLPC_HEIGHTAXIS_X - Orient the height along the particle system X-axis.\n  PMLPC_HEIGHTAXIS_Y - Orient the height along the particle system Y-axis.\n  PMLPC_HEIGHTAXIS_Z - Orient the height along the particle system Z-axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis = { "HeightAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveCylinder, HeightAxis), Z_Construct_UEnum_Engine_CylinderHeightAxis, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis_MetaData)) }; // 3839940190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_RadialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_StartHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::NewProp_HeightAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveCylinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::ClassParams = {
		&UParticleModuleLocationPrimitiveCylinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveCylinder>()
	{
		return UParticleModuleLocationPrimitiveCylinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveCylinder);
	UParticleModuleLocationPrimitiveCylinder::~UParticleModuleLocationPrimitiveCylinder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::EnumInfo[] = {
		{ CylinderHeightAxis_StaticEnum, TEXT("CylinderHeightAxis"), &Z_Registration_Info_UEnum_CylinderHeightAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3839940190U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveCylinder::StaticClass, TEXT("UParticleModuleLocationPrimitiveCylinder"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveCylinder), 2715525617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_2213194140(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
