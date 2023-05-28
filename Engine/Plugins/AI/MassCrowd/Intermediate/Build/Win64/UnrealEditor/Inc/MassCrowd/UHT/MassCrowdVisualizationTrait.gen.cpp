// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdVisualizationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdVisualizationTrait() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationTrait();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationTrait_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdVisualizationTrait::StaticRegisterNativesUMassCrowdVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdVisualizationTrait);
	UClass* Z_Construct_UClass_UMassCrowdVisualizationTrait_NoRegister()
	{
		return UMassCrowdVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Crowd Visualization" },
		{ "IncludePath", "MassCrowdVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationTrait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::ClassParams = {
		&UMassCrowdVisualizationTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassCrowdVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdVisualizationTrait.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdVisualizationTrait>()
	{
		return UMassCrowdVisualizationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdVisualizationTrait);
	UMassCrowdVisualizationTrait::~UMassCrowdVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdVisualizationTrait, UMassCrowdVisualizationTrait::StaticClass, TEXT("UMassCrowdVisualizationTrait"), &Z_Registration_Info_UClass_UMassCrowdVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdVisualizationTrait), 2029729164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationTrait_h_1906463918(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
