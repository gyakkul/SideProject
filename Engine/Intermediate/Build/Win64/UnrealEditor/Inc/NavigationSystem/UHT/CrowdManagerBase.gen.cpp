// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrowdManagerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManagerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdManagerBase);
	UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister()
	{
		return UCrowdManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for Crowd Managers. If you want to create a custom crowd manager\n *\x09implement a class extending this one and set UNavigationSystemV1::CrowdManagerClass\n *\x09to point at your class */" },
		{ "IncludePath", "CrowdManagerBase.h" },
		{ "ModuleRelativePath", "Public/CrowdManagerBase.h" },
		{ "ToolTip", "Base class for Crowd Managers. If you want to create a custom crowd manager\n   implement a class extending this one and set UNavigationSystemV1::CrowdManagerClass\n   to point at your class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdManagerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams = {
		&UCrowdManagerBase::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdManagerBase()
	{
		if (!Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton, Z_Construct_UClass_UCrowdManagerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdManagerBase.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UCrowdManagerBase>()
	{
		return UCrowdManagerBase::StaticClass();
	}
	UCrowdManagerBase::UCrowdManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManagerBase);
	UCrowdManagerBase::~UCrowdManagerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdManagerBase, UCrowdManagerBase::StaticClass, TEXT("UCrowdManagerBase"), &Z_Registration_Info_UClass_UCrowdManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdManagerBase), 5367070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_1553003152(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
