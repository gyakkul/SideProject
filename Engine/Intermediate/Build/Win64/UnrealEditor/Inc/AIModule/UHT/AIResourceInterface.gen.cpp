// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/AIResourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResourceInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIResourceInterface::StaticRegisterNativesUAIResourceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIResourceInterface);
	UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister()
	{
		return UAIResourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIResourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIResourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AIResourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIResourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIResourceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams = {
		&UAIResourceInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIResourceInterface()
	{
		if (!Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton, Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIResourceInterface.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIResourceInterface>()
	{
		return UAIResourceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResourceInterface);
	UAIResourceInterface::~UAIResourceInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIResourceInterface, UAIResourceInterface::StaticClass, TEXT("UAIResourceInterface"), &Z_Registration_Info_UClass_UAIResourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIResourceInterface), 3634866635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_646030698(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
