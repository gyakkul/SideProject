// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISightTargetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISightTargetInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISightTargetInterface::StaticRegisterNativesUAISightTargetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISightTargetInterface);
	UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister()
	{
		return UAISightTargetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAISightTargetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISightTargetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISightTargetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISightTargetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAISightTargetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams = {
		&UAISightTargetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISightTargetInterface()
	{
		if (!Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton, Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISightTargetInterface>()
	{
		return UAISightTargetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISightTargetInterface);
	UAISightTargetInterface::~UAISightTargetInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISightTargetInterface, UAISightTargetInterface::StaticClass, TEXT("UAISightTargetInterface"), &Z_Registration_Info_UClass_UAISightTargetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISightTargetInterface), 3257591839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_4260118704(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
