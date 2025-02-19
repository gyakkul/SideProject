// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScale.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSizeScale::StaticRegisterNativesUParticleModuleSizeScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSizeScale);
	UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister()
	{
		return UParticleModuleSizeScale::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableX_MetaData[];
#endif
		static void NewProp_EnableX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableY_MetaData[];
#endif
		static void NewProp_EnableY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableZ_MetaData[];
#endif
		static void NewProp_EnableZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size Scale" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScale.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/**\n\x09 *\x09The amount the BaseSize should be scaled before being used as the size of the particle. \n\x09 *\x09The value is retrieved using the RelativeTime of the particle during its update.\n\x09 *\x09NOTE: this module overrides any size adjustments made prior to this module in that frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "The amount the BaseSize should be scaled before being used as the size of the particle.\nThe value is retrieved using the RelativeTime of the particle during its update.\nNOTE: this module overrides any size adjustments made prior to this module in that frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSizeScale, SizeScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX = { "EnableX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY = { "EnableY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ = { "EnableZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams = {
		&UParticleModuleSizeScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeScale()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton, Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSizeScale.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScale>()
	{
		return UParticleModuleSizeScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScale);
	UParticleModuleSizeScale::~UParticleModuleSizeScale() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSizeScale, UParticleModuleSizeScale::StaticClass, TEXT("UParticleModuleSizeScale"), &Z_Registration_Info_UClass_UParticleModuleSizeScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSizeScale), 2517572164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_1766071951(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Size_ParticleModuleSizeScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
