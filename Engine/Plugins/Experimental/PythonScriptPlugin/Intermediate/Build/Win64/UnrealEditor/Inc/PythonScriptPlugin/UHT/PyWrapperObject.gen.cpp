// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyWrapperObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyWrapperObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedClass();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedClass_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonGeneratedClass::StaticRegisterNativesUPythonGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonGeneratedClass);
	UClass* Z_Construct_UClass_UPythonGeneratedClass_NoRegister()
	{
		return UPythonGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UPythonGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An Unreal class that was generated from a Python type */" },
		{ "IncludePath", "PyWrapperObject.h" },
		{ "ModuleRelativePath", "Private/PyWrapperObject.h" },
		{ "ToolTip", "An Unreal class that was generated from a Python type" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPythonGeneratedClass_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPythonResourceOwner_NoRegister, (int32)VTABLE_OFFSET(UPythonGeneratedClass, IPythonResourceOwner), false },  // 1208243300
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonGeneratedClass_Statics::ClassParams = {
		&UPythonGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UPythonGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonGeneratedClass.OuterSingleton, Z_Construct_UClass_UPythonGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonGeneratedClass.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonGeneratedClass>()
	{
		return UPythonGeneratedClass::StaticClass();
	}
	UPythonGeneratedClass::UPythonGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonGeneratedClass);
	UPythonGeneratedClass::~UPythonGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonGeneratedClass, UPythonGeneratedClass::StaticClass, TEXT("UPythonGeneratedClass"), &Z_Registration_Info_UClass_UPythonGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonGeneratedClass), 3922263257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_1349394838(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
