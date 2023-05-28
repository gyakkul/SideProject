// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeToolMenuContext();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	void UStateTreeToolMenuContext::StaticRegisterNativesUStateTreeToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeToolMenuContext);
	UClass* Z_Construct_UClass_UStateTreeToolMenuContext_NoRegister()
	{
		return UStateTreeToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/StateTreeToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeToolMenuContext_Statics::ClassParams = {
		&UStateTreeToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UStateTreeToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeToolMenuContext.OuterSingleton, Z_Construct_UClass_UStateTreeToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeToolMenuContext.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeToolMenuContext>()
	{
		return UStateTreeToolMenuContext::StaticClass();
	}
	UStateTreeToolMenuContext::UStateTreeToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeToolMenuContext);
	UStateTreeToolMenuContext::~UStateTreeToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeToolMenuContext, UStateTreeToolMenuContext::StaticClass, TEXT("UStateTreeToolMenuContext"), &Z_Registration_Info_UClass_UStateTreeToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeToolMenuContext), 1183085391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeToolMenuContext_h_92990143(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
