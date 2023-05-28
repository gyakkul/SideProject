// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolStack() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolStack();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveToolStack;
class UScriptStruct* FInteractiveToolStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveToolStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveToolStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveToolStack, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("InteractiveToolStack"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveToolStack.OuterSingleton;
}
template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInteractiveToolStack>()
{
	return FInteractiveToolStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractiveToolStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FInteractiveToolStack represents a bundle of tools that may or may not share the same input chord\n * Should some tools share a chord the most recently used tool will be activated by the chord.\n * If no tools have been activated yet, the chord will go by order added to the stack.\n * \n * To use tool stacks, simply add a UToolStackContext to your relevant interactive tools context.\n * This can be done by calling 'AddContextObject' to the context object store of your tool context.\n * See: 'UWidgetEditorToolPaletteMode::Enter' as reference.\n */" },
		{ "ModuleRelativePath", "Public/InteractiveToolStack.h" },
		{ "ToolTip", "FInteractiveToolStack represents a bundle of tools that may or may not share the same input chord\nShould some tools share a chord the most recently used tool will be activated by the chord.\nIf no tools have been activated yet, the chord will go by order added to the stack.\n\nTo use tool stacks, simply add a UToolStackContext to your relevant interactive tools context.\nThis can be done by calling 'AddContextObject' to the context object store of your tool context.\nSee: 'UWidgetEditorToolPaletteMode::Enter' as reference." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveToolStack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"InteractiveToolStack",
		sizeof(FInteractiveToolStack),
		alignof(FInteractiveToolStack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolStack()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractiveToolStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveToolStack.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractiveToolStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_InteractiveToolStack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_InteractiveToolStack_h_Statics::ScriptStructInfo[] = {
		{ FInteractiveToolStack::StaticStruct, Z_Construct_UScriptStruct_FInteractiveToolStack_Statics::NewStructOps, TEXT("InteractiveToolStack"), &Z_Registration_Info_UScriptStruct_InteractiveToolStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveToolStack), 852889989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_InteractiveToolStack_h_1992751918(TEXT("/Script/EditorInteractiveToolsFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_InteractiveToolStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_InteractiveToolStack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
