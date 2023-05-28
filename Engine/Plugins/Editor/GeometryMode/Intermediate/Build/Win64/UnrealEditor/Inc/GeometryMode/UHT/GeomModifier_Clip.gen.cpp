// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Clip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Clip() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Clip();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Clip_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Clip::StaticRegisterNativesUGeomModifier_Clip()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Clip);
	UClass* Z_Construct_UClass_UGeomModifier_Clip_NoRegister()
	{
		return UGeomModifier_Clip::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Clip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormal_MetaData[];
#endif
		static void NewProp_bFlipNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplit_MetaData[];
#endif
		static void NewProp_bSplit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipMarkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnappedMouseWorldSpacePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnappedMouseWorldSpacePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Clip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Clip.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_SetBit(void* Obj)
	{
		((UGeomModifier_Clip*)Obj)->bFlipNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal = { "bFlipNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Clip), &Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_SetBit(void* Obj)
	{
		((UGeomModifier_Clip*)Obj)->bSplit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit = { "bSplit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Clip), &Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_Inner = { "ClipMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData[] = {
		{ "Comment", "/** The clip markers that the user has dropped down in the world so far. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
		{ "ToolTip", "The clip markers that the user has dropped down in the world so far." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers = { "ClipMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Clip, ClipMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData[] = {
		{ "Comment", "/** The mouse position, in world space, where the user currently is hovering. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Clip.h" },
		{ "ToolTip", "The mouse position, in world space, where the user currently is hovering." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos = { "SnappedMouseWorldSpacePos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Clip, SnappedMouseWorldSpacePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bFlipNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_bSplit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_ClipMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Clip_Statics::NewProp_SnappedMouseWorldSpacePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Clip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Clip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Clip_Statics::ClassParams = {
		&UGeomModifier_Clip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Clip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Clip()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Clip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Clip.OuterSingleton, Z_Construct_UClass_UGeomModifier_Clip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Clip.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Clip>()
	{
		return UGeomModifier_Clip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Clip);
	UGeomModifier_Clip::~UGeomModifier_Clip() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Clip, UGeomModifier_Clip::StaticClass, TEXT("UGeomModifier_Clip"), &Z_Registration_Info_UClass_UGeomModifier_Clip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Clip), 193437434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_2069514458(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Clip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
