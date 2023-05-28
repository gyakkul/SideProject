// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialFunctionMaterialLayerBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerBlend() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialFunctionMaterialLayerBlend::StaticRegisterNativesUMaterialFunctionMaterialLayerBlend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlend);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlend::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized Material Function that acts as a blend\n */" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function that acts as a blend" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlend::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlend>()
	{
		return UMaterialFunctionMaterialLayerBlend::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlend);
	UMaterialFunctionMaterialLayerBlend::~UMaterialFunctionMaterialLayerBlend() {}
	void UMaterialFunctionMaterialLayerBlendInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlendInstance);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Specialized Material Function Instance that instances a blend\n*/" },
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function Instance that instances a blend" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendInstance::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendInstance>()
	{
		return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendInstance);
	UMaterialFunctionMaterialLayerBlendInstance::~UMaterialFunctionMaterialLayerBlendInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend, UMaterialFunctionMaterialLayerBlend::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlend"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlend), 2167415883U) },
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance, UMaterialFunctionMaterialLayerBlendInstance::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlendInstance"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlendInstance), 2753724060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_172072773(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionMaterialLayerBlend_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
