// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VolumeCacheFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeCacheFactory() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UVolumeCacheFactory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UVolumeCacheFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UVolumeCacheFactory::StaticRegisterNativesUVolumeCacheFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeCacheFactory);
	UClass* Z_Construct_UClass_UVolumeCacheFactory_NoRegister()
	{
		return UVolumeCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeCacheFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VolumeCacheFactory.h" },
		{ "ModuleRelativePath", "Public/VolumeCacheFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeCacheFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeCacheFactory_Statics::ClassParams = {
		&UVolumeCacheFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVolumeCacheFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeCacheFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeCacheFactory()
	{
		if (!Z_Registration_Info_UClass_UVolumeCacheFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeCacheFactory.OuterSingleton, Z_Construct_UClass_UVolumeCacheFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeCacheFactory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UVolumeCacheFactory>()
	{
		return UVolumeCacheFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeCacheFactory);
	UVolumeCacheFactory::~UVolumeCacheFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeCacheFactory, UVolumeCacheFactory::StaticClass, TEXT("UVolumeCacheFactory"), &Z_Registration_Info_UClass_UVolumeCacheFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeCacheFactory), 131516374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_4246052184(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_VolumeCacheFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
