// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimecodeSynchronizerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeSynchronizerFactory() {}
// Cross Module References
	TIMECODESYNCHRONIZEREDITOR_API UClass* Z_Construct_UClass_UTimecodeSynchronizerFactory();
	TIMECODESYNCHRONIZEREDITOR_API UClass* Z_Construct_UClass_UTimecodeSynchronizerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_TimecodeSynchronizerEditor();
// End Cross Module References
	void UTimecodeSynchronizerFactory::StaticRegisterNativesUTimecodeSynchronizerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeSynchronizerFactory);
	UClass* Z_Construct_UClass_UTimecodeSynchronizerFactory_NoRegister()
	{
		return UTimecodeSynchronizerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TimecodeSynchronizerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TimecodeSynchronizerFactory.h" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeSynchronizerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::ClassParams = {
		&UTimecodeSynchronizerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeSynchronizerFactory()
	{
		if (!Z_Registration_Info_UClass_UTimecodeSynchronizerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeSynchronizerFactory.OuterSingleton, Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimecodeSynchronizerFactory.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZEREDITOR_API UClass* StaticClass<UTimecodeSynchronizerFactory>()
	{
		return UTimecodeSynchronizerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeSynchronizerFactory);
	UTimecodeSynchronizerFactory::~UTimecodeSynchronizerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimecodeSynchronizerFactory, UTimecodeSynchronizerFactory::StaticClass, TEXT("UTimecodeSynchronizerFactory"), &Z_Registration_Info_UClass_UTimecodeSynchronizerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeSynchronizerFactory), 1657281744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_202996663(TEXT("/Script/TimecodeSynchronizerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
