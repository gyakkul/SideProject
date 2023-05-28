// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Edit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Edit() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Edit::StaticRegisterNativesUGeomModifier_Edit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Edit);
	UClass* Z_Construct_UClass_UGeomModifier_Edit_NoRegister()
	{
		return UGeomModifier_Edit::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Edit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Edit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Edit_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Edit.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Edit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Edit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Edit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Edit_Statics::ClassParams = {
		&UGeomModifier_Edit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Edit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Edit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Edit()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Edit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Edit.OuterSingleton, Z_Construct_UClass_UGeomModifier_Edit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Edit.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Edit>()
	{
		return UGeomModifier_Edit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Edit);
	UGeomModifier_Edit::~UGeomModifier_Edit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Edit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Edit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Edit, UGeomModifier_Edit::StaticClass, TEXT("UGeomModifier_Edit"), &Z_Registration_Info_UClass_UGeomModifier_Edit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Edit), 2491265840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Edit_h_980572659(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Edit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Edit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
