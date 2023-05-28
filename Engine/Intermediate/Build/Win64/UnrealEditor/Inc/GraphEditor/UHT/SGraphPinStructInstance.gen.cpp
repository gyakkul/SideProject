// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KismetPins/SGraphPinStructInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGraphPinStructInstance() {}
// Cross Module References
	GRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPinStructEditWrapper();
	UPackage* Z_Construct_UPackage__Script_GraphEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PinStructEditWrapper;
class UScriptStruct* FPinStructEditWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PinStructEditWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PinStructEditWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinStructEditWrapper, (UObject*)Z_Construct_UPackage__Script_GraphEditor(), TEXT("PinStructEditWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_PinStructEditWrapper.OuterSingleton;
}
template<> GRAPHEDITOR_API UScriptStruct* StaticStruct<FPinStructEditWrapper>()
{
	return FPinStructEditWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base type for editing simple structs as pin default values, by displaying a nested version of a struct customization.\n * To make this work, create an inherited USTRUCT that includes a copy of the struct to be edited and overrides the functions.\n * Then, pass in StructName::StaticStruct() when creating SGraphPinStructInstance from a pin factory\n */" },
		{ "ModuleRelativePath", "Public/KismetPins/SGraphPinStructInstance.h" },
		{ "ToolTip", "Base type for editing simple structs as pin default values, by displaying a nested version of a struct customization.\nTo make this work, create an inherited USTRUCT that includes a copy of the struct to be edited and overrides the functions.\nThen, pass in StructName::StaticStruct() when creating SGraphPinStructInstance from a pin factory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinStructEditWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GraphEditor,
		nullptr,
		&NewStructOps,
		"PinStructEditWrapper",
		sizeof(FPinStructEditWrapper),
		alignof(FPinStructEditWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinStructEditWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_PinStructEditWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PinStructEditWrapper.InnerSingleton, Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PinStructEditWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_GraphEditor_Public_KismetPins_SGraphPinStructInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GraphEditor_Public_KismetPins_SGraphPinStructInstance_h_Statics::ScriptStructInfo[] = {
		{ FPinStructEditWrapper::StaticStruct, Z_Construct_UScriptStruct_FPinStructEditWrapper_Statics::NewStructOps, TEXT("PinStructEditWrapper"), &Z_Registration_Info_UScriptStruct_PinStructEditWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPinStructEditWrapper), 3539379357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GraphEditor_Public_KismetPins_SGraphPinStructInstance_h_1617944470(TEXT("/Script/GraphEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GraphEditor_Public_KismetPins_SGraphPinStructInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GraphEditor_Public_KismetPins_SGraphPinStructInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
