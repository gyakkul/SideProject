// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyWrapperEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyWrapperEnum() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedEnum();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonGeneratedEnum_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonGeneratedEnum::StaticRegisterNativesUPythonGeneratedEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonGeneratedEnum);
	UClass* Z_Construct_UClass_UPythonGeneratedEnum_NoRegister()
	{
		return UPythonGeneratedEnum::StaticClass();
	}
	struct Z_Construct_UClass_UPythonGeneratedEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonGeneratedEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonGeneratedEnum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An Unreal enum that was generated from a Python type */" },
		{ "IncludePath", "PyWrapperEnum.h" },
		{ "ModuleRelativePath", "Private/PyWrapperEnum.h" },
		{ "ToolTip", "An Unreal enum that was generated from a Python type" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPythonGeneratedEnum_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPythonResourceOwner_NoRegister, (int32)VTABLE_OFFSET(UPythonGeneratedEnum, IPythonResourceOwner), false },  // 1208243300
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonGeneratedEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonGeneratedEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonGeneratedEnum_Statics::ClassParams = {
		&UPythonGeneratedEnum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPythonGeneratedEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonGeneratedEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonGeneratedEnum()
	{
		if (!Z_Registration_Info_UClass_UPythonGeneratedEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonGeneratedEnum.OuterSingleton, Z_Construct_UClass_UPythonGeneratedEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonGeneratedEnum.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonGeneratedEnum>()
	{
		return UPythonGeneratedEnum::StaticClass();
	}
	UPythonGeneratedEnum::UPythonGeneratedEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonGeneratedEnum);
	UPythonGeneratedEnum::~UPythonGeneratedEnum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonGeneratedEnum, UPythonGeneratedEnum::StaticClass, TEXT("UPythonGeneratedEnum"), &Z_Registration_Info_UClass_UPythonGeneratedEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonGeneratedEnum), 2821187467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_778280854(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperEnum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
