// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterWorldSubsystem() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWorldSubsystem();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterWorldSubsystem::StaticRegisterNativesUDisplayClusterWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterWorldSubsystem);
	UClass* Z_Construct_UClass_UDisplayClusterWorldSubsystem_NoRegister()
	{
		return UDisplayClusterWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n* World Subsystem used to react to level and world changes.\n* When Concert reloads the packages, streamed levels are removed and re-added without invoiking LoadMap which \n* circumvents FDisplayClusterGameManager::StartScene method invoked inside LoadMap method of DisplayClusterGameEngine.\n* This causes issues such as not updating references to DisplayClusterRootActor which causes memory corruption, crashes \n* and graphic corruption. This Subsystem is used to react to changes in number of levels used in the current world \n* and forces DisplayClusterModule to refresh all of its managers.\n*/" },
		{ "IncludePath", "DisplayClusterWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterWorldSubsystem.h" },
		{ "ToolTip", "World Subsystem used to react to level and world changes.\nWhen Concert reloads the packages, streamed levels are removed and re-added without invoiking LoadMap which\ncircumvents FDisplayClusterGameManager::StartScene method invoked inside LoadMap method of DisplayClusterGameEngine.\nThis causes issues such as not updating references to DisplayClusterRootActor which causes memory corruption, crashes\nand graphic corruption. This Subsystem is used to react to changes in number of levels used in the current world\nand forces DisplayClusterModule to refresh all of its managers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::ClassParams = {
		&UDisplayClusterWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterWorldSubsystem.OuterSingleton, Z_Construct_UClass_UDisplayClusterWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterWorldSubsystem.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterWorldSubsystem>()
	{
		return UDisplayClusterWorldSubsystem::StaticClass();
	}
	UDisplayClusterWorldSubsystem::UDisplayClusterWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterWorldSubsystem);
	UDisplayClusterWorldSubsystem::~UDisplayClusterWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterWorldSubsystem, UDisplayClusterWorldSubsystem::StaticClass, TEXT("UDisplayClusterWorldSubsystem"), &Z_Registration_Info_UClass_UDisplayClusterWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterWorldSubsystem), 3265111456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_2499655335(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
