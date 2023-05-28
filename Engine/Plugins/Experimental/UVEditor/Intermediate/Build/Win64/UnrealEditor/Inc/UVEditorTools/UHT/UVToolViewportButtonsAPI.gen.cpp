// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextObjects/UVToolViewportButtonsAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVToolViewportButtonsAPI() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister();
// End Cross Module References
	void UUVToolViewportButtonsAPI::StaticRegisterNativesUUVToolViewportButtonsAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolViewportButtonsAPI);
	UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister()
	{
		return UUVToolViewportButtonsAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows tools to interact with buttons in the viewport\n */" },
		{ "IncludePath", "ContextObjects/UVToolViewportButtonsAPI.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolViewportButtonsAPI.h" },
		{ "ToolTip", "Allows tools to interact with buttons in the viewport" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolViewportButtonsAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::ClassParams = {
		&UUVToolViewportButtonsAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI()
	{
		if (!Z_Registration_Info_UClass_UUVToolViewportButtonsAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolViewportButtonsAPI.OuterSingleton, Z_Construct_UClass_UUVToolViewportButtonsAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolViewportButtonsAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolViewportButtonsAPI>()
	{
		return UUVToolViewportButtonsAPI::StaticClass();
	}
	UUVToolViewportButtonsAPI::UUVToolViewportButtonsAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolViewportButtonsAPI);
	UUVToolViewportButtonsAPI::~UUVToolViewportButtonsAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVToolViewportButtonsAPI, UUVToolViewportButtonsAPI::StaticClass, TEXT("UUVToolViewportButtonsAPI"), &Z_Registration_Info_UClass_UUVToolViewportButtonsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolViewportButtonsAPI), 810675538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_31223016(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolViewportButtonsAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
