// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/Util/Filter/SConcertFilterBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSConcertFilterBar() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UConcertFilterBarContext();
	MULTIUSERSERVER_API UClass* Z_Construct_UClass_UConcertFilterBarContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiUserServer();
// End Cross Module References
	void UConcertFilterBarContext::StaticRegisterNativesUConcertFilterBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertFilterBarContext);
	UClass* Z_Construct_UClass_UConcertFilterBarContext_NoRegister()
	{
		return UConcertFilterBarContext::StaticClass();
	}
	struct Z_Construct_UClass_UConcertFilterBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertFilterBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertFilterBarContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Util/Filter/SConcertFilterBar.h" },
		{ "ModuleRelativePath", "Private/Widgets/Util/Filter/SConcertFilterBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertFilterBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertFilterBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertFilterBarContext_Statics::ClassParams = {
		&UConcertFilterBarContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertFilterBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertFilterBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertFilterBarContext()
	{
		if (!Z_Registration_Info_UClass_UConcertFilterBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertFilterBarContext.OuterSingleton, Z_Construct_UClass_UConcertFilterBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertFilterBarContext.OuterSingleton;
	}
	template<> MULTIUSERSERVER_API UClass* StaticClass<UConcertFilterBarContext>()
	{
		return UConcertFilterBarContext::StaticClass();
	}
	UConcertFilterBarContext::UConcertFilterBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertFilterBarContext);
	UConcertFilterBarContext::~UConcertFilterBarContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Util_Filter_SConcertFilterBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Util_Filter_SConcertFilterBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertFilterBarContext, UConcertFilterBarContext::StaticClass, TEXT("UConcertFilterBarContext"), &Z_Registration_Info_UClass_UConcertFilterBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertFilterBarContext), 659197292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Util_Filter_SConcertFilterBar_h_535114939(TEXT("/Script/MultiUserServer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Util_Filter_SConcertFilterBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Util_Filter_SConcertFilterBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
