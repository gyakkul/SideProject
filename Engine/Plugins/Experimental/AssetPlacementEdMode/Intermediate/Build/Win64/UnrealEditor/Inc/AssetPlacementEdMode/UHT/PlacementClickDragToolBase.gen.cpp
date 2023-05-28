// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementClickDragToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementClickDragToolBase() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementClickDragToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementClickDragToolBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementClickDragToolBase::StaticRegisterNativesUPlacementClickDragToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementClickDragToolBase);
	UClass* Z_Construct_UClass_UPlacementClickDragToolBase_NoRegister()
	{
		return UPlacementClickDragToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementClickDragToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementClickDragToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementBrushToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementClickDragToolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementClickDragToolBase.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementClickDragToolBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementClickDragToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementClickDragToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementClickDragToolBase_Statics::ClassParams = {
		&UPlacementClickDragToolBase::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementClickDragToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementClickDragToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementClickDragToolBase()
	{
		if (!Z_Registration_Info_UClass_UPlacementClickDragToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementClickDragToolBase.OuterSingleton, Z_Construct_UClass_UPlacementClickDragToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementClickDragToolBase.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementClickDragToolBase>()
	{
		return UPlacementClickDragToolBase::StaticClass();
	}
	UPlacementClickDragToolBase::UPlacementClickDragToolBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementClickDragToolBase);
	UPlacementClickDragToolBase::~UPlacementClickDragToolBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementClickDragToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementClickDragToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementClickDragToolBase, UPlacementClickDragToolBase::StaticClass, TEXT("UPlacementClickDragToolBase"), &Z_Registration_Info_UClass_UPlacementClickDragToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementClickDragToolBase), 4073291669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementClickDragToolBase_h_726365009(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementClickDragToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementClickDragToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
