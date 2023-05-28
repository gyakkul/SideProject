// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifier/ModifierStackEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierStackEntry() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FModifierStackEntry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifierStackEntry;
class UScriptStruct* FModifierStackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifierStackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifierStackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifierStackEntry, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("ModifierStackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ModifierStackEntry.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FModifierStackEntry>()
{
	return FModifierStackEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifierStackEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierStackEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Links a Modifier with a Name for use in a Modifier Stack\n" },
		{ "ModuleRelativePath", "Public/Modifier/ModifierStackEntry.h" },
		{ "ToolTip", "Links a Modifier with a Name for use in a Modifier Stack" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifierStackEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Identifier for this modifier in the stack\n" },
		{ "ModuleRelativePath", "Public/Modifier/ModifierStackEntry.h" },
		{ "ToolTip", "Identifier for this modifier in the stack" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModifierStackEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// Controls whether the modifier actually gets applied\n" },
		{ "ModuleRelativePath", "Public/Modifier/ModifierStackEntry.h" },
		{ "ToolTip", "Controls whether the modifier actually gets applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FModifierStackEntry*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FModifierStackEntry), &Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_GeneratedModifier_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "// The current generated modifier instance\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Modifier/ModifierStackEntry.h" },
		{ "ToolTip", "The current generated modifier instance" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_GeneratedModifier = { "GeneratedModifier", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModifierStackEntry, GeneratedModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_GeneratedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_GeneratedModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifierStackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewProp_GeneratedModifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifierStackEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"ModifierStackEntry",
		sizeof(FModifierStackEntry),
		alignof(FModifierStackEntry),
		Z_Construct_UScriptStruct_FModifierStackEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierStackEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifierStackEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifierStackEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifierStackEntry.InnerSingleton, Z_Construct_UScriptStruct_FModifierStackEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifierStackEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_ModifierStackEntry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_ModifierStackEntry_h_Statics::ScriptStructInfo[] = {
		{ FModifierStackEntry::StaticStruct, Z_Construct_UScriptStruct_FModifierStackEntry_Statics::NewStructOps, TEXT("ModifierStackEntry"), &Z_Registration_Info_UScriptStruct_ModifierStackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifierStackEntry), 2588913161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_ModifierStackEntry_h_3776680991(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_ModifierStackEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_ModifierStackEntry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
