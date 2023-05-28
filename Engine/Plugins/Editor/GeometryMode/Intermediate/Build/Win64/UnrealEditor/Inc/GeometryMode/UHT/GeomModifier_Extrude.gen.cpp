// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Extrude.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Extrude() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Extrude();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Extrude_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Extrude::StaticRegisterNativesUGeomModifier_Extrude()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Extrude);
	UClass* Z_Construct_UClass_UGeomModifier_Extrude_NoRegister()
	{
		return UGeomModifier_Extrude::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Extrude_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveCoordSystem_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveCoordSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Extrude_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Extrude.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Extrude, Length), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Extrude, Segments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier_Extrude.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem = { "SaveCoordSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Extrude, SaveCoordSystem), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Extrude_Statics::NewProp_SaveCoordSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Extrude_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Extrude>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Extrude_Statics::ClassParams = {
		&UGeomModifier_Extrude::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Extrude_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Extrude()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Extrude.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Extrude.OuterSingleton, Z_Construct_UClass_UGeomModifier_Extrude_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Extrude.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Extrude>()
	{
		return UGeomModifier_Extrude::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Extrude);
	UGeomModifier_Extrude::~UGeomModifier_Extrude() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Extrude_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Extrude_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Extrude, UGeomModifier_Extrude::StaticClass, TEXT("UGeomModifier_Extrude"), &Z_Registration_Info_UClass_UGeomModifier_Extrude, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Extrude), 2668907591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Extrude_h_868094242(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Extrude_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Extrude_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
