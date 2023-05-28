// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Deformer/DeformerGroomComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerGroomComponentSource() {}
// Cross Module References
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomComponentSource();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomComponentSource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UOptimusGroomComponentSource::StaticRegisterNativesUOptimusGroomComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomComponentSource);
	UClass* Z_Construct_UClass_UOptimusGroomComponentSource_NoRegister()
	{
		return UOptimusGroomComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComponentSource,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomComponentSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Deformer/DeformerGroomComponentSource.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerGroomComponentSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomComponentSource_Statics::ClassParams = {
		&UOptimusGroomComponentSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomComponentSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusGroomComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomComponentSource.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomComponentSource>()
	{
		return UOptimusGroomComponentSource::StaticClass();
	}
	UOptimusGroomComponentSource::UOptimusGroomComponentSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomComponentSource);
	UOptimusGroomComponentSource::~UOptimusGroomComponentSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerGroomComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerGroomComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomComponentSource, UOptimusGroomComponentSource::StaticClass, TEXT("UOptimusGroomComponentSource"), &Z_Registration_Info_UClass_UOptimusGroomComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomComponentSource), 1459312527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerGroomComponentSource_h_2020037182(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerGroomComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerGroomComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
