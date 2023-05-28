// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Lathe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Lathe() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Lathe();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Lathe_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Lathe::StaticRegisterNativesUGeomModifier_Lathe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Lathe);
	UClass* Z_Construct_UClass_UGeomModifier_Lathe_NoRegister()
	{
		return UGeomModifier_Lathe::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Lathe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignToSide_MetaData[];
#endif
		static void NewProp_AlignToSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Lathe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Lathe.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments = { "TotalSegments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Lathe, TotalSegments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Lathe, Segments), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_SetBit(void* Obj)
	{
		((UGeomModifier_Lathe*)Obj)->AlignToSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide = { "AlignToSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Lathe), &Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData[] = {
		{ "Comment", "/** The axis of rotation to use when creating the brush.  This is automatically determined from the current ortho viewport. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Lathe.h" },
		{ "ToolTip", "The axis of rotation to use when creating the brush.  This is automatically determined from the current ortho viewport." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Lathe, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis_MetaData)) }; // 2376982772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_TotalSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_AlignToSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Lathe_Statics::NewProp_Axis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Lathe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Lathe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Lathe_Statics::ClassParams = {
		&UGeomModifier_Lathe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Lathe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Lathe()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Lathe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Lathe.OuterSingleton, Z_Construct_UClass_UGeomModifier_Lathe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Lathe.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Lathe>()
	{
		return UGeomModifier_Lathe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Lathe);
	UGeomModifier_Lathe::~UGeomModifier_Lathe() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Lathe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Lathe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Lathe, UGeomModifier_Lathe::StaticClass, TEXT("UGeomModifier_Lathe"), &Z_Registration_Info_UClass_UGeomModifier_Lathe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Lathe), 3347936266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Lathe_h_3293671042(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Lathe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Lathe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
