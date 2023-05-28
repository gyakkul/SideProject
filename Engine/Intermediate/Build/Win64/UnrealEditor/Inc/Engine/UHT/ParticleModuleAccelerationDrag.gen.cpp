// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDrag() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAccelerationDrag::StaticRegisterNativesUParticleModuleAccelerationDrag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAccelerationDrag);
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister()
	{
		return UParticleModuleAccelerationDrag::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientRaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragCoefficientRaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Drag" },
		{ "HideCategories", "Object Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Comment", "/** Per-particle drag coefficient. Evaluted using emitter time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficient_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData[] = {
		{ "Category", "Drag" },
		{ "Comment", "/** Per-particle drag coefficient. Evaluted using emitter time. */" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw = { "DragCoefficientRaw", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficientRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationDrag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams = {
		&UParticleModuleAccelerationDrag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton, Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAccelerationDrag.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationDrag>()
	{
		return UParticleModuleAccelerationDrag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDrag);
	UParticleModuleAccelerationDrag::~UParticleModuleAccelerationDrag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAccelerationDrag, UParticleModuleAccelerationDrag::StaticClass, TEXT("UParticleModuleAccelerationDrag"), &Z_Registration_Info_UClass_UParticleModuleAccelerationDrag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAccelerationDrag), 1930570397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_3412489327(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationDrag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
