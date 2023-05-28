// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUITag() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUIActionTag();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUITag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References

static_assert(std::is_polymorphic<FUITag>() == std::is_polymorphic<FGameplayTag>(), "USTRUCT FUITag cannot be polymorphic unless super FGameplayTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UITag;
class UScriptStruct* FUITag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UITag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UITag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUITag, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("UITag"));
	}
	return Z_Registration_Info_UScriptStruct_UITag.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FUITag>()
{
	return FUITag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUITag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUITag_Statics::Struct_MetaDataParams[] = {
		{ "Categories", "UI" },
		{ "ModuleRelativePath", "Public/UITag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUITag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUITag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUITag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FGameplayTag,
		&NewStructOps,
		"UITag",
		sizeof(FUITag),
		alignof(FUITag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUITag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUITag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUITag()
	{
		if (!Z_Registration_Info_UScriptStruct_UITag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UITag.InnerSingleton, Z_Construct_UScriptStruct_FUITag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UITag.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIActionTag>() == std::is_polymorphic<FUITag>(), "USTRUCT FUIActionTag cannot be polymorphic unless super FUITag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIActionTag;
class UScriptStruct* FUIActionTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIActionTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIActionTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIActionTag, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("UIActionTag"));
	}
	return Z_Registration_Info_UScriptStruct_UIActionTag.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FUIActionTag>()
{
	return FUIActionTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIActionTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIActionTag_Statics::Struct_MetaDataParams[] = {
		{ "Categories", "UI.Action" },
		{ "ModuleRelativePath", "Public/UITag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIActionTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIActionTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIActionTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FUITag,
		&NewStructOps,
		"UIActionTag",
		sizeof(FUIActionTag),
		alignof(FUIActionTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIActionTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIActionTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIActionTag()
	{
		if (!Z_Registration_Info_UScriptStruct_UIActionTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIActionTag.InnerSingleton, Z_Construct_UScriptStruct_FUIActionTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIActionTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_UITag_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_UITag_h_Statics::ScriptStructInfo[] = {
		{ FUITag::StaticStruct, Z_Construct_UScriptStruct_FUITag_Statics::NewStructOps, TEXT("UITag"), &Z_Registration_Info_UScriptStruct_UITag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUITag), 3106355522U) },
		{ FUIActionTag::StaticStruct, Z_Construct_UScriptStruct_FUIActionTag_Statics::NewStructOps, TEXT("UIActionTag"), &Z_Registration_Info_UScriptStruct_UIActionTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIActionTag), 2018462953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_UITag_h_148029286(TEXT("/Script/CommonUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_UITag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_UITag_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
