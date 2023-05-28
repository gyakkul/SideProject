// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolChange() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UToolContextTransactionProvider::StaticRegisterNativesUToolContextTransactionProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolContextTransactionProvider);
	UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister()
	{
		return UToolContextTransactionProvider::StaticClass();
	}
	struct Z_Construct_UClass_UToolContextTransactionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolContextTransactionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolContextTransactionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolContextTransactionProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams = {
		&UToolContextTransactionProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolContextTransactionProvider()
	{
		if (!Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton, Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolContextTransactionProvider>()
	{
		return UToolContextTransactionProvider::StaticClass();
	}
	UToolContextTransactionProvider::UToolContextTransactionProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolContextTransactionProvider);
	UToolContextTransactionProvider::~UToolContextTransactionProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolContextTransactionProvider, UToolContextTransactionProvider::StaticClass, TEXT("UToolContextTransactionProvider"), &Z_Registration_Info_UClass_UToolContextTransactionProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolContextTransactionProvider), 145780535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_306883997(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
