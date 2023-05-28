// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SSCSEditorMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCSEditorMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KISMET_API UClass* Z_Construct_UClass_USSCSEditorMenuContext();
	KISMET_API UClass* Z_Construct_UClass_USSCSEditorMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	void USSCSEditorMenuContext::StaticRegisterNativesUSSCSEditorMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USSCSEditorMenuContext);
	UClass* Z_Construct_UClass_USSCSEditorMenuContext_NoRegister()
	{
		return USSCSEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USSCSEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USSCSEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSCSEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SSCSEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/SSCSEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USSCSEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSCSEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USSCSEditorMenuContext_Statics::ClassParams = {
		&USSCSEditorMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USSCSEditorMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USSCSEditorMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USSCSEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_USSCSEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USSCSEditorMenuContext.OuterSingleton, Z_Construct_UClass_USSCSEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USSCSEditorMenuContext.OuterSingleton;
	}
	template<> KISMET_API UClass* StaticClass<USSCSEditorMenuContext>()
	{
		return USSCSEditorMenuContext::StaticClass();
	}
	USSCSEditorMenuContext::USSCSEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USSCSEditorMenuContext);
	USSCSEditorMenuContext::~USSCSEditorMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USSCSEditorMenuContext, USSCSEditorMenuContext::StaticClass, TEXT("USSCSEditorMenuContext"), &Z_Registration_Info_UClass_USSCSEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USSCSEditorMenuContext), 471313584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_1865453356(TEXT("/Script/Kismet"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_SSCSEditorMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
