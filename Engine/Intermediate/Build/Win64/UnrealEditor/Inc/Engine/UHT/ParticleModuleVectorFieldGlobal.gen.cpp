// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldGlobal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldGlobal::StaticRegisterNativesUParticleModuleVectorFieldGlobal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldGlobal);
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister()
	{
		return UParticleModuleVectorFieldGlobal::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalVectorFieldTightness_MetaData[];
#endif
		static void NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalVectorFieldTightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Global Vector Fields" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Property override value for global vector field tightness.  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Property override value for global vector field tightness." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldGlobal*)Obj)->bOverrideGlobalVectorFieldTightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness = { "bOverrideGlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldGlobal), &Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Global vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field scale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Global vector field tightness override. */" },
		{ "editcondition", "bOverrideGlobalVectorFieldTightness" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field tightness override." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldGlobal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams = {
		&UParticleModuleVectorFieldGlobal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldGlobal>()
	{
		return UParticleModuleVectorFieldGlobal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldGlobal);
	UParticleModuleVectorFieldGlobal::~UParticleModuleVectorFieldGlobal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldGlobal, UParticleModuleVectorFieldGlobal::StaticClass, TEXT("UParticleModuleVectorFieldGlobal"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldGlobal), 83148993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_2715484459(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldGlobal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
