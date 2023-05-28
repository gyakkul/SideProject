// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/CrowdAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdAgentInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UCrowdAgentInterface::StaticRegisterNativesUCrowdAgentInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdAgentInterface);
	UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister()
	{
		return UCrowdAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICrowdAgentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdAgentInterface_Statics::ClassParams = {
		&UCrowdAgentInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdAgentInterface()
	{
		if (!Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton, Z_Construct_UClass_UCrowdAgentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdAgentInterface.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UCrowdAgentInterface>()
	{
		return UCrowdAgentInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdAgentInterface);
	UCrowdAgentInterface::~UCrowdAgentInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdAgentInterface, UCrowdAgentInterface::StaticClass, TEXT("UCrowdAgentInterface"), &Z_Registration_Info_UClass_UCrowdAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdAgentInterface), 911828251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_1575184858(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
