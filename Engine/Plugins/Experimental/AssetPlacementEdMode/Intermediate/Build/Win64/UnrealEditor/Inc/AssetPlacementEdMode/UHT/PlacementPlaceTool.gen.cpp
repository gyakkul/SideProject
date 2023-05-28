// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementPlaceTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementPlaceTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlacementTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlacementTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlacementToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlacementToolBuilder_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModePlacementToolBuilder::StaticRegisterNativesUPlacementModePlacementToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModePlacementToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModePlacementToolBuilder_NoRegister()
	{
		return UPlacementModePlacementToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementToolBuilderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementPlaceTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModePlacementToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::ClassParams = {
		&UPlacementModePlacementToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModePlacementToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModePlacementToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModePlacementToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModePlacementToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModePlacementToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModePlacementToolBuilder>()
	{
		return UPlacementModePlacementToolBuilder::StaticClass();
	}
	UPlacementModePlacementToolBuilder::UPlacementModePlacementToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModePlacementToolBuilder);
	UPlacementModePlacementToolBuilder::~UPlacementModePlacementToolBuilder() {}
	void UPlacementModePlacementTool::StaticRegisterNativesUPlacementModePlacementTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModePlacementTool);
	UClass* Z_Construct_UClass_UPlacementModePlacementTool_NoRegister()
	{
		return UPlacementModePlacementTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModePlacementTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModePlacementTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementBrushToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlacementTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementPlaceTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModePlacementTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModePlacementTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModePlacementTool_Statics::ClassParams = {
		&UPlacementModePlacementTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlacementTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlacementTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModePlacementTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModePlacementTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModePlacementTool.OuterSingleton, Z_Construct_UClass_UPlacementModePlacementTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModePlacementTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModePlacementTool>()
	{
		return UPlacementModePlacementTool::StaticClass();
	}
	UPlacementModePlacementTool::UPlacementModePlacementTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModePlacementTool);
	UPlacementModePlacementTool::~UPlacementModePlacementTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModePlacementToolBuilder, UPlacementModePlacementToolBuilder::StaticClass, TEXT("UPlacementModePlacementToolBuilder"), &Z_Registration_Info_UClass_UPlacementModePlacementToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModePlacementToolBuilder), 1090565956U) },
		{ Z_Construct_UClass_UPlacementModePlacementTool, UPlacementModePlacementTool::StaticClass, TEXT("UPlacementModePlacementTool"), &Z_Registration_Info_UClass_UPlacementModePlacementTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModePlacementTool), 4157666753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceTool_h_4177563923(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
