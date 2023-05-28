// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeSource() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	void UComputeSource::StaticRegisterNativesUComputeSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeSource);
	UClass* Z_Construct_UClass_UComputeSource_NoRegister()
	{
		return UComputeSource::StaticClass();
	}
	struct Z_Construct_UClass_UComputeSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing some source for inclusion in a UComputeKernel.\n * We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)\n */" },
		{ "IncludePath", "ComputeFramework/ComputeSource.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSource.h" },
		{ "ToolTip", "Class representing some source for inclusion in a UComputeKernel.\nWe derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Array of additional source objects. This allows us to specify source dependencies. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeSource.h" },
		{ "ToolTip", "Array of additional source objects. This allows us to specify source dependencies." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeSource, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeSource_Statics::NewProp_AdditionalSources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeSource_Statics::ClassParams = {
		&UComputeSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComputeSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeSource()
	{
		if (!Z_Registration_Info_UClass_UComputeSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeSource.OuterSingleton, Z_Construct_UClass_UComputeSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeSource.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeSource>()
	{
		return UComputeSource::StaticClass();
	}
	UComputeSource::UComputeSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeSource);
	UComputeSource::~UComputeSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeSource, UComputeSource::StaticClass, TEXT("UComputeSource"), &Z_Registration_Info_UClass_UComputeSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeSource), 2600640441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_1115068537(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
