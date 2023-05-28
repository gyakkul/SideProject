// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextObjects/UVToolAssetInputsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVToolAssetInputsContext() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAssetInputsContext();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAssetInputsContext_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject();
// End Cross Module References
	void UUVToolAssetInputsContext::StaticRegisterNativesUUVToolAssetInputsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolAssetInputsContext);
	UClass* Z_Construct_UClass_UUVToolAssetInputsContext_NoRegister()
	{
		return UUVToolAssetInputsContext::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolAssetInputsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolAssetInputsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolAssetInputsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple context object used by UV asset editor to pass inputs down to the UV editor mode.\n */" },
		{ "IncludePath", "ContextObjects/UVToolAssetInputsContext.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolAssetInputsContext.h" },
		{ "ToolTip", "Simple context object used by UV asset editor to pass inputs down to the UV editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolAssetInputsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolAssetInputsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolAssetInputsContext_Statics::ClassParams = {
		&UUVToolAssetInputsContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVToolAssetInputsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolAssetInputsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolAssetInputsContext()
	{
		if (!Z_Registration_Info_UClass_UUVToolAssetInputsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolAssetInputsContext.OuterSingleton, Z_Construct_UClass_UUVToolAssetInputsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolAssetInputsContext.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolAssetInputsContext>()
	{
		return UUVToolAssetInputsContext::StaticClass();
	}
	UUVToolAssetInputsContext::UUVToolAssetInputsContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolAssetInputsContext);
	UUVToolAssetInputsContext::~UUVToolAssetInputsContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolAssetInputsContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolAssetInputsContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVToolAssetInputsContext, UUVToolAssetInputsContext::StaticClass, TEXT("UUVToolAssetInputsContext"), &Z_Registration_Info_UClass_UUVToolAssetInputsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolAssetInputsContext), 3863446668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolAssetInputsContext_h_2367424753(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolAssetInputsContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolAssetInputsContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
