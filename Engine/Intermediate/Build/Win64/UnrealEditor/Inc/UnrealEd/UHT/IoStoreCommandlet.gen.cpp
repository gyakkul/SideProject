// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/IoStoreCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIoStoreCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UIoStoreCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UIoStoreCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UIoStoreCommandlet::StaticRegisterNativesUIoStoreCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIoStoreCommandlet);
	UClass* Z_Construct_UClass_UIoStoreCommandlet_NoRegister()
	{
		return UIoStoreCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UIoStoreCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIoStoreCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIoStoreCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Commandlet for creating container file(s) used by the IoDispatcher.\n */" },
		{ "IncludePath", "Commandlets/IoStoreCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/IoStoreCommandlet.h" },
		{ "ToolTip", "* Commandlet for creating container file(s) used by the IoDispatcher." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIoStoreCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIoStoreCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIoStoreCommandlet_Statics::ClassParams = {
		&UIoStoreCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIoStoreCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIoStoreCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIoStoreCommandlet()
	{
		if (!Z_Registration_Info_UClass_UIoStoreCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIoStoreCommandlet.OuterSingleton, Z_Construct_UClass_UIoStoreCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIoStoreCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UIoStoreCommandlet>()
	{
		return UIoStoreCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIoStoreCommandlet);
	UIoStoreCommandlet::~UIoStoreCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIoStoreCommandlet, UIoStoreCommandlet::StaticClass, TEXT("UIoStoreCommandlet"), &Z_Registration_Info_UClass_UIoStoreCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIoStoreCommandlet), 1090368316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_978421424(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_IoStoreCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
