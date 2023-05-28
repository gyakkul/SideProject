// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Commandlets/StateTreeCompileAllCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCompileAllCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeCompileAllCommandlet();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeCompileAllCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	void UStateTreeCompileAllCommandlet::StaticRegisterNativesUStateTreeCompileAllCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeCompileAllCommandlet);
	UClass* Z_Construct_UClass_UStateTreeCompileAllCommandlet_NoRegister()
	{
		return UStateTreeCompileAllCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Commandlet to recompile all StateTree assets in the project\n */" },
		{ "IncludePath", "Commandlets/StateTreeCompileAllCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/StateTreeCompileAllCommandlet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Commandlet to recompile all StateTree assets in the project" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeCompileAllCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::ClassParams = {
		&UStateTreeCompileAllCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeCompileAllCommandlet()
	{
		if (!Z_Registration_Info_UClass_UStateTreeCompileAllCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeCompileAllCommandlet.OuterSingleton, Z_Construct_UClass_UStateTreeCompileAllCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeCompileAllCommandlet.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeCompileAllCommandlet>()
	{
		return UStateTreeCompileAllCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeCompileAllCommandlet);
	UStateTreeCompileAllCommandlet::~UStateTreeCompileAllCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeCompileAllCommandlet, UStateTreeCompileAllCommandlet::StaticClass, TEXT("UStateTreeCompileAllCommandlet"), &Z_Registration_Info_UClass_UStateTreeCompileAllCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeCompileAllCommandlet), 360984711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_3591589757(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_Commandlets_StateTreeCompileAllCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
