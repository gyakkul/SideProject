// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/VisualLoggerExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerExtension() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UVisualLoggerExtension();
	AIMODULE_API UClass* Z_Construct_UClass_UVisualLoggerExtension_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UVisualLoggerExtension::StaticRegisterNativesUVisualLoggerExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerExtension);
	UClass* Z_Construct_UClass_UVisualLoggerExtension_NoRegister()
	{
		return UVisualLoggerExtension::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLoggerExtension.h" },
		{ "ModuleRelativePath", "Classes/VisualLoggerExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerExtension_Statics::ClassParams = {
		&UVisualLoggerExtension::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerExtension()
	{
		if (!Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton, Z_Construct_UClass_UVisualLoggerExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UVisualLoggerExtension>()
	{
		return UVisualLoggerExtension::StaticClass();
	}
	UVisualLoggerExtension::UVisualLoggerExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerExtension);
	UVisualLoggerExtension::~UVisualLoggerExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerExtension, UVisualLoggerExtension::StaticClass, TEXT("UVisualLoggerExtension"), &Z_Registration_Info_UClass_UVisualLoggerExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerExtension), 4045831487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_3712262471(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
