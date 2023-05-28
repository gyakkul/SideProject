// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementLassoSelectTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementLassoSelectTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeLassoSelectTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeLassoSelectTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModeLassoSelectToolBuilder::StaticRegisterNativesUPlacementModeLassoSelectToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeLassoSelectToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_NoRegister()
	{
		return UPlacementModeLassoSelectToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementToolBuilderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementLassoSelectTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementLassoSelectTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeLassoSelectToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::ClassParams = {
		&UPlacementModeLassoSelectToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeLassoSelectToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeLassoSelectToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeLassoSelectToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeLassoSelectToolBuilder>()
	{
		return UPlacementModeLassoSelectToolBuilder::StaticClass();
	}
	UPlacementModeLassoSelectToolBuilder::UPlacementModeLassoSelectToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeLassoSelectToolBuilder);
	UPlacementModeLassoSelectToolBuilder::~UPlacementModeLassoSelectToolBuilder() {}
	void UPlacementModeLassoSelectTool::StaticRegisterNativesUPlacementModeLassoSelectTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeLassoSelectTool);
	UClass* Z_Construct_UClass_UPlacementModeLassoSelectTool_NoRegister()
	{
		return UPlacementModeLassoSelectTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementBrushToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementLassoSelectTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementLassoSelectTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeLassoSelectTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::ClassParams = {
		&UPlacementModeLassoSelectTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeLassoSelectTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeLassoSelectTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeLassoSelectTool.OuterSingleton, Z_Construct_UClass_UPlacementModeLassoSelectTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeLassoSelectTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeLassoSelectTool>()
	{
		return UPlacementModeLassoSelectTool::StaticClass();
	}
	UPlacementModeLassoSelectTool::UPlacementModeLassoSelectTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeLassoSelectTool);
	UPlacementModeLassoSelectTool::~UPlacementModeLassoSelectTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementLassoSelectTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementLassoSelectTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModeLassoSelectToolBuilder, UPlacementModeLassoSelectToolBuilder::StaticClass, TEXT("UPlacementModeLassoSelectToolBuilder"), &Z_Registration_Info_UClass_UPlacementModeLassoSelectToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeLassoSelectToolBuilder), 2642988810U) },
		{ Z_Construct_UClass_UPlacementModeLassoSelectTool, UPlacementModeLassoSelectTool::StaticClass, TEXT("UPlacementModeLassoSelectTool"), &Z_Registration_Info_UClass_UPlacementModeLassoSelectTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeLassoSelectTool), 3791024720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementLassoSelectTool_h_1304720029(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementLassoSelectTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementLassoSelectTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
