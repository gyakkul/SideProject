// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/PlaneDistanceFromHitMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneDistanceFromHitMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UPlaneDistanceFromHitMechanic::StaticRegisterNativesUPlaneDistanceFromHitMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneDistanceFromHitMechanic);
	UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister()
	{
		return UPlaneDistanceFromHitMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPlaneDistanceFromHitMechanic implements an interaction where a Height/Distance from a plane\n * is defined by intersecting a ray with a target mesh, and then using that hit point to define the distance.\n * Optionally the hit point can be snapped (eg to a world grid), and also the ray can hit other objects to define the height.\n *\n */" },
		{ "IncludePath", "Mechanics/PlaneDistanceFromHitMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/PlaneDistanceFromHitMechanic.h" },
		{ "ToolTip", "UPlaneDistanceFromHitMechanic implements an interaction where a Height/Distance from a plane\nis defined by intersecting a ray with a target mesh, and then using that hit point to define the distance.\nOptionally the hit point can be snapped (eg to a world grid), and also the ray can hit other objects to define the height." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneDistanceFromHitMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::ClassParams = {
		&UPlaneDistanceFromHitMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic()
	{
		if (!Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton, Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPlaneDistanceFromHitMechanic>()
	{
		return UPlaneDistanceFromHitMechanic::StaticClass();
	}
	UPlaneDistanceFromHitMechanic::UPlaneDistanceFromHitMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneDistanceFromHitMechanic);
	UPlaneDistanceFromHitMechanic::~UPlaneDistanceFromHitMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneDistanceFromHitMechanic, UPlaneDistanceFromHitMechanic::StaticClass, TEXT("UPlaneDistanceFromHitMechanic"), &Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneDistanceFromHitMechanic), 2795780851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_4111376011(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
