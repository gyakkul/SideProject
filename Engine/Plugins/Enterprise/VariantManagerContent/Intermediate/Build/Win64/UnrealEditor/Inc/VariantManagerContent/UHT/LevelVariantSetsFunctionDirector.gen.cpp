// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelVariantSetsFunctionDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsFunctionDirector() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister();
// End Cross Module References
	void ULevelVariantSetsFunctionDirector::StaticRegisterNativesULevelVariantSetsFunctionDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSetsFunctionDirector);
	UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister()
	{
		return ULevelVariantSetsFunctionDirector::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSetsFunctionDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsFunctionDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSetsFunctionDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams = {
		&ULevelVariantSetsFunctionDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector()
	{
		if (!Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton, Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSetsFunctionDirector>()
	{
		return ULevelVariantSetsFunctionDirector::StaticClass();
	}
	ULevelVariantSetsFunctionDirector::ULevelVariantSetsFunctionDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSetsFunctionDirector);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSetsFunctionDirector, ULevelVariantSetsFunctionDirector::StaticClass, TEXT("ULevelVariantSetsFunctionDirector"), &Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSetsFunctionDirector), 3059093848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_1465717285(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
