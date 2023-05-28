// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Delete.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Delete() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Delete();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Delete_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Delete::StaticRegisterNativesUGeomModifier_Delete()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Delete);
	UClass* Z_Construct_UClass_UGeomModifier_Delete_NoRegister()
	{
		return UGeomModifier_Delete::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Delete_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Delete_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Delete_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Delete.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Delete.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Delete_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Delete>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Delete_Statics::ClassParams = {
		&UGeomModifier_Delete::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Delete_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Delete_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Delete()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Delete.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Delete.OuterSingleton, Z_Construct_UClass_UGeomModifier_Delete_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Delete.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Delete>()
	{
		return UGeomModifier_Delete::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Delete);
	UGeomModifier_Delete::~UGeomModifier_Delete() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Delete_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Delete_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Delete, UGeomModifier_Delete::StaticClass, TEXT("UGeomModifier_Delete"), &Z_Registration_Info_UClass_UGeomModifier_Delete, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Delete), 624827605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Delete_h_174777478(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Delete_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Delete_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
