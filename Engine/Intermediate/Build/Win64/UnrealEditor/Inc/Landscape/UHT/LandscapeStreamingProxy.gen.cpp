// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeStreamingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeStreamingProxy() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ALandscapeStreamingProxy::StaticRegisterNativesALandscapeStreamingProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeStreamingProxy);
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister()
	{
		return ALandscapeStreamingProxy::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeStreamingProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActorRef_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Mobility" },
		{ "IncludePath", "LandscapeStreamingProxy.h" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActor_DEPRECATED), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef_MetaData[] = {
		{ "Category", "LandscapeProxy" },
		{ "DisplayName", "Landscape Actor" },
		{ "ModuleRelativePath", "Classes/LandscapeStreamingProxy.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef = { "LandscapeActorRef", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeStreamingProxy, LandscapeActorRef), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeStreamingProxy_Statics::NewProp_LandscapeActorRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeStreamingProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeStreamingProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams = {
		&ALandscapeStreamingProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeStreamingProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeStreamingProxy()
	{
		if (!Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton, Z_Construct_UClass_ALandscapeStreamingProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeStreamingProxy.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeStreamingProxy>()
	{
		return ALandscapeStreamingProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeStreamingProxy);
	ALandscapeStreamingProxy::~ALandscapeStreamingProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeStreamingProxy, ALandscapeStreamingProxy::StaticClass, TEXT("ALandscapeStreamingProxy"), &Z_Registration_Info_UClass_ALandscapeStreamingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeStreamingProxy), 1339504926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_1252467907(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeStreamingProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
