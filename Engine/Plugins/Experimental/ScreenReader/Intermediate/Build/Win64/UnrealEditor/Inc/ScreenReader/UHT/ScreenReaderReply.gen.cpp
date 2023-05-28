// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenericPlatform/ScreenReaderReply.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenReaderReply() {}
// Cross Module References
	SCREENREADER_API UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderReply();
	UPackage* Z_Construct_UPackage__Script_ScreenReader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenReaderReply;
class UScriptStruct* FScreenReaderReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenReaderReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenReaderReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenReaderReply, (UObject*)Z_Construct_UPackage__Script_ScreenReader(), TEXT("ScreenReaderReply"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenReaderReply.OuterSingleton;
}
template<> SCREENREADER_API UScriptStruct* StaticStruct<FScreenReaderReply>()
{
	return FScreenReaderReply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenReaderReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandled_MetaData[];
#endif
		static void NewProp_bHandled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderReply_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A struct passed around the the screen reader framework to indicate if a request has been successfully handled.\n* Use this class to determine if a request to the screen reader user was successfully handled and provide user feedback accordingly.\n* // @TODOAccessibility: Provide examples \n* @see FScreenReaderUser\n*/" },
		{ "ModuleRelativePath", "Public/GenericPlatform/ScreenReaderReply.h" },
		{ "ToolTip", "A struct passed around the the screen reader framework to indicate if a request has been successfully handled.\nUse this class to determine if a request to the screen reader user was successfully handled and provide user feedback accordingly.\n// @TODOAccessibility: Provide examples\n@see FScreenReaderUser" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenReaderReply>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ScreenReaderReply" },
		{ "ModuleRelativePath", "Public/GenericPlatform/ScreenReaderReply.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled_SetBit(void* Obj)
	{
		((FScreenReaderReply*)Obj)->bHandled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled = { "bHandled", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScreenReaderReply), &Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenReaderReply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewProp_bHandled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenReaderReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenReader,
		nullptr,
		&NewStructOps,
		"ScreenReaderReply",
		sizeof(FScreenReaderReply),
		alignof(FScreenReaderReply),
		Z_Construct_UScriptStruct_FScreenReaderReply_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderReply_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderReply()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenReaderReply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenReaderReply.InnerSingleton, Z_Construct_UScriptStruct_FScreenReaderReply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenReaderReply.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_GenericPlatform_ScreenReaderReply_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_GenericPlatform_ScreenReaderReply_h_Statics::ScriptStructInfo[] = {
		{ FScreenReaderReply::StaticStruct, Z_Construct_UScriptStruct_FScreenReaderReply_Statics::NewStructOps, TEXT("ScreenReaderReply"), &Z_Registration_Info_UScriptStruct_ScreenReaderReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenReaderReply), 1123592948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_GenericPlatform_ScreenReaderReply_h_1942079360(TEXT("/Script/ScreenReader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_GenericPlatform_ScreenReaderReply_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_GenericPlatform_ScreenReaderReply_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
