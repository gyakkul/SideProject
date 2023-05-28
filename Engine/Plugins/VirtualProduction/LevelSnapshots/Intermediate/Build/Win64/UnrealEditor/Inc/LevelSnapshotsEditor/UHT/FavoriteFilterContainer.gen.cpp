// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/FavoriteFilterContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFavoriteFilterContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFavoriteFilterContainer();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFavoriteFilterContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void UFavoriteFilterContainer::StaticRegisterNativesUFavoriteFilterContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFavoriteFilterContainer);
	UClass* Z_Construct_UClass_UFavoriteFilterContainer_NoRegister()
	{
		return UFavoriteFilterContainer::StaticClass();
	}
	struct Z_Construct_UClass_UFavoriteFilterContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Favorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Favorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Favorites;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFavoriteFilterContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFavoriteFilterContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Keeps track of selected favorite filters. */" },
		{ "IncludePath", "Data/FavoriteFilterContainer.h" },
		{ "ModuleRelativePath", "Private/Data/FavoriteFilterContainer.h" },
		{ "ToolTip", "Keeps track of selected favorite filters." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites_Inner = { "Favorites", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites_MetaData[] = {
		{ "Comment", "/* The filters the user selected to use. */" },
		{ "ModuleRelativePath", "Private/Data/FavoriteFilterContainer.h" },
		{ "ToolTip", "The filters the user selected to use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites = { "Favorites", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFavoriteFilterContainer, Favorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFavoriteFilterContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFavoriteFilterContainer_Statics::NewProp_Favorites,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFavoriteFilterContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFavoriteFilterContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFavoriteFilterContainer_Statics::ClassParams = {
		&UFavoriteFilterContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFavoriteFilterContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFavoriteFilterContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFavoriteFilterContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFavoriteFilterContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFavoriteFilterContainer()
	{
		if (!Z_Registration_Info_UClass_UFavoriteFilterContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFavoriteFilterContainer.OuterSingleton, Z_Construct_UClass_UFavoriteFilterContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFavoriteFilterContainer.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<UFavoriteFilterContainer>()
	{
		return UFavoriteFilterContainer::StaticClass();
	}
	UFavoriteFilterContainer::UFavoriteFilterContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFavoriteFilterContainer);
	UFavoriteFilterContainer::~UFavoriteFilterContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFavoriteFilterContainer, UFavoriteFilterContainer::StaticClass, TEXT("UFavoriteFilterContainer"), &Z_Registration_Info_UClass_UFavoriteFilterContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFavoriteFilterContainer), 4054967828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_2578301202(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
