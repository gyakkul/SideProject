// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeDataProvider() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	void UComputeDataProvider::StaticRegisterNativesUComputeDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeDataProvider);
	UClass* Z_Construct_UClass_UComputeDataProvider_NoRegister()
	{
		return UComputeDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UComputeDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeDataProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Compute Framework Data Provider.\n * A concrete instance of this is responsible for supplying data declared by a UComputeDataInterface.\n * One of these must be created for each UComputeDataInterface object in an instance of a Compute Graph.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeDataProvider.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeDataProvider.h" },
		{ "ToolTip", "Compute Framework Data Provider.\nA concrete instance of this is responsible for supplying data declared by a UComputeDataInterface.\nOne of these must be created for each UComputeDataInterface object in an instance of a Compute Graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeDataProvider_Statics::ClassParams = {
		&UComputeDataProvider::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeDataProvider()
	{
		if (!Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton, Z_Construct_UClass_UComputeDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeDataProvider.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeDataProvider>()
	{
		return UComputeDataProvider::StaticClass();
	}
	UComputeDataProvider::UComputeDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeDataProvider);
	UComputeDataProvider::~UComputeDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeDataProvider, UComputeDataProvider::StaticClass, TEXT("UComputeDataProvider"), &Z_Registration_Info_UClass_UComputeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeDataProvider), 2193468154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_3768377161(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
