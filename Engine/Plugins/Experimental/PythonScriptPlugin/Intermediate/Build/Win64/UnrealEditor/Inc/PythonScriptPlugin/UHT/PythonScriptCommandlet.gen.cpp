// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PythonScriptCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptCommandlet();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonScriptCommandlet::StaticRegisterNativesUPythonScriptCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonScriptCommandlet);
	UClass* Z_Construct_UClass_UPythonScriptCommandlet_NoRegister()
	{
		return UPythonScriptCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScriptCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScriptCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Minimal commandlet to invoke a Python script and exit */" },
		{ "IncludePath", "PythonScriptCommandlet.h" },
		{ "ModuleRelativePath", "Private/PythonScriptCommandlet.h" },
		{ "ToolTip", "Minimal commandlet to invoke a Python script and exit" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScriptCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScriptCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonScriptCommandlet_Statics::ClassParams = {
		&UPythonScriptCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPythonScriptCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScriptCommandlet()
	{
		if (!Z_Registration_Info_UClass_UPythonScriptCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonScriptCommandlet.OuterSingleton, Z_Construct_UClass_UPythonScriptCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonScriptCommandlet.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonScriptCommandlet>()
	{
		return UPythonScriptCommandlet::StaticClass();
	}
	UPythonScriptCommandlet::UPythonScriptCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScriptCommandlet);
	UPythonScriptCommandlet::~UPythonScriptCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonScriptCommandlet, UPythonScriptCommandlet::StaticClass, TEXT("UPythonScriptCommandlet"), &Z_Registration_Info_UClass_UPythonScriptCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonScriptCommandlet), 869469571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_2578726352(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
