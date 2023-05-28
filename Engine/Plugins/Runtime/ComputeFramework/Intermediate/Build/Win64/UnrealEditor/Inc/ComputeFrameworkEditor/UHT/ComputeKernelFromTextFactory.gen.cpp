// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComputeFramework/ComputeKernelFromTextFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelFromTextFactory() {}
// Cross Module References
	COMPUTEFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UComputeKernelFromTextFactory();
	COMPUTEFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UComputeKernelFromTextFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ComputeFrameworkEditor();
// End Cross Module References
	void UComputeKernelFromTextFactory::StaticRegisterNativesUComputeKernelFromTextFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernelFromTextFactory);
	UClass* Z_Construct_UClass_UComputeKernelFromTextFactory_NoRegister()
	{
		return UComputeKernelFromTextFactory::StaticClass();
	}
	struct Z_Construct_UClass_UComputeKernelFromTextFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFrameworkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ComputeFramework/ComputeKernelFromTextFactory.h" },
		{ "ModuleRelativePath", "Private/ComputeFramework/ComputeKernelFromTextFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernelFromTextFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::ClassParams = {
		&UComputeKernelFromTextFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeKernelFromTextFactory()
	{
		if (!Z_Registration_Info_UClass_UComputeKernelFromTextFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernelFromTextFactory.OuterSingleton, Z_Construct_UClass_UComputeKernelFromTextFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeKernelFromTextFactory.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORKEDITOR_API UClass* StaticClass<UComputeKernelFromTextFactory>()
	{
		return UComputeKernelFromTextFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernelFromTextFactory);
	UComputeKernelFromTextFactory::~UComputeKernelFromTextFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFromTextFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFromTextFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernelFromTextFactory, UComputeKernelFromTextFactory::StaticClass, TEXT("UComputeKernelFromTextFactory"), &Z_Registration_Info_UClass_UComputeKernelFromTextFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernelFromTextFactory), 1730553329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFromTextFactory_h_2000963855(TEXT("/Script/ComputeFrameworkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFromTextFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFromTextFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
