// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementFillTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementFillTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementClickDragToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeFillTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeFillTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeFillToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeFillToolBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModeFillToolBuilder::StaticRegisterNativesUPlacementModeFillToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeFillToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModeFillToolBuilder_NoRegister()
	{
		return UPlacementModeFillToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementFillTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementFillTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeFillToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::ClassParams = {
		&UPlacementModeFillToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeFillToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeFillToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeFillToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModeFillToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeFillToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeFillToolBuilder>()
	{
		return UPlacementModeFillToolBuilder::StaticClass();
	}
	UPlacementModeFillToolBuilder::UPlacementModeFillToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeFillToolBuilder);
	UPlacementModeFillToolBuilder::~UPlacementModeFillToolBuilder() {}
	void UPlacementModeFillTool::StaticRegisterNativesUPlacementModeFillTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeFillTool);
	UClass* Z_Construct_UClass_UPlacementModeFillTool_NoRegister()
	{
		return UPlacementModeFillTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeFillTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeFillTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementClickDragToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeFillTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementFillTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementFillTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeFillTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeFillTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeFillTool_Statics::ClassParams = {
		&UPlacementModeFillTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeFillTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeFillTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeFillTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeFillTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeFillTool.OuterSingleton, Z_Construct_UClass_UPlacementModeFillTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeFillTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeFillTool>()
	{
		return UPlacementModeFillTool::StaticClass();
	}
	UPlacementModeFillTool::UPlacementModeFillTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeFillTool);
	UPlacementModeFillTool::~UPlacementModeFillTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementFillTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementFillTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModeFillToolBuilder, UPlacementModeFillToolBuilder::StaticClass, TEXT("UPlacementModeFillToolBuilder"), &Z_Registration_Info_UClass_UPlacementModeFillToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeFillToolBuilder), 14450892U) },
		{ Z_Construct_UClass_UPlacementModeFillTool, UPlacementModeFillTool::StaticClass, TEXT("UPlacementModeFillTool"), &Z_Registration_Info_UClass_UPlacementModeFillTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeFillTool), 3213522436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementFillTool_h_4168448946(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementFillTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementFillTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
