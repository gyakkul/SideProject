// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTemplateRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTemplateRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UDEPRECATED_MassEntityTemplateRegistry::StaticRegisterNativesUDEPRECATED_MassEntityTemplateRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_MassEntityTemplateRegistry);
	UClass* Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_NoRegister()
	{
		return UDEPRECATED_MassEntityTemplateRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "UMassEntityTemplateRegistry is deprecated starting UE5.2. Use FMassEntityTemplateRegistry instead" },
		{ "IncludePath", "MassEntityTemplateRegistry.h" },
		{ "ModuleRelativePath", "Public/MassEntityTemplateRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MassEntityTemplateRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::ClassParams = {
		&UDEPRECATED_MassEntityTemplateRegistry::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_MassEntityTemplateRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_MassEntityTemplateRegistry.OuterSingleton, Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_MassEntityTemplateRegistry.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UDEPRECATED_MassEntityTemplateRegistry>()
	{
		return UDEPRECATED_MassEntityTemplateRegistry::StaticClass();
	}
	UDEPRECATED_MassEntityTemplateRegistry::UDEPRECATED_MassEntityTemplateRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MassEntityTemplateRegistry);
	UDEPRECATED_MassEntityTemplateRegistry::~UDEPRECATED_MassEntityTemplateRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplateRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplateRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_MassEntityTemplateRegistry, UDEPRECATED_MassEntityTemplateRegistry::StaticClass, TEXT("UDEPRECATED_MassEntityTemplateRegistry"), &Z_Registration_Info_UClass_UDEPRECATED_MassEntityTemplateRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_MassEntityTemplateRegistry), 2818374331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplateRegistry_h_1172538183(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplateRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplateRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
