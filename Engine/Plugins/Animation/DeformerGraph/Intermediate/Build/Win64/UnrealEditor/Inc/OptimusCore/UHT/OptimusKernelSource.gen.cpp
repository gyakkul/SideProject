// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusKernelSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusKernelSource() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusKernelSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusKernelSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusKernelSource::StaticRegisterNativesUOptimusKernelSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusKernelSource);
	UClass* Z_Construct_UClass_UOptimusKernelSource_NoRegister()
	{
		return UOptimusKernelSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusKernelSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusKernelSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeKernelSource,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusKernelSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusKernelSource.h" },
		{ "ModuleRelativePath", "Public/OptimusKernelSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusKernelSource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusKernelSource, Source), METADATA_PARAMS(Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusKernelSource_Statics::NewProp_Source,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusKernelSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusKernelSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusKernelSource_Statics::ClassParams = {
		&UOptimusKernelSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusKernelSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusKernelSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusKernelSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton, Z_Construct_UClass_UOptimusKernelSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusKernelSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusKernelSource>()
	{
		return UOptimusKernelSource::StaticClass();
	}
	UOptimusKernelSource::UOptimusKernelSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusKernelSource);
	UOptimusKernelSource::~UOptimusKernelSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusKernelSource, UOptimusKernelSource::StaticClass, TEXT("UOptimusKernelSource"), &Z_Registration_Info_UClass_UOptimusKernelSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusKernelSource), 3822010340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_656320577(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusKernelSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
