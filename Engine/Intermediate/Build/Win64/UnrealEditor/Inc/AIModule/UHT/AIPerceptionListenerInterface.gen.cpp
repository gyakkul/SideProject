// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionListenerInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIPerceptionListenerInterface::StaticRegisterNativesUAIPerceptionListenerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIPerceptionListenerInterface);
	UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister()
	{
		return UAIPerceptionListenerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionListenerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionListenerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIPerceptionListenerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams = {
		&UAIPerceptionListenerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionListenerInterface()
	{
		if (!Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton, Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIPerceptionListenerInterface.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionListenerInterface>()
	{
		return UAIPerceptionListenerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionListenerInterface);
	UAIPerceptionListenerInterface::~UAIPerceptionListenerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIPerceptionListenerInterface, UAIPerceptionListenerInterface::StaticClass, TEXT("UAIPerceptionListenerInterface"), &Z_Registration_Info_UClass_UAIPerceptionListenerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPerceptionListenerInterface), 1071465046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_1496882584(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
