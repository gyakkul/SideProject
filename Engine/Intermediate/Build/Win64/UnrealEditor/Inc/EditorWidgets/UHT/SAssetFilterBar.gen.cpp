// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/SAssetFilterBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAssetFilterBar() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORWIDGETS_API UClass* Z_Construct_UClass_UAssetFilterBarContext();
	EDITORWIDGETS_API UClass* Z_Construct_UClass_UAssetFilterBarContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorWidgets();
// End Cross Module References
	void UAssetFilterBarContext::StaticRegisterNativesUAssetFilterBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetFilterBarContext);
	UClass* Z_Construct_UClass_UAssetFilterBarContext_NoRegister()
	{
		return UAssetFilterBarContext::StaticClass();
	}
	struct Z_Construct_UClass_UAssetFilterBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetFilterBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetFilterBarContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** ToolMenuContext that is used to create the Add Filter Menu */" },
		{ "IncludePath", "Filters/SAssetFilterBar.h" },
		{ "ModuleRelativePath", "Public/Filters/SAssetFilterBar.h" },
		{ "ToolTip", "ToolMenuContext that is used to create the Add Filter Menu" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetFilterBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetFilterBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetFilterBarContext_Statics::ClassParams = {
		&UAssetFilterBarContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetFilterBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetFilterBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetFilterBarContext()
	{
		if (!Z_Registration_Info_UClass_UAssetFilterBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetFilterBarContext.OuterSingleton, Z_Construct_UClass_UAssetFilterBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetFilterBarContext.OuterSingleton;
	}
	template<> EDITORWIDGETS_API UClass* StaticClass<UAssetFilterBarContext>()
	{
		return UAssetFilterBarContext::StaticClass();
	}
	UAssetFilterBarContext::UAssetFilterBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetFilterBarContext);
	UAssetFilterBarContext::~UAssetFilterBarContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetFilterBarContext, UAssetFilterBarContext::StaticClass, TEXT("UAssetFilterBarContext"), &Z_Registration_Info_UClass_UAssetFilterBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetFilterBarContext), 2214505645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_2894000258(TEXT("/Script/EditorWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorWidgets_Public_Filters_SAssetFilterBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
