// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/View/MVVMViewWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewWorldSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	void UMVVMViewWorldSubsystem::StaticRegisterNativesUMVVMViewWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewWorldSubsystem);
	UClass* Z_Construct_UClass_UMVVMViewWorldSubsystem_NoRegister()
	{
		return UMVVMViewWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "View/MVVMViewWorldSubsystem.h" },
		{ "ModuleRelativePath", "Private/View/MVVMViewWorldSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::ClassParams = {
		&UMVVMViewWorldSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewWorldSubsystem.OuterSingleton, Z_Construct_UClass_UMVVMViewWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewWorldSubsystem.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewWorldSubsystem>()
	{
		return UMVVMViewWorldSubsystem::StaticClass();
	}
	UMVVMViewWorldSubsystem::UMVVMViewWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewWorldSubsystem);
	UMVVMViewWorldSubsystem::~UMVVMViewWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMViewWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMViewWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewWorldSubsystem, UMVVMViewWorldSubsystem::StaticClass, TEXT("UMVVMViewWorldSubsystem"), &Z_Registration_Info_UClass_UMVVMViewWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewWorldSubsystem), 2009112262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMViewWorldSubsystem_h_1188606721(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMViewWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Private_View_MVVMViewWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
