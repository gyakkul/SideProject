// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/DMXControlConsoleActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleActorFactory() {}
// Cross Module References
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleActorFactory();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleActorFactory::StaticRegisterNativesUDMXControlConsoleActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleActorFactory);
	UClass* Z_Construct_UClass_UDMXControlConsoleActorFactory_NoRegister()
	{
		return UDMXControlConsoleActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor Factory for DMX Control Console Actor */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DMXControlConsoleActorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DMXControlConsoleActorFactory.h" },
		{ "ToolTip", "Actor Factory for DMX Control Console Actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::ClassParams = {
		&UDMXControlConsoleActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleActorFactory()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleActorFactory.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleActorFactory.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleActorFactory>()
	{
		return UDMXControlConsoleActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleActorFactory);
	UDMXControlConsoleActorFactory::~UDMXControlConsoleActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Factories_DMXControlConsoleActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Factories_DMXControlConsoleActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleActorFactory, UDMXControlConsoleActorFactory::StaticClass, TEXT("UDMXControlConsoleActorFactory"), &Z_Registration_Info_UClass_UDMXControlConsoleActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleActorFactory), 538658183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Factories_DMXControlConsoleActorFactory_h_2795361027(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Factories_DMXControlConsoleActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Factories_DMXControlConsoleActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
