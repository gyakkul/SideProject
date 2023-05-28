// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitFrame() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitFrame();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppleARKitFrame;
class UScriptStruct* FAppleARKitFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppleARKitFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppleARKitFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitFrame, (UObject*)Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitFrame"));
	}
	return Z_Registration_Info_UScriptStruct_AppleARKitFrame.OuterSingleton;
}
template<> APPLEARKIT_API UScriptStruct* StaticStruct<FAppleARKitFrame>()
{
	return FAppleARKitFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAppleARKitFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::Struct_MetaDataParams[] = {
		{ "Category", "AppleARKit" },
		{ "Comment", "/**\n * An object representing a frame processed by FAppleARKitSystem.\n * @discussion Each frame contains information about the current state of the scene.\n */" },
		{ "ModuleRelativePath", "Private/AppleARKitFrame.h" },
		{ "ToolTip", "An object representing a frame processed by FAppleARKitSystem.\n@discussion Each frame contains information about the current state of the scene." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
		nullptr,
		&NewStructOps,
		"AppleARKitFrame",
		sizeof(FAppleARKitFrame),
		alignof(FAppleARKitFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_AppleARKitFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppleARKitFrame.InnerSingleton, Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AppleARKitFrame.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h_Statics::ScriptStructInfo[] = {
		{ FAppleARKitFrame::StaticStruct, Z_Construct_UScriptStruct_FAppleARKitFrame_Statics::NewStructOps, TEXT("AppleARKitFrame"), &Z_Registration_Info_UScriptStruct_AppleARKitFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppleARKitFrame), 102275882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h_2025684084(TEXT("/Script/AppleARKit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitFrame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
