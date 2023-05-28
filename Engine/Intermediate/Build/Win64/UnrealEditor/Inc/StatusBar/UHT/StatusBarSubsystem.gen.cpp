// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatusBarSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusBarSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	STATUSBAR_API UClass* Z_Construct_UClass_UStatusBarSubsystem();
	STATUSBAR_API UClass* Z_Construct_UClass_UStatusBarSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StatusBar();
// End Cross Module References
	void UStatusBarSubsystem::StaticRegisterNativesUStatusBarSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusBarSubsystem);
	UClass* Z_Construct_UClass_UStatusBarSubsystem_NoRegister()
	{
		return UStatusBarSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStatusBarSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusBarSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_StatusBar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusBarSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusBarSubsystem.h" },
		{ "ModuleRelativePath", "Public/StatusBarSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusBarSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusBarSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusBarSubsystem_Statics::ClassParams = {
		&UStatusBarSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStatusBarSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusBarSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusBarSubsystem()
	{
		if (!Z_Registration_Info_UClass_UStatusBarSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusBarSubsystem.OuterSingleton, Z_Construct_UClass_UStatusBarSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatusBarSubsystem.OuterSingleton;
	}
	template<> STATUSBAR_API UClass* StaticClass<UStatusBarSubsystem>()
	{
		return UStatusBarSubsystem::StaticClass();
	}
	UStatusBarSubsystem::UStatusBarSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusBarSubsystem);
	UStatusBarSubsystem::~UStatusBarSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatusBarSubsystem, UStatusBarSubsystem::StaticClass, TEXT("UStatusBarSubsystem"), &Z_Registration_Info_UClass_UStatusBarSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusBarSubsystem), 2674223777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_3179805908(TEXT("/Script/StatusBar"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatusBar_Public_StatusBarSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
