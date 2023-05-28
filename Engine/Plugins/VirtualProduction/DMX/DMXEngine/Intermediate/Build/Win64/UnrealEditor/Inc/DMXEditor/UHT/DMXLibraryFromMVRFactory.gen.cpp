// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DMXLibraryFromMVRFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXLibraryFromMVRFactory() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFromMVRFactory();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFromMVRFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXLibraryFromMVRFactory::StaticRegisterNativesUDMXLibraryFromMVRFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXLibraryFromMVRFactory);
	UClass* Z_Construct_UClass_UDMXLibraryFromMVRFactory_NoRegister()
	{
		return UDMXLibraryFromMVRFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DMXLibraryFromMVRFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/DMXLibraryFromMVRFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXLibraryFromMVRFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::ClassParams = {
		&UDMXLibraryFromMVRFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXLibraryFromMVRFactory()
	{
		if (!Z_Registration_Info_UClass_UDMXLibraryFromMVRFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXLibraryFromMVRFactory.OuterSingleton, Z_Construct_UClass_UDMXLibraryFromMVRFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXLibraryFromMVRFactory.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXLibraryFromMVRFactory>()
	{
		return UDMXLibraryFromMVRFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXLibraryFromMVRFactory);
	UDMXLibraryFromMVRFactory::~UDMXLibraryFromMVRFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFromMVRFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFromMVRFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXLibraryFromMVRFactory, UDMXLibraryFromMVRFactory::StaticClass, TEXT("UDMXLibraryFromMVRFactory"), &Z_Registration_Info_UClass_UDMXLibraryFromMVRFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXLibraryFromMVRFactory), 3295995038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFromMVRFactory_h_1745095940(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFromMVRFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFromMVRFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
