// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DMXLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXLibraryFactory() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFactory();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXLibraryFactory::StaticRegisterNativesUDMXLibraryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXLibraryFactory);
	UClass* Z_Construct_UClass_UDMXLibraryFactory_NoRegister()
	{
		return UDMXLibraryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXLibraryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXLibraryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DMXLibraryFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/DMXLibraryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXLibraryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXLibraryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXLibraryFactory_Statics::ClassParams = {
		&UDMXLibraryFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXLibraryFactory()
	{
		if (!Z_Registration_Info_UClass_UDMXLibraryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXLibraryFactory.OuterSingleton, Z_Construct_UClass_UDMXLibraryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXLibraryFactory.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXLibraryFactory>()
	{
		return UDMXLibraryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXLibraryFactory);
	UDMXLibraryFactory::~UDMXLibraryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXLibraryFactory, UDMXLibraryFactory::StaticClass, TEXT("UDMXLibraryFactory"), &Z_Registration_Info_UClass_UDMXLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXLibraryFactory), 4278975408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_3136249659(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
