// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/RemoteControlPresetActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlPresetActorFactory() {}
// Cross Module References
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetActorFactory();
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_RemoteControlUI();
// End Cross Module References
	void URemoteControlPresetActorFactory::StaticRegisterNativesURemoteControlPresetActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlPresetActorFactory);
	UClass* Z_Construct_UClass_URemoteControlPresetActorFactory_NoRegister()
	{
		return URemoteControlPresetActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlPresetActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/RemoteControlPresetActorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RemoteControlPresetActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlPresetActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::ClassParams = {
		&URemoteControlPresetActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlPresetActorFactory()
	{
		if (!Z_Registration_Info_UClass_URemoteControlPresetActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlPresetActorFactory.OuterSingleton, Z_Construct_UClass_URemoteControlPresetActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlPresetActorFactory.OuterSingleton;
	}
	template<> REMOTECONTROLUI_API UClass* StaticClass<URemoteControlPresetActorFactory>()
	{
		return URemoteControlPresetActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlPresetActorFactory);
	URemoteControlPresetActorFactory::~URemoteControlPresetActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlPresetActorFactory, URemoteControlPresetActorFactory::StaticClass, TEXT("URemoteControlPresetActorFactory"), &Z_Registration_Info_UClass_URemoteControlPresetActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlPresetActorFactory), 1569678009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_154400557(TEXT("/Script/RemoteControlUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
