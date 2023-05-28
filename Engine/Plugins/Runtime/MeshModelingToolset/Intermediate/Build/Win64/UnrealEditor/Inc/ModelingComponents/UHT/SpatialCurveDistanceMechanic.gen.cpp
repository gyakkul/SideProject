// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/SpatialCurveDistanceMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialCurveDistanceMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void USpatialCurveDistanceMechanic::StaticRegisterNativesUSpatialCurveDistanceMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpatialCurveDistanceMechanic);
	UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister()
	{
		return USpatialCurveDistanceMechanic::StaticClass();
	}
	struct Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Mechanics/SpatialCurveDistanceMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/SpatialCurveDistanceMechanic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialCurveDistanceMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::ClassParams = {
		&USpatialCurveDistanceMechanic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic()
	{
		if (!Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton, Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USpatialCurveDistanceMechanic>()
	{
		return USpatialCurveDistanceMechanic::StaticClass();
	}
	USpatialCurveDistanceMechanic::USpatialCurveDistanceMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialCurveDistanceMechanic);
	USpatialCurveDistanceMechanic::~USpatialCurveDistanceMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpatialCurveDistanceMechanic, USpatialCurveDistanceMechanic::StaticClass, TEXT("USpatialCurveDistanceMechanic"), &Z_Registration_Info_UClass_USpatialCurveDistanceMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialCurveDistanceMechanic), 1173330712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_1998041843(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
