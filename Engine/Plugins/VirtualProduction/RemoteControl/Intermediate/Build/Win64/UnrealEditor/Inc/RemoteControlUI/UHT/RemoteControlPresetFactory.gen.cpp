// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/RemoteControlPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlPresetFactory() {}
// Cross Module References
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetFactory();
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RemoteControlUI();
// End Cross Module References
	void URemoteControlPresetFactory::StaticRegisterNativesURemoteControlPresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlPresetFactory);
	UClass* Z_Construct_UClass_URemoteControlPresetFactory_NoRegister()
	{
		return URemoteControlPresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlPresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlPresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPresetFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a factory for URemoteControlPreset objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/RemoteControlPresetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RemoteControlPresetFactory.h" },
		{ "ToolTip", "Implements a factory for URemoteControlPreset objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlPresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlPresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlPresetFactory_Statics::ClassParams = {
		&URemoteControlPresetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlPresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlPresetFactory()
	{
		if (!Z_Registration_Info_UClass_URemoteControlPresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlPresetFactory.OuterSingleton, Z_Construct_UClass_URemoteControlPresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlPresetFactory.OuterSingleton;
	}
	template<> REMOTECONTROLUI_API UClass* StaticClass<URemoteControlPresetFactory>()
	{
		return URemoteControlPresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlPresetFactory);
	URemoteControlPresetFactory::~URemoteControlPresetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlPresetFactory, URemoteControlPresetFactory::StaticClass, TEXT("URemoteControlPresetFactory"), &Z_Registration_Info_UClass_URemoteControlPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlPresetFactory), 585915047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_3925601732(TEXT("/Script/RemoteControlUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
