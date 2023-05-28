// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/AutoReimport/AutoReimportManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoReimportManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager();
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAutoReimportManager::StaticRegisterNativesUAutoReimportManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoReimportManager);
	UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister()
	{
		return UAutoReimportManager::StaticClass();
	}
	struct Z_Construct_UClass_UAutoReimportManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoReimportManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Deals with auto reimporting of objects when the objects file on disk is modified*/" },
		{ "IncludePath", "AutoReimport/AutoReimportManager.h" },
		{ "ModuleRelativePath", "Public/AutoReimport/AutoReimportManager.h" },
		{ "ToolTip", "Deals with auto reimporting of objects when the objects file on disk is modified" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoReimportManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoReimportManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoReimportManager_Statics::ClassParams = {
		&UAutoReimportManager::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoReimportManager()
	{
		if (!Z_Registration_Info_UClass_UAutoReimportManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoReimportManager.OuterSingleton, Z_Construct_UClass_UAutoReimportManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoReimportManager.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAutoReimportManager>()
	{
		return UAutoReimportManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoReimportManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoReimportManager, UAutoReimportManager::StaticClass, TEXT("UAutoReimportManager"), &Z_Registration_Info_UClass_UAutoReimportManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoReimportManager), 3199660430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_518944093(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutoReimport_AutoReimportManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
