// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/DMXMVRSceneActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRSceneActorFactory() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXMVRSceneActorFactory();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXMVRSceneActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXMVRSceneActorFactory::StaticRegisterNativesUDMXMVRSceneActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRSceneActorFactory);
	UClass* Z_Construct_UClass_UDMXMVRSceneActorFactory_NoRegister()
	{
		return UDMXMVRSceneActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DMXMVRSceneActorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DMXMVRSceneActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRSceneActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::ClassParams = {
		&UDMXMVRSceneActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRSceneActorFactory()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRSceneActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRSceneActorFactory.OuterSingleton, Z_Construct_UClass_UDMXMVRSceneActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRSceneActorFactory.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXMVRSceneActorFactory>()
	{
		return UDMXMVRSceneActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRSceneActorFactory);
	UDMXMVRSceneActorFactory::~UDMXMVRSceneActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXMVRSceneActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXMVRSceneActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRSceneActorFactory, UDMXMVRSceneActorFactory::StaticClass, TEXT("UDMXMVRSceneActorFactory"), &Z_Registration_Info_UClass_UDMXMVRSceneActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRSceneActorFactory), 2880169101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXMVRSceneActorFactory_h_2592133842(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXMVRSceneActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXMVRSceneActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
