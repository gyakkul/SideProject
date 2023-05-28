// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Camera/ParticleModuleCameraOffset.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod;
	static UEnum* EParticleCameraOffsetUpdateMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCameraOffsetUpdateMethod"));
		}
		return Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCameraOffsetUpdateMethod>()
	{
		return EParticleCameraOffsetUpdateMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enumerators[] = {
		{ "EPCOUM_DirectSet", (int64)EPCOUM_DirectSet },
		{ "EPCOUM_Additive", (int64)EPCOUM_Additive },
		{ "EPCOUM_Scalar", (int64)EPCOUM_Scalar },
		{ "EPCOUM_MAX", (int64)EPCOUM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09The update method for the offset\n */" },
		{ "EPCOUM_Additive.DisplayName", "Additive" },
		{ "EPCOUM_Additive.Name", "EPCOUM_Additive" },
		{ "EPCOUM_DirectSet.DisplayName", "Direct Set" },
		{ "EPCOUM_DirectSet.Name", "EPCOUM_DirectSet" },
		{ "EPCOUM_MAX.Name", "EPCOUM_MAX" },
		{ "EPCOUM_Scalar.DisplayName", "Scalar" },
		{ "EPCOUM_Scalar.Name", "EPCOUM_Scalar" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The update method for the offset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleCameraOffsetUpdateMethod",
		"EParticleCameraOffsetUpdateMethod",
		Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod()
	{
		if (!Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod.InnerSingleton;
	}
	void UParticleModuleCameraOffset::StaticRegisterNativesUParticleModuleCameraOffset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCameraOffset);
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister()
	{
		return UParticleModuleCameraOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[];
#endif
		static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCameraBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Camera Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** \n\x09 *\x09The camera-relative offset to apply to sprite location\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The camera-relative offset to apply to sprite location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCameraOffset, CameraOffset), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If true, the offset will only be processed at spawn time */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "If true, the offset will only be processed at spawn time" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
	{
		((UParticleModuleCameraOffset*)Obj)->bSpawnTimeOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleCameraOffset), &Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * How to update the offset for this module.\n\x09 * DirectSet - Set the value directly (overwrite any previous setting)\n\x09 * Additive  - Add the offset of this module to the existing offset\n\x09 * Scalar    - Scale the existing offset by the value of this module\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "How to update the offset for this module.\nDirectSet - Set the value directly (overwrite any previous setting)\nAdditive  - Add the offset of this module to the existing offset\nScalar    - Scale the existing offset by the value of this module" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCameraOffset, UpdateMethod), Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData)) }; // 4280708374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCameraOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams = {
		&UParticleModuleCameraOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton, Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleCameraOffset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraOffset>()
	{
		return UParticleModuleCameraOffset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraOffset);
	UParticleModuleCameraOffset::~UParticleModuleCameraOffset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::EnumInfo[] = {
		{ EParticleCameraOffsetUpdateMethod_StaticEnum, TEXT("EParticleCameraOffsetUpdateMethod"), &Z_Registration_Info_UEnum_EParticleCameraOffsetUpdateMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4280708374U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCameraOffset, UParticleModuleCameraOffset::StaticClass, TEXT("UParticleModuleCameraOffset"), &Z_Registration_Info_UClass_UParticleModuleCameraOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCameraOffset), 520082164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_1968644336(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
