// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComputeFramework/ComputeKernelFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelFactory() {}
// Cross Module References
	COMPUTEFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UComputeKernelFactory();
	COMPUTEFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UComputeKernelFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ComputeFrameworkEditor();
// End Cross Module References
	void UComputeKernelFactory::StaticRegisterNativesUComputeKernelFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernelFactory);
	UClass* Z_Construct_UClass_UComputeKernelFactory_NoRegister()
	{
		return UComputeKernelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UComputeKernelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeKernelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFrameworkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ComputeFramework/ComputeKernelFactory.h" },
		{ "ModuleRelativePath", "Private/ComputeFramework/ComputeKernelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeKernelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernelFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernelFactory_Statics::ClassParams = {
		&UComputeKernelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComputeKernelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeKernelFactory()
	{
		if (!Z_Registration_Info_UClass_UComputeKernelFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernelFactory.OuterSingleton, Z_Construct_UClass_UComputeKernelFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeKernelFactory.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORKEDITOR_API UClass* StaticClass<UComputeKernelFactory>()
	{
		return UComputeKernelFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernelFactory);
	UComputeKernelFactory::~UComputeKernelFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernelFactory, UComputeKernelFactory::StaticClass, TEXT("UComputeKernelFactory"), &Z_Registration_Info_UClass_UComputeKernelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernelFactory), 214546067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFactory_h_160178919(TEXT("/Script/ComputeFrameworkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFrameworkEditor_Private_ComputeFramework_ComputeKernelFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
