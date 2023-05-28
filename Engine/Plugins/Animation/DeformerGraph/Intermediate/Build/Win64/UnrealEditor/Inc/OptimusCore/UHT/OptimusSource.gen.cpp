// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSource() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSource::StaticRegisterNativesUOptimusSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSource);
	UClass* Z_Construct_UClass_UOptimusSource_NoRegister()
	{
		return UOptimusSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeSource,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusSource.h" },
		{ "ModuleRelativePath", "Public/OptimusSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** HLSL Source. */" },
		{ "DisplayAfter", "AdditionalSources" },
		{ "ModuleRelativePath", "Public/OptimusSource.h" },
		{ "ToolTip", "HLSL Source." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSource, SourceText), METADATA_PARAMS(Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSource_Statics::NewProp_SourceText,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusSource, IOptimusShaderTextProvider), false },  // 2799927964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSource_Statics::ClassParams = {
		&UOptimusSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSource.OuterSingleton, Z_Construct_UClass_UOptimusSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSource>()
	{
		return UOptimusSource::StaticClass();
	}
	UOptimusSource::UOptimusSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSource);
	UOptimusSource::~UOptimusSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSource, UOptimusSource::StaticClass, TEXT("UOptimusSource"), &Z_Registration_Info_UClass_UOptimusSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSource), 3448106836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_3473135822(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
