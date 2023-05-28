// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSphericalParticleOpacity.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphericalParticleOpacity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSphericalParticleOpacity::StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSphericalParticleOpacity);
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister()
	{
		return UMaterialExpressionSphericalParticleOpacity::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstantDensity' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, Density), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData[] = {
		{ "Category", "MaterialExpressionSphericalParticleOpacity" },
		{ "Comment", "/** Constant density of the particle sphere.  Will be overridden if Density is connected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "OverridingInputProperty", "Density" },
		{ "ToolTip", "Constant density of the particle sphere.  Will be overridden if Density is connected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity = { "ConstantDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, ConstantDensity), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphericalParticleOpacity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams = {
		&UMaterialExpressionSphericalParticleOpacity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSphericalParticleOpacity>()
	{
		return UMaterialExpressionSphericalParticleOpacity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphericalParticleOpacity);
	UMaterialExpressionSphericalParticleOpacity::~UMaterialExpressionSphericalParticleOpacity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity, UMaterialExpressionSphericalParticleOpacity::StaticClass, TEXT("UMaterialExpressionSphericalParticleOpacity"), &Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSphericalParticleOpacity), 714718817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_2359119532(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphericalParticleOpacity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
