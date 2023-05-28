// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modes/PlacementModeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementModeSubsystem() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UAssetPlacementSettings_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSubsystem();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModeSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModeSubsystem::StaticRegisterNativesUPlacementModeSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModeSubsystem);
	UClass* Z_Construct_UClass_UPlacementModeSubsystem_NoRegister()
	{
		return UPlacementModeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModeSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Modes/PlacementModeSubsystem.h" },
		{ "ModuleRelativePath", "Private/Modes/PlacementModeSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModeSubsystem_Statics::NewProp_ModeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/Modes/PlacementModeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlacementModeSubsystem_Statics::NewProp_ModeSettings = { "ModeSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementModeSubsystem, ModeSettings), Z_Construct_UClass_UAssetPlacementSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlacementModeSubsystem_Statics::NewProp_ModeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeSubsystem_Statics::NewProp_ModeSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementModeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementModeSubsystem_Statics::NewProp_ModeSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModeSubsystem_Statics::ClassParams = {
		&UPlacementModeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementModeSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModeSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPlacementModeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModeSubsystem.OuterSingleton, Z_Construct_UClass_UPlacementModeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModeSubsystem.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModeSubsystem>()
	{
		return UPlacementModeSubsystem::StaticClass();
	}
	UPlacementModeSubsystem::UPlacementModeSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModeSubsystem);
	UPlacementModeSubsystem::~UPlacementModeSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Modes_PlacementModeSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Modes_PlacementModeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModeSubsystem, UPlacementModeSubsystem::StaticClass, TEXT("UPlacementModeSubsystem"), &Z_Registration_Info_UClass_UPlacementModeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModeSubsystem), 1511136237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Modes_PlacementModeSubsystem_h_1247215418(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Modes_PlacementModeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Modes_PlacementModeSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
