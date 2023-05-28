// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementEraseTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementEraseTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeEraseTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeEraseTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeEraseToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeEraseToolBuilder_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModeEraseToolBuilder::StaticRegisterNativesUPlacementModeEraseToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeEraseToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModeEraseToolBuilder_NoRegister()
	{
		return UPlacementModeEraseToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementToolBuilderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementEraseTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementEraseTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeEraseToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::ClassParams = {
		&UPlacementModeEraseToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeEraseToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeEraseToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeEraseToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModeEraseToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeEraseToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeEraseToolBuilder>()
	{
		return UPlacementModeEraseToolBuilder::StaticClass();
	}
	UPlacementModeEraseToolBuilder::UPlacementModeEraseToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeEraseToolBuilder);
	UPlacementModeEraseToolBuilder::~UPlacementModeEraseToolBuilder() {}
	void UPlacementModeEraseTool::StaticRegisterNativesUPlacementModeEraseTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeEraseTool);
	UClass* Z_Construct_UClass_UPlacementModeEraseTool_NoRegister()
	{
		return UPlacementModeEraseTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeEraseTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeEraseTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementBrushToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeEraseTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementEraseTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementEraseTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeEraseTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeEraseTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeEraseTool_Statics::ClassParams = {
		&UPlacementModeEraseTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeEraseTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeEraseTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeEraseTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeEraseTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeEraseTool.OuterSingleton, Z_Construct_UClass_UPlacementModeEraseTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeEraseTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeEraseTool>()
	{
		return UPlacementModeEraseTool::StaticClass();
	}
	UPlacementModeEraseTool::UPlacementModeEraseTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeEraseTool);
	UPlacementModeEraseTool::~UPlacementModeEraseTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementEraseTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementEraseTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModeEraseToolBuilder, UPlacementModeEraseToolBuilder::StaticClass, TEXT("UPlacementModeEraseToolBuilder"), &Z_Registration_Info_UClass_UPlacementModeEraseToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeEraseToolBuilder), 1227002314U) },
		{ Z_Construct_UClass_UPlacementModeEraseTool, UPlacementModeEraseTool::StaticClass, TEXT("UPlacementModeEraseTool"), &Z_Registration_Info_UClass_UPlacementModeEraseTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeEraseTool), 4110905503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementEraseTool_h_979027110(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementEraseTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementEraseTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
