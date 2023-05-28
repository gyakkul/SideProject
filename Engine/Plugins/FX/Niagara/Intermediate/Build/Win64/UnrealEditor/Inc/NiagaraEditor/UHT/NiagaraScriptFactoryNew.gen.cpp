// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraScriptFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDynamicInputScriptFactory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraFunctionScriptFactory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraFunctionScriptFactory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraModuleScriptFactory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraModuleScriptFactory_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraScriptFactoryNew::StaticRegisterNativesUNiagaraScriptFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraScriptFactoryNew_NoRegister()
	{
		return UNiagaraScriptFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraScriptFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::ClassParams = {
		&UNiagaraScriptFactoryNew::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraScriptFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScriptFactoryNew>()
	{
		return UNiagaraScriptFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptFactoryNew);
	UNiagaraScriptFactoryNew::~UNiagaraScriptFactoryNew() {}
	void UNiagaraModuleScriptFactory::StaticRegisterNativesUNiagaraModuleScriptFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraModuleScriptFactory);
	UClass* Z_Construct_UClass_UNiagaraModuleScriptFactory_NoRegister()
	{
		return UNiagaraModuleScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptFactoryNew,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Niagara module script factory.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraScriptFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptFactoryNew.h" },
		{ "ToolTip", "Niagara module script factory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraModuleScriptFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::ClassParams = {
		&UNiagaraModuleScriptFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraModuleScriptFactory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraModuleScriptFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraModuleScriptFactory.OuterSingleton, Z_Construct_UClass_UNiagaraModuleScriptFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraModuleScriptFactory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraModuleScriptFactory>()
	{
		return UNiagaraModuleScriptFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraModuleScriptFactory);
	UNiagaraModuleScriptFactory::~UNiagaraModuleScriptFactory() {}
	void UNiagaraFunctionScriptFactory::StaticRegisterNativesUNiagaraFunctionScriptFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraFunctionScriptFactory);
	UClass* Z_Construct_UClass_UNiagaraFunctionScriptFactory_NoRegister()
	{
		return UNiagaraFunctionScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptFactoryNew,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Niagara function factory.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraScriptFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptFactoryNew.h" },
		{ "ToolTip", "Niagara function factory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraFunctionScriptFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::ClassParams = {
		&UNiagaraFunctionScriptFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraFunctionScriptFactory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraFunctionScriptFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraFunctionScriptFactory.OuterSingleton, Z_Construct_UClass_UNiagaraFunctionScriptFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraFunctionScriptFactory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraFunctionScriptFactory>()
	{
		return UNiagaraFunctionScriptFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraFunctionScriptFactory);
	UNiagaraFunctionScriptFactory::~UNiagaraFunctionScriptFactory() {}
	void UNiagaraDynamicInputScriptFactory::StaticRegisterNativesUNiagaraDynamicInputScriptFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDynamicInputScriptFactory);
	UClass* Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_NoRegister()
	{
		return UNiagaraDynamicInputScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptFactoryNew,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Niagara dynamic input script factory.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraScriptFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptFactoryNew.h" },
		{ "ToolTip", "Niagara dynamic input script factory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDynamicInputScriptFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::ClassParams = {
		&UNiagaraDynamicInputScriptFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDynamicInputScriptFactory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDynamicInputScriptFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDynamicInputScriptFactory.OuterSingleton, Z_Construct_UClass_UNiagaraDynamicInputScriptFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDynamicInputScriptFactory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraDynamicInputScriptFactory>()
	{
		return UNiagaraDynamicInputScriptFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDynamicInputScriptFactory);
	UNiagaraDynamicInputScriptFactory::~UNiagaraDynamicInputScriptFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptFactoryNew, UNiagaraScriptFactoryNew::StaticClass, TEXT("UNiagaraScriptFactoryNew"), &Z_Registration_Info_UClass_UNiagaraScriptFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptFactoryNew), 86460487U) },
		{ Z_Construct_UClass_UNiagaraModuleScriptFactory, UNiagaraModuleScriptFactory::StaticClass, TEXT("UNiagaraModuleScriptFactory"), &Z_Registration_Info_UClass_UNiagaraModuleScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraModuleScriptFactory), 1212100620U) },
		{ Z_Construct_UClass_UNiagaraFunctionScriptFactory, UNiagaraFunctionScriptFactory::StaticClass, TEXT("UNiagaraFunctionScriptFactory"), &Z_Registration_Info_UClass_UNiagaraFunctionScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraFunctionScriptFactory), 3221976221U) },
		{ Z_Construct_UClass_UNiagaraDynamicInputScriptFactory, UNiagaraDynamicInputScriptFactory::StaticClass, TEXT("UNiagaraDynamicInputScriptFactory"), &Z_Registration_Info_UClass_UNiagaraDynamicInputScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDynamicInputScriptFactory), 3469797758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_4077368024(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
