// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorInitializationContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorInitializationContext() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorInitializationContext();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorInitializationContext_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject();
// End Cross Module References
	void UUVEditorInitializationContext::StaticRegisterNativesUUVEditorInitializationContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorInitializationContext);
	UClass* Z_Construct_UClass_UUVEditorInitializationContext_NoRegister()
	{
		return UUVEditorInitializationContext::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorInitializationContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorInitializationContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorInitializationContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An editor-only context used specifically to pass data from the asset editor to the\n * mode when that data is not meant to be used by the tools. This allows a mode\n * to be prepped before its first Enter() call even when it doesn't exist yet.\n * \n * Data/api's that are meant to be used by the tools would usually be placed into\n * other, non-editor-only context objects (UUVToolLivePreviewAPI, etc).\n */" },
		{ "IncludePath", "UVEditorInitializationContext.h" },
		{ "ModuleRelativePath", "Public/UVEditorInitializationContext.h" },
		{ "ToolTip", "An editor-only context used specifically to pass data from the asset editor to the\nmode when that data is not meant to be used by the tools. This allows a mode\nto be prepped before its first Enter() call even when it doesn't exist yet.\n\nData/api's that are meant to be used by the tools would usually be placed into\nother, non-editor-only context objects (UUVToolLivePreviewAPI, etc)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorInitializationContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorInitializationContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorInitializationContext_Statics::ClassParams = {
		&UUVEditorInitializationContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorInitializationContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorInitializationContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorInitializationContext()
	{
		if (!Z_Registration_Info_UClass_UUVEditorInitializationContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorInitializationContext.OuterSingleton, Z_Construct_UClass_UUVEditorInitializationContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorInitializationContext.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorInitializationContext>()
	{
		return UUVEditorInitializationContext::StaticClass();
	}
	UUVEditorInitializationContext::UUVEditorInitializationContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorInitializationContext);
	UUVEditorInitializationContext::~UUVEditorInitializationContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorInitializationContext, UUVEditorInitializationContext::StaticClass, TEXT("UUVEditorInitializationContext"), &Z_Registration_Info_UClass_UUVEditorInitializationContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorInitializationContext), 3088878284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_3888824590(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorInitializationContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
