// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintDragDropMenuItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDragDropMenuItem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintDragDropMenuItem>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FBlueprintDragDropMenuItem cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem;
class UScriptStruct* FBlueprintDragDropMenuItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("BlueprintDragDropMenuItem"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.OuterSingleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBlueprintDragDropMenuItem>()
{
	return FBlueprintDragDropMenuItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * At certain times we want a single menu entry that represents a set of \n * UBlueprintNodeSpawners (generally when all those UBlueprintNodeSpawners wrap \n * the same UField). We do this to keep the menu less jumbled, and instead\n * use the drag/drop action to present a sub-menu to the user (so they can pick \n * the the node type that they want). We do this with both delegates and \n * variable nodes (where the user can pick a getter vs. a setter, etc.).\n *\n * This class represents those \"consolidated\" actions, and essentially serves \n * as a FDragDropOperation spawner. It wraps a single UBlueprintNodeSpawner (any\n * one of the set that it is supposed to represent), that it uses to determine\n * the proper FDragDropOperation.\n */" },
		{ "ModuleRelativePath", "Public/BlueprintDragDropMenuItem.h" },
		{ "ToolTip", "At certain times we want a single menu entry that represents a set of\nUBlueprintNodeSpawners (generally when all those UBlueprintNodeSpawners wrap\nthe same UField). We do this to keep the menu less jumbled, and instead\nuse the drag/drop action to present a sub-menu to the user (so they can pick\nthe the node type that they want). We do this with both delegates and\nvariable nodes (where the user can pick a getter vs. a setter, etc.).\n\nThis class represents those \"consolidated\" actions, and essentially serves\nas a FDragDropOperation spawner. It wraps a single UBlueprintNodeSpawner (any\none of the set that it is supposed to represent), that it uses to determine\nthe proper FDragDropOperation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDragDropMenuItem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BlueprintDragDropMenuItem",
		sizeof(FBlueprintDragDropMenuItem),
		alignof(FBlueprintDragDropMenuItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintDragDropMenuItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintDragDropMenuItem_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintDragDropMenuItem::StaticStruct, Z_Construct_UScriptStruct_FBlueprintDragDropMenuItem_Statics::NewStructOps, TEXT("BlueprintDragDropMenuItem"), &Z_Registration_Info_UScriptStruct_BlueprintDragDropMenuItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintDragDropMenuItem), 362918870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintDragDropMenuItem_h_1401731505(TEXT("/Script/Kismet"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintDragDropMenuItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintDragDropMenuItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
