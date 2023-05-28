// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/RuntimeOptionsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeOptionsBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void URuntimeOptionsBase::StaticRegisterNativesURuntimeOptionsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeOptionsBase);
	UClass* Z_Construct_UClass_URuntimeOptionsBase_NoRegister()
	{
		return URuntimeOptionsBase::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeOptionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeOptionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n * URuntimeOptionsBase: Base class designed to be subclassed in your game.\n *\n * Supports checking at runtime whether features are enabled/disabled, and changing\n * configuration parameters via console cheats or startup commands.\n *\n * Add new config properties to your subclasses which default to the desired normal state\n * This can be adjusted via the development-only tools (command line or cvar) or via an\n * override in the config hierarchy to adjust it as needed (e.g., via a hotfix).\n *\n * In non-Shipping builds, each property will be exposed both as a console variable and as a\n * command-line argument for easy testing during development.\n *\n * Debug console syntax (disabled in Shipping configurations):\n *   prefix.PropertyName Value\n * Command line syntax (disabled in Shipping configurations):\n *   -prefix.PropertyName=Value\n * DefaultRuntimeOptions.ini syntax (note that there is no prefix for these):\n *   [/Script/YourModule.YourRuntimeOptionsSubclass]\n *   PropertyName=Value\n *\n * Where the prefix is set by the value of OptionCommandPrefix (defaults to \"ro\" but can be overridden)\n *\n * You can also change the name of the ini file that settings are gathered from in your derived\n * UCLASS() declaration\n */" },
		{ "IncludePath", "Engine/RuntimeOptionsBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/RuntimeOptionsBase.h" },
		{ "ToolTip", "URuntimeOptionsBase: Base class designed to be subclassed in your game.\n\nSupports checking at runtime whether features are enabled/disabled, and changing\nconfiguration parameters via console cheats or startup commands.\n\nAdd new config properties to your subclasses which default to the desired normal state\nThis can be adjusted via the development-only tools (command line or cvar) or via an\noverride in the config hierarchy to adjust it as needed (e.g., via a hotfix).\n\nIn non-Shipping builds, each property will be exposed both as a console variable and as a\ncommand-line argument for easy testing during development.\n\nDebug console syntax (disabled in Shipping configurations):\n  prefix.PropertyName Value\nCommand line syntax (disabled in Shipping configurations):\n  -prefix.PropertyName=Value\nDefaultRuntimeOptions.ini syntax (note that there is no prefix for these):\n  [/Script/YourModule.YourRuntimeOptionsSubclass]\n  PropertyName=Value\n\nWhere the prefix is set by the value of OptionCommandPrefix (defaults to \"ro\" but can be overridden)\n\nYou can also change the name of the ini file that settings are gathered from in your derived\nUCLASS() declaration" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeOptionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeOptionsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeOptionsBase_Statics::ClassParams = {
		&URuntimeOptionsBase::StaticClass,
		"RuntimeOptions",
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeOptionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeOptionsBase()
	{
		if (!Z_Registration_Info_UClass_URuntimeOptionsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeOptionsBase.OuterSingleton, Z_Construct_UClass_URuntimeOptionsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeOptionsBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URuntimeOptionsBase>()
	{
		return URuntimeOptionsBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeOptionsBase);
	URuntimeOptionsBase::~URuntimeOptionsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeOptionsBase, URuntimeOptionsBase::StaticClass, TEXT("URuntimeOptionsBase"), &Z_Registration_Info_UClass_URuntimeOptionsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeOptionsBase), 731987507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_3184782789(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
