// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IStylusInputModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStylusInputModule() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	STYLUSINPUT_API UClass* Z_Construct_UClass_UStylusInputSubsystem();
	STYLUSINPUT_API UClass* Z_Construct_UClass_UStylusInputSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StylusInput();
// End Cross Module References
	void UStylusInputSubsystem::StaticRegisterNativesUStylusInputSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStylusInputSubsystem);
	UClass* Z_Construct_UClass_UStylusInputSubsystem_NoRegister()
	{
		return UStylusInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStylusInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStylusInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_StylusInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStylusInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IStylusInputModule.h" },
		{ "ModuleRelativePath", "Public/IStylusInputModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStylusInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStylusInputSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStylusInputSubsystem_Statics::ClassParams = {
		&UStylusInputSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStylusInputSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStylusInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStylusInputSubsystem()
	{
		if (!Z_Registration_Info_UClass_UStylusInputSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStylusInputSubsystem.OuterSingleton, Z_Construct_UClass_UStylusInputSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStylusInputSubsystem.OuterSingleton;
	}
	template<> STYLUSINPUT_API UClass* StaticClass<UStylusInputSubsystem>()
	{
		return UStylusInputSubsystem::StaticClass();
	}
	UStylusInputSubsystem::UStylusInputSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStylusInputSubsystem);
	UStylusInputSubsystem::~UStylusInputSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStylusInputSubsystem, UStylusInputSubsystem::StaticClass, TEXT("UStylusInputSubsystem"), &Z_Registration_Info_UClass_UStylusInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStylusInputSubsystem), 2592802891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_914146144(TEXT("/Script/StylusInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
