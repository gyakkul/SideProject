// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGameViewportClient() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonGameViewportClient::StaticRegisterNativesUCommonGameViewportClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGameViewportClient);
	UClass* Z_Construct_UClass_UCommonGameViewportClient_NoRegister()
	{
		return UCommonGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* CommonUI Viewport to reroute input to UI first. Needed to allow CommonUI to route / handle inputs.\n*/" },
		{ "IncludePath", "CommonGameViewportClient.h" },
		{ "ModuleRelativePath", "Public/CommonGameViewportClient.h" },
		{ "ToolTip", "CommonUI Viewport to reroute input to UI first. Needed to allow CommonUI to route / handle inputs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGameViewportClient_Statics::ClassParams = {
		&UCommonGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UCommonGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_UCommonGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGameViewportClient.OuterSingleton, Z_Construct_UClass_UCommonGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGameViewportClient.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonGameViewportClient>()
	{
		return UCommonGameViewportClient::StaticClass();
	}
	UCommonGameViewportClient::UCommonGameViewportClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGameViewportClient, UCommonGameViewportClient::StaticClass, TEXT("UCommonGameViewportClient"), &Z_Registration_Info_UClass_UCommonGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGameViewportClient), 1114794423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_501114470(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonGameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
