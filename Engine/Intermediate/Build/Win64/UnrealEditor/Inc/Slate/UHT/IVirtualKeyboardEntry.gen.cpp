// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVirtualKeyboardEntry() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions;
class UScriptStruct* FVirtualKeyboardOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualKeyboardOptions, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("VirtualKeyboardOptions"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FVirtualKeyboardOptions>()
{
	return FVirtualKeyboardOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutocorrect_MetaData[];
#endif
		static void NewProp_bEnableAutocorrect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutocorrect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Input/IVirtualKeyboardEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualKeyboardOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData[] = {
		{ "Category", "Autocorrect" },
		{ "Comment", "/** Enables autocorrect for this widget, if supported by the platform's virtual keyboard. Autocorrect must also be enabled in Input settings for this to take effect. */" },
		{ "ModuleRelativePath", "Public/Widgets/Input/IVirtualKeyboardEntry.h" },
		{ "ToolTip", "Enables autocorrect for this widget, if supported by the platform's virtual keyboard. Autocorrect must also be enabled in Input settings for this to take effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_SetBit(void* Obj)
	{
		((FVirtualKeyboardOptions*)Obj)->bEnableAutocorrect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect = { "bEnableAutocorrect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualKeyboardOptions), &Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"VirtualKeyboardOptions",
		sizeof(FVirtualKeyboardOptions),
		alignof(FVirtualKeyboardOptions),
		Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.InnerSingleton, Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h_Statics::ScriptStructInfo[] = {
		{ FVirtualKeyboardOptions::StaticStruct, Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewStructOps, TEXT("VirtualKeyboardOptions"), &Z_Registration_Info_UScriptStruct_VirtualKeyboardOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualKeyboardOptions), 1698244812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h_1599729754(TEXT("/Script/Slate"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Input_IVirtualKeyboardEntry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
