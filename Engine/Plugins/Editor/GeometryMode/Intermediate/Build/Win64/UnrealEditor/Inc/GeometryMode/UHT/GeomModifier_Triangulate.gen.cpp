// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Triangulate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Triangulate() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Triangulate();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Triangulate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Triangulate::StaticRegisterNativesUGeomModifier_Triangulate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Triangulate);
	UClass* Z_Construct_UClass_UGeomModifier_Triangulate_NoRegister()
	{
		return UGeomModifier_Triangulate::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Triangulate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Triangulate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Triangulate_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Triangulate.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Triangulate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Triangulate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Triangulate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Triangulate_Statics::ClassParams = {
		&UGeomModifier_Triangulate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Triangulate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Triangulate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Triangulate()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Triangulate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Triangulate.OuterSingleton, Z_Construct_UClass_UGeomModifier_Triangulate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Triangulate.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Triangulate>()
	{
		return UGeomModifier_Triangulate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Triangulate);
	UGeomModifier_Triangulate::~UGeomModifier_Triangulate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Triangulate, UGeomModifier_Triangulate::StaticClass, TEXT("UGeomModifier_Triangulate"), &Z_Registration_Info_UClass_UGeomModifier_Triangulate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Triangulate), 3745057506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_355361415(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Triangulate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
