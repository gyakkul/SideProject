// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Optimize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Optimize() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Optimize();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Optimize_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Triangulate();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Optimize::StaticRegisterNativesUGeomModifier_Optimize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Optimize);
	UClass* Z_Construct_UClass_UGeomModifier_Optimize_NoRegister()
	{
		return UGeomModifier_Optimize::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Optimize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Optimize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Triangulate,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Optimize_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Optimize.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Optimize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Optimize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Optimize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Optimize_Statics::ClassParams = {
		&UGeomModifier_Optimize::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Optimize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Optimize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Optimize()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Optimize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Optimize.OuterSingleton, Z_Construct_UClass_UGeomModifier_Optimize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Optimize.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Optimize>()
	{
		return UGeomModifier_Optimize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Optimize);
	UGeomModifier_Optimize::~UGeomModifier_Optimize() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Optimize, UGeomModifier_Optimize::StaticClass, TEXT("UGeomModifier_Optimize"), &Z_Registration_Info_UClass_UGeomModifier_Optimize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Optimize), 1063589423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_3920127751(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Optimize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
