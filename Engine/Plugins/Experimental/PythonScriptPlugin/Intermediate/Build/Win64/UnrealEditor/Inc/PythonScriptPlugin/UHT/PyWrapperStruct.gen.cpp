// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyWrapperStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyWrapperStruct() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedStruct();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedStruct_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonGeneratedStruct::StaticRegisterNativesUPythonGeneratedStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonGeneratedStruct);
	UClass* Z_Construct_UClass_UPythonGeneratedStruct_NoRegister()
	{
		return UPythonGeneratedStruct::StaticClass();
	}
	struct Z_Construct_UClass_UPythonGeneratedStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonGeneratedStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonGeneratedStruct_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An Unreal struct that was generated from a Python type */" },
		{ "IncludePath", "PyWrapperStruct.h" },
		{ "ModuleRelativePath", "Private/PyWrapperStruct.h" },
		{ "ToolTip", "An Unreal struct that was generated from a Python type" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPythonGeneratedStruct_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPythonResourceOwner_NoRegister, (int32)VTABLE_OFFSET(UPythonGeneratedStruct, IPythonResourceOwner), false },  // 1208243300
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonGeneratedStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonGeneratedStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonGeneratedStruct_Statics::ClassParams = {
		&UPythonGeneratedStruct::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonGeneratedStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonGeneratedStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonGeneratedStruct()
	{
		if (!Z_Registration_Info_UClass_UPythonGeneratedStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonGeneratedStruct.OuterSingleton, Z_Construct_UClass_UPythonGeneratedStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonGeneratedStruct.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonGeneratedStruct>()
	{
		return UPythonGeneratedStruct::StaticClass();
	}
	UPythonGeneratedStruct::UPythonGeneratedStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonGeneratedStruct);
	UPythonGeneratedStruct::~UPythonGeneratedStruct() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonGeneratedStruct, UPythonGeneratedStruct::StaticClass, TEXT("UPythonGeneratedStruct"), &Z_Registration_Info_UClass_UPythonGeneratedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonGeneratedStruct), 3826265405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_3133988930(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
