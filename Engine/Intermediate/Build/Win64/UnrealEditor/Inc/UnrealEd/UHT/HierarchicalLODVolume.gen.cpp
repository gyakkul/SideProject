// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/HierarchicalLODVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLODVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UNREALED_API UClass* Z_Construct_UClass_AHierarchicalLODVolume();
	UNREALED_API UClass* Z_Construct_UClass_AHierarchicalLODVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void AHierarchicalLODVolume::StaticRegisterNativesAHierarchicalLODVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHierarchicalLODVolume);
	UClass* Z_Construct_UClass_AHierarchicalLODVolume_NoRegister()
	{
		return AHierarchicalLODVolume::StaticClass();
	}
	struct Z_Construct_UClass_AHierarchicalLODVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOverlappingActors_MetaData[];
#endif
		static void NewProp_bIncludeOverlappingActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOverlappingActors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ApplyOnlyToSpecificHLODLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyOnlyToSpecificHLODLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyOnlyToSpecificHLODLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHierarchicalLODVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An invisible volume used to manually define/create an HLOD cluster. */" },
		{ "HideCategories", "Actor Collision Cooking Input LOD Physics Replication Rendering Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "HierarchicalLODVolume.h" },
		{ "ModuleRelativePath", "Public/HierarchicalLODVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to manually define/create an HLOD cluster." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData[] = {
		{ "Category", "HLOD Volume" },
		{ "Comment", "/** When set this volume will incorporate actors which bounds overlap with the volume, otherwise only actors which are completely inside of the volume are incorporated */" },
		{ "ModuleRelativePath", "Public/HierarchicalLODVolume.h" },
		{ "ToolTip", "When set this volume will incorporate actors which bounds overlap with the volume, otherwise only actors which are completely inside of the volume are incorporated" },
	};
#endif
	void Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_SetBit(void* Obj)
	{
		((AHierarchicalLODVolume*)Obj)->bIncludeOverlappingActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors = { "bIncludeOverlappingActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHierarchicalLODVolume), &Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels_Inner = { "ApplyOnlyToSpecificHLODLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels_MetaData[] = {
		{ "Category", "HLOD Volume" },
		{ "Comment", "/** If set, this volume will only be applied to HLOD levels contained in the array.  If empty, it will apply to ALL HLOD levels */" },
		{ "ModuleRelativePath", "Public/HierarchicalLODVolume.h" },
		{ "ToolTip", "If set, this volume will only be applied to HLOD levels contained in the array.  If empty, it will apply to ALL HLOD levels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels = { "ApplyOnlyToSpecificHLODLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHierarchicalLODVolume, ApplyOnlyToSpecificHLODLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_bIncludeOverlappingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHierarchicalLODVolume_Statics::NewProp_ApplyOnlyToSpecificHLODLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHierarchicalLODVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHierarchicalLODVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHierarchicalLODVolume_Statics::ClassParams = {
		&AHierarchicalLODVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHierarchicalLODVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHierarchicalLODVolume()
	{
		if (!Z_Registration_Info_UClass_AHierarchicalLODVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHierarchicalLODVolume.OuterSingleton, Z_Construct_UClass_AHierarchicalLODVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHierarchicalLODVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<AHierarchicalLODVolume>()
	{
		return AHierarchicalLODVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHierarchicalLODVolume);
	AHierarchicalLODVolume::~AHierarchicalLODVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHierarchicalLODVolume, AHierarchicalLODVolume::StaticClass, TEXT("AHierarchicalLODVolume"), &Z_Registration_Info_UClass_AHierarchicalLODVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHierarchicalLODVolume), 1894271775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_159330137(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
