// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/ViewportToolBarContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportToolBarContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UViewportToolBarContext();
	UNREALED_API UClass* Z_Construct_UClass_UViewportToolBarContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UViewportToolBarContext::StaticRegisterNativesUViewportToolBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportToolBarContext);
	UClass* Z_Construct_UClass_UViewportToolBarContext_NoRegister()
	{
		return UViewportToolBarContext::StaticClass();
	}
	struct Z_Construct_UClass_UViewportToolBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportToolBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportToolBarContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportToolBarContext.h" },
		{ "ModuleRelativePath", "Public/ViewportToolBarContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportToolBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportToolBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportToolBarContext_Statics::ClassParams = {
		&UViewportToolBarContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UViewportToolBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportToolBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportToolBarContext()
	{
		if (!Z_Registration_Info_UClass_UViewportToolBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportToolBarContext.OuterSingleton, Z_Construct_UClass_UViewportToolBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportToolBarContext.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UViewportToolBarContext>()
	{
		return UViewportToolBarContext::StaticClass();
	}
	UViewportToolBarContext::UViewportToolBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportToolBarContext);
	UViewportToolBarContext::~UViewportToolBarContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ViewportToolBarContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ViewportToolBarContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportToolBarContext, UViewportToolBarContext::StaticClass, TEXT("UViewportToolBarContext"), &Z_Registration_Info_UClass_UViewportToolBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportToolBarContext), 3821669215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ViewportToolBarContext_h_594591921(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ViewportToolBarContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ViewportToolBarContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
