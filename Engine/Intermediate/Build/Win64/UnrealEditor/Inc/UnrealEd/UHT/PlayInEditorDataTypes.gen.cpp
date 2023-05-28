// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/PlayInEditorDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayInEditorDataTypes() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPIELoginInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo;
class UScriptStruct* FSlatePlayInEditorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("SlatePlayInEditorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSlatePlayInEditorInfo>()
{
	return FSlatePlayInEditorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayInEditorDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlatePlayInEditorInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SlatePlayInEditorInfo",
		sizeof(FSlatePlayInEditorInfo),
		alignof(FSlatePlayInEditorInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.InnerSingleton, Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIELoginInfo;
class UScriptStruct* FPIELoginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIELoginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIELoginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIELoginInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("PIELoginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PIELoginInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPIELoginInfo>()
{
	return FPIELoginInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIELoginInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data structure for storing PIE login credentials\n */" },
		{ "ModuleRelativePath", "Public/PlayInEditorDataTypes.h" },
		{ "ToolTip", "Data structure for storing PIE login credentials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIELoginInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc) */" },
		{ "ModuleRelativePath", "Public/PlayInEditorDataTypes.h" },
		{ "ToolTip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginInfo, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id of the user logging in (email, display name, facebook id, etc) */" },
		{ "ModuleRelativePath", "Public/PlayInEditorDataTypes.h" },
		{ "ToolTip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData[] = {
		{ "Comment", "/** Credentials of the user logging in (password or auth token) */" },
		{ "ModuleRelativePath", "Public/PlayInEditorDataTypes.h" },
		{ "ToolTip", "Credentials of the user logging in (password or auth token)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginInfo, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PIELoginInfo",
		sizeof(FPIELoginInfo),
		alignof(FPIELoginInfo),
		Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIELoginInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PIELoginInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIELoginInfo.InnerSingleton, Z_Construct_UScriptStruct_FPIELoginInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIELoginInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PlayInEditorDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PlayInEditorDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FSlatePlayInEditorInfo::StaticStruct, Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::NewStructOps, TEXT("SlatePlayInEditorInfo"), &Z_Registration_Info_UScriptStruct_SlatePlayInEditorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlatePlayInEditorInfo), 947463063U) },
		{ FPIELoginInfo::StaticStruct, Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewStructOps, TEXT("PIELoginInfo"), &Z_Registration_Info_UScriptStruct_PIELoginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIELoginInfo), 8667025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PlayInEditorDataTypes_h_3634153662(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PlayInEditorDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PlayInEditorDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
