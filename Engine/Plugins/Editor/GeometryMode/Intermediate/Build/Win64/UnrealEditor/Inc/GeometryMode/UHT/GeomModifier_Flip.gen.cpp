// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Flip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Flip() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Flip();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Flip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Flip::StaticRegisterNativesUGeomModifier_Flip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Flip);
	UClass* Z_Construct_UClass_UGeomModifier_Flip_NoRegister()
	{
		return UGeomModifier_Flip::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Flip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Flip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Flip_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Flip.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Flip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Flip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Flip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Flip_Statics::ClassParams = {
		&UGeomModifier_Flip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Flip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Flip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Flip()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Flip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Flip.OuterSingleton, Z_Construct_UClass_UGeomModifier_Flip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Flip.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Flip>()
	{
		return UGeomModifier_Flip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Flip);
	UGeomModifier_Flip::~UGeomModifier_Flip() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Flip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Flip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Flip, UGeomModifier_Flip::StaticClass, TEXT("UGeomModifier_Flip"), &Z_Registration_Info_UClass_UGeomModifier_Flip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Flip), 291922328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Flip_h_2003576464(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Flip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Flip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
