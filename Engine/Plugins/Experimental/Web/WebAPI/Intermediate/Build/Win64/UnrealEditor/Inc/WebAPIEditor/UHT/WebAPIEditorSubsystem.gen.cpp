// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSubsystem();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSubsystem_NoRegister();
// End Cross Module References
	void UWebAPIEditorSubsystem::StaticRegisterNativesUWebAPIEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIEditorSubsystem);
	UClass* Z_Construct_UClass_UWebAPIEditorSubsystem_NoRegister()
	{
		return UWebAPIEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common functionality and registry for WebAPI Editor. */" },
		{ "IncludePath", "WebAPIEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/WebAPIEditorSubsystem.h" },
		{ "ToolTip", "Common functionality and registry for WebAPI Editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::ClassParams = {
		&UWebAPIEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWebAPIEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIEditorSubsystem.OuterSingleton, Z_Construct_UClass_UWebAPIEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIEditorSubsystem.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIEditorSubsystem>()
	{
		return UWebAPIEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIEditorSubsystem);
	UWebAPIEditorSubsystem::~UWebAPIEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIEditorSubsystem, UWebAPIEditorSubsystem::StaticClass, TEXT("UWebAPIEditorSubsystem"), &Z_Registration_Info_UClass_UWebAPIEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIEditorSubsystem), 3546261598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_3477680824(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
