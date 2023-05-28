// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMappableKeySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMappableKeySlot() {}
// Cross Module References
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot;
class UScriptStruct* FPlayerMappableKeySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeySlot, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerMappableKeySlot"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerMappableKeySlot>()
{
	return FPlayerMappableKeySlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Explicitly identifies the slot for a player mappable key\n* Experimental: Do not count on long term support for this structure.\n*/" },
		{ "DisplayName", "Player Mappable Key Slot (Experimental)" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySlot.h" },
		{ "ToolTip", "Explicitly identifies the slot for a player mappable key\nExperimental: Do not count on long term support for this structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappableKeySlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewProp_SlotNumber_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerMappableKeySlot, SlotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewProp_SlotNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewProp_SlotNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewProp_SlotNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"PlayerMappableKeySlot",
		sizeof(FPlayerMappableKeySlot),
		alignof(FPlayerMappableKeySlot),
		Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySlot_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySlot_h_Statics::ScriptStructInfo[] = {
		{ FPlayerMappableKeySlot::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappableKeySlot_Statics::NewStructOps, TEXT("PlayerMappableKeySlot"), &Z_Registration_Info_UScriptStruct_PlayerMappableKeySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappableKeySlot), 1767934072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySlot_h_1056429670(TEXT("/Script/EnhancedInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySlot_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
