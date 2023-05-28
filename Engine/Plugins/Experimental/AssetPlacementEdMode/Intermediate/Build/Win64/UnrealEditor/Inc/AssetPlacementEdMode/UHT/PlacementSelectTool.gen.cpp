// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementSelectTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementSelectTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementClickDragToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSelectTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSelectTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSelectToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSelectToolBuilder_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModeSelectToolBuilder::StaticRegisterNativesUPlacementModeSelectToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeSelectToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModeSelectToolBuilder_NoRegister()
	{
		return UPlacementModeSelectToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementToolBuilderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementSelectTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementSelectTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeSelectToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::ClassParams = {
		&UPlacementModeSelectToolBuilder::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeSelectToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeSelectToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeSelectToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModeSelectToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeSelectToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeSelectToolBuilder>()
	{
		return UPlacementModeSelectToolBuilder::StaticClass();
	}
	UPlacementModeSelectToolBuilder::UPlacementModeSelectToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeSelectToolBuilder);
	UPlacementModeSelectToolBuilder::~UPlacementModeSelectToolBuilder() {}
	void UPlacementModeSelectTool::StaticRegisterNativesUPlacementModeSelectTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeSelectTool);
	UClass* Z_Construct_UClass_UPlacementModeSelectTool_NoRegister()
	{
		return UPlacementModeSelectTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeSelectTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeSelectTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementClickDragToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeSelectTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementSelectTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementSelectTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeSelectTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeSelectTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeSelectTool_Statics::ClassParams = {
		&UPlacementModeSelectTool::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeSelectTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeSelectTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeSelectTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeSelectTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeSelectTool.OuterSingleton, Z_Construct_UClass_UPlacementModeSelectTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeSelectTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeSelectTool>()
	{
		return UPlacementModeSelectTool::StaticClass();
	}
	UPlacementModeSelectTool::UPlacementModeSelectTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeSelectTool);
	UPlacementModeSelectTool::~UPlacementModeSelectTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementSelectTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementSelectTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModeSelectToolBuilder, UPlacementModeSelectToolBuilder::StaticClass, TEXT("UPlacementModeSelectToolBuilder"), &Z_Registration_Info_UClass_UPlacementModeSelectToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeSelectToolBuilder), 2816452157U) },
		{ Z_Construct_UClass_UPlacementModeSelectTool, UPlacementModeSelectTool::StaticClass, TEXT("UPlacementModeSelectTool"), &Z_Registration_Info_UClass_UPlacementModeSelectTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeSelectTool), 244479670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementSelectTool_h_578332980(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementSelectTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementSelectTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
