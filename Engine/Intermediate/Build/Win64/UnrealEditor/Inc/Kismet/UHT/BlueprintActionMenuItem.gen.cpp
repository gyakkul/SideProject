// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintActionMenuItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintActionMenuItem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintActionMenuItem>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FBlueprintActionMenuItem cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem;
class UScriptStruct* FBlueprintActionMenuItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintActionMenuItem, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("BlueprintActionMenuItem"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.OuterSingleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBlueprintActionMenuItem>()
{
	return FBlueprintActionMenuItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper around a UBlueprintNodeSpawner, which takes care of specialized\n * node spawning. This class should not be sub-classed, any special handling\n * should be done inside a UBlueprintNodeSpawner subclass, which will be\n * invoked from this class (separated to divide ui and node-spawning).\n */" },
		{ "ModuleRelativePath", "Public/BlueprintActionMenuItem.h" },
		{ "ToolTip", "Wrapper around a UBlueprintNodeSpawner, which takes care of specialized\nnode spawning. This class should not be sub-classed, any special handling\nshould be done inside a UBlueprintNodeSpawner subclass, which will be\ninvoked from this class (separated to divide ui and node-spawning)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintActionMenuItem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"BlueprintActionMenuItem",
		sizeof(FBlueprintActionMenuItem),
		alignof(FBlueprintActionMenuItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintActionMenuItem()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuItem_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintActionMenuItem::StaticStruct, Z_Construct_UScriptStruct_FBlueprintActionMenuItem_Statics::NewStructOps, TEXT("BlueprintActionMenuItem"), &Z_Registration_Info_UScriptStruct_BlueprintActionMenuItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintActionMenuItem), 3546486554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuItem_h_2280286142(TEXT("/Script/Kismet"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintActionMenuItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
