// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Modules/Location/ParticleModulePivotOffset.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModulePivotOffset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModulePivotOffset::StaticRegisterNativesUParticleModulePivotOffset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModulePivotOffset);
	UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister()
	{
		return UParticleModulePivotOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModulePivotOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModulePivotOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pivot Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Modules/Location/ParticleModulePivotOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "PivotOffset" },
		{ "Comment", "/** Offset applied in UV space to the particle vertex positions. Defaults to (0.5,0.5) putting the pivot in the centre of the partilce. */" },
		{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
		{ "ToolTip", "Offset applied in UV space to the particle vertex positions. Defaults to (0.5,0.5) putting the pivot in the centre of the partilce." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModulePivotOffset, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModulePivotOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModulePivotOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModulePivotOffset_Statics::ClassParams = {
		&UParticleModulePivotOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModulePivotOffset()
	{
		if (!Z_Registration_Info_UClass_UParticleModulePivotOffset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModulePivotOffset.OuterSingleton, Z_Construct_UClass_UParticleModulePivotOffset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModulePivotOffset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModulePivotOffset>()
	{
		return UParticleModulePivotOffset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModulePivotOffset);
	UParticleModulePivotOffset::~UParticleModulePivotOffset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModulePivotOffset, UParticleModulePivotOffset::StaticClass, TEXT("UParticleModulePivotOffset"), &Z_Registration_Info_UClass_UParticleModulePivotOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModulePivotOffset), 224663052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_4089245274(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Modules_Location_ParticleModulePivotOffset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
