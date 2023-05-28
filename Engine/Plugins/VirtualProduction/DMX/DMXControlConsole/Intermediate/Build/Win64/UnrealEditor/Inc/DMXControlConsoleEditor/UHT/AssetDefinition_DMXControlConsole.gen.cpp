// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinitions/AssetDefinition_DMXControlConsole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_DMXControlConsole() {}
// Cross Module References
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_DMXControlConsole();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_DMXControlConsole_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UAssetDefinition_DMXControlConsole::StaticRegisterNativesUAssetDefinition_DMXControlConsole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_DMXControlConsole);
	UClass* Z_Construct_UClass_UAssetDefinition_DMXControlConsole_NoRegister()
	{
		return UAssetDefinition_DMXControlConsole::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitions/AssetDefinition_DMXControlConsole.h" },
		{ "ModuleRelativePath", "Private/AssetDefinitions/AssetDefinition_DMXControlConsole.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_DMXControlConsole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::ClassParams = {
		&UAssetDefinition_DMXControlConsole::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_DMXControlConsole()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_DMXControlConsole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_DMXControlConsole.OuterSingleton, Z_Construct_UClass_UAssetDefinition_DMXControlConsole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_DMXControlConsole.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UAssetDefinition_DMXControlConsole>()
	{
		return UAssetDefinition_DMXControlConsole::StaticClass();
	}
	UAssetDefinition_DMXControlConsole::UAssetDefinition_DMXControlConsole() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_DMXControlConsole);
	UAssetDefinition_DMXControlConsole::~UAssetDefinition_DMXControlConsole() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_AssetDefinitions_AssetDefinition_DMXControlConsole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_AssetDefinitions_AssetDefinition_DMXControlConsole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_DMXControlConsole, UAssetDefinition_DMXControlConsole::StaticClass, TEXT("UAssetDefinition_DMXControlConsole"), &Z_Registration_Info_UClass_UAssetDefinition_DMXControlConsole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_DMXControlConsole), 422358422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_AssetDefinitions_AssetDefinition_DMXControlConsole_h_586782780(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_AssetDefinitions_AssetDefinition_DMXControlConsole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_AssetDefinitions_AssetDefinition_DMXControlConsole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
