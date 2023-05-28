// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyWrapperDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyWrapperDelegate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonCallableForDelegate();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonCallableForDelegate_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonResourceOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	void UPythonCallableForDelegate::StaticRegisterNativesUPythonCallableForDelegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonCallableForDelegate);
	UClass* Z_Construct_UClass_UPythonCallableForDelegate_NoRegister()
	{
		return UPythonCallableForDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UPythonCallableForDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonCallableForDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonCallableForDelegate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UObject proxy base used to wrap a callable Python object so that it can be used with an Unreal delegate\n * @note This can't go inside the WITH_PYTHON block due to UHT parsing limitations (it doesn't understand that macro)\n */" },
		{ "IncludePath", "PyWrapperDelegate.h" },
		{ "ModuleRelativePath", "Private/PyWrapperDelegate.h" },
		{ "ToolTip", "UObject proxy base used to wrap a callable Python object so that it can be used with an Unreal delegate\n@note This can't go inside the WITH_PYTHON block due to UHT parsing limitations (it doesn't understand that macro)" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPythonCallableForDelegate_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPythonResourceOwner_NoRegister, (int32)VTABLE_OFFSET(UPythonCallableForDelegate, IPythonResourceOwner), false },  // 1208243300
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonCallableForDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonCallableForDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonCallableForDelegate_Statics::ClassParams = {
		&UPythonCallableForDelegate::StaticClass,
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
		0x040000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonCallableForDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonCallableForDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonCallableForDelegate()
	{
		if (!Z_Registration_Info_UClass_UPythonCallableForDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonCallableForDelegate.OuterSingleton, Z_Construct_UClass_UPythonCallableForDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonCallableForDelegate.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonCallableForDelegate>()
	{
		return UPythonCallableForDelegate::StaticClass();
	}
	UPythonCallableForDelegate::UPythonCallableForDelegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonCallableForDelegate);
	UPythonCallableForDelegate::~UPythonCallableForDelegate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonCallableForDelegate, UPythonCallableForDelegate::StaticClass, TEXT("UPythonCallableForDelegate"), &Z_Registration_Info_UClass_UPythonCallableForDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonCallableForDelegate), 645685343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_998062370(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyWrapperDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
