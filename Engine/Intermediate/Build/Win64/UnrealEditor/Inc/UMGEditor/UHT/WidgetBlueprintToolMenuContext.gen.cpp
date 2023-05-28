// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/WidgetBlueprintToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintToolMenuContext();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetBlueprintToolMenuContext::StaticRegisterNativesUWidgetBlueprintToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintToolMenuContext);
	UClass* Z_Construct_UClass_UWidgetBlueprintToolMenuContext_NoRegister()
	{
		return UWidgetBlueprintToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetBlueprintToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprintToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::ClassParams = {
		&UWidgetBlueprintToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintToolMenuContext.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintToolMenuContext.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprintToolMenuContext>()
	{
		return UWidgetBlueprintToolMenuContext::StaticClass();
	}
	UWidgetBlueprintToolMenuContext::UWidgetBlueprintToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintToolMenuContext);
	UWidgetBlueprintToolMenuContext::~UWidgetBlueprintToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintToolMenuContext, UWidgetBlueprintToolMenuContext::StaticClass, TEXT("UWidgetBlueprintToolMenuContext"), &Z_Registration_Info_UClass_UWidgetBlueprintToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintToolMenuContext), 2107722098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintToolMenuContext_h_148585218(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
