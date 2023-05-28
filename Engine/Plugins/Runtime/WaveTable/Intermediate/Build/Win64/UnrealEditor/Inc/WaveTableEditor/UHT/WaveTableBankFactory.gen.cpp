// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaveTableBankFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableBankFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WaveTableEditor();
	WAVETABLEEDITOR_API UClass* Z_Construct_UClass_UWaveTableBankFactory();
	WAVETABLEEDITOR_API UClass* Z_Construct_UClass_UWaveTableBankFactory_NoRegister();
// End Cross Module References
	void UWaveTableBankFactory::StaticRegisterNativesUWaveTableBankFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveTableBankFactory);
	UClass* Z_Construct_UClass_UWaveTableBankFactory_NoRegister()
	{
		return UWaveTableBankFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaveTableBankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveTableBankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTableEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBankFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaveTableBankFactory.h" },
		{ "ModuleRelativePath", "Private/WaveTableBankFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveTableBankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveTableBankFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveTableBankFactory_Statics::ClassParams = {
		&UWaveTableBankFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveTableBankFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBankFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveTableBankFactory()
	{
		if (!Z_Registration_Info_UClass_UWaveTableBankFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveTableBankFactory.OuterSingleton, Z_Construct_UClass_UWaveTableBankFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveTableBankFactory.OuterSingleton;
	}
	template<> WAVETABLEEDITOR_API UClass* StaticClass<UWaveTableBankFactory>()
	{
		return UWaveTableBankFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveTableBankFactory);
	UWaveTableBankFactory::~UWaveTableBankFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveTableBankFactory, UWaveTableBankFactory::StaticClass, TEXT("UWaveTableBankFactory"), &Z_Registration_Info_UClass_UWaveTableBankFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveTableBankFactory), 434832314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_4022915(TEXT("/Script/WaveTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Private_WaveTableBankFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
