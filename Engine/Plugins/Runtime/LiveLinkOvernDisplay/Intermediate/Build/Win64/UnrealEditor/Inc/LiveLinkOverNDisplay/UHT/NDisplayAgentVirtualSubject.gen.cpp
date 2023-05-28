// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NDisplayAgentVirtualSubject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDisplayAgentVirtualSubject() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	LIVELINKOVERNDISPLAY_API UClass* Z_Construct_UClass_UNDisplayAgentVirtualSubject();
	LIVELINKOVERNDISPLAY_API UClass* Z_Construct_UClass_UNDisplayAgentVirtualSubject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkOverNDisplay();
// End Cross Module References
	void UNDisplayAgentVirtualSubject::StaticRegisterNativesUNDisplayAgentVirtualSubject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDisplayAgentVirtualSubject);
	UClass* Z_Construct_UClass_UNDisplayAgentVirtualSubject_NoRegister()
	{
		return UNDisplayAgentVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkOverNDisplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LiveLink VirtualSubject used on nDisplay agents to replicate real subjects\n * Controller sends data to use for each frame to make sure all machines display / uses the same data\n * Uses Replicator object that this module creates.\n */" },
		{ "IncludePath", "NDisplayAgentVirtualSubject.h" },
		{ "ModuleRelativePath", "Private/NDisplayAgentVirtualSubject.h" },
		{ "ToolTip", "LiveLink VirtualSubject used on nDisplay agents to replicate real subjects\nController sends data to use for each frame to make sure all machines display / uses the same data\nUses Replicator object that this module creates." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDisplayAgentVirtualSubject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::ClassParams = {
		&UNDisplayAgentVirtualSubject::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDisplayAgentVirtualSubject()
	{
		if (!Z_Registration_Info_UClass_UNDisplayAgentVirtualSubject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDisplayAgentVirtualSubject.OuterSingleton, Z_Construct_UClass_UNDisplayAgentVirtualSubject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDisplayAgentVirtualSubject.OuterSingleton;
	}
	template<> LIVELINKOVERNDISPLAY_API UClass* StaticClass<UNDisplayAgentVirtualSubject>()
	{
		return UNDisplayAgentVirtualSubject::StaticClass();
	}
	UNDisplayAgentVirtualSubject::UNDisplayAgentVirtualSubject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDisplayAgentVirtualSubject);
	UNDisplayAgentVirtualSubject::~UNDisplayAgentVirtualSubject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Private_NDisplayAgentVirtualSubject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Private_NDisplayAgentVirtualSubject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDisplayAgentVirtualSubject, UNDisplayAgentVirtualSubject::StaticClass, TEXT("UNDisplayAgentVirtualSubject"), &Z_Registration_Info_UClass_UNDisplayAgentVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDisplayAgentVirtualSubject), 3055335342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Private_NDisplayAgentVirtualSubject_h_3762580095(TEXT("/Script/LiveLinkOverNDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Private_NDisplayAgentVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Private_NDisplayAgentVirtualSubject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
