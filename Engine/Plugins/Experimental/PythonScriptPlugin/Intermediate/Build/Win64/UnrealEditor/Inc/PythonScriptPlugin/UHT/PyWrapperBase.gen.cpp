// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyWrapperBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyWrapperBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonResourceOwner::StaticRegisterNativesUPythonResourceOwner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonResourceOwner);
	UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister()
	{
		return UPythonResourceOwner::StaticClass();
	}
	struct Z_Construct_UClass_UPythonResourceOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonResourceOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonResourceOwner_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PyWrapperBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonResourceOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPythonResourceOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonResourceOwner_Statics::ClassParams = {
		&UPythonResourceOwner::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonResourceOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonResourceOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonResourceOwner()
	{
		if (!Z_Registration_Info_UClass_UPythonResourceOwner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonResourceOwner.OuterSingleton, Z_Construct_UClass_UPythonResourceOwner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonResourceOwner.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonResourceOwner>()
	{
		return UPythonResourceOwner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonResourceOwner);
	UPythonResourceOwner::~UPythonResourceOwner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonResourceOwner, UPythonResourceOwner::StaticClass, TEXT("UPythonResourceOwner"), &Z_Registration_Info_UClass_UPythonResourceOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonResourceOwner), 1208243300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperBase_h_1039612625(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
