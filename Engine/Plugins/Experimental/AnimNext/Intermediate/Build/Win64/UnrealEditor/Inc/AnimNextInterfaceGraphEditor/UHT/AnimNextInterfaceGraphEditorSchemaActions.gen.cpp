// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimNextInterfaceGraphEditorSchemaActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterfaceGraphEditorSchemaActions() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction();
	ANIMNEXTINTERFACEGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraphEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextInterfaceGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAnimNextInterfaceGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction;
class UScriptStruct* FAnimNextInterfaceGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraphEditor(), TEXT("AnimNextInterfaceGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPHEDITOR_API UScriptStruct* StaticStruct<FAnimNextInterfaceGraphSchemaAction>()
{
	return FAnimNextInterfaceGraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextInterfaceGraphEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceGraphSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AnimNextInterfaceGraphSchemaAction",
		sizeof(FAnimNextInterfaceGraphSchemaAction),
		alignof(FAnimNextInterfaceGraphSchemaAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNextInterfaceGraphSchemaAction_RigUnit>() == std::is_polymorphic<FAnimNextInterfaceGraphSchemaAction>(), "USTRUCT FAnimNextInterfaceGraphSchemaAction_RigUnit cannot be polymorphic unless super FAnimNextInterfaceGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit;
class UScriptStruct* FAnimNextInterfaceGraphSchemaAction_RigUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraphEditor(), TEXT("AnimNextInterfaceGraphSchemaAction_RigUnit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPHEDITOR_API UScriptStruct* StaticStruct<FAnimNextInterfaceGraphSchemaAction_RigUnit>()
{
	return FAnimNextInterfaceGraphSchemaAction_RigUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextInterfaceGraphEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceGraphSchemaAction_RigUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraphEditor,
		Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction,
		&NewStructOps,
		"AnimNextInterfaceGraphSchemaAction_RigUnit",
		sizeof(FAnimNextInterfaceGraphSchemaAction_RigUnit),
		alignof(FAnimNextInterfaceGraphSchemaAction_RigUnit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphEditor_Private_AnimNextInterfaceGraphEditorSchemaActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphEditor_Private_AnimNextInterfaceGraphEditorSchemaActions_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextInterfaceGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_Statics::NewStructOps, TEXT("AnimNextInterfaceGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceGraphSchemaAction), 3390457508U) },
		{ FAnimNextInterfaceGraphSchemaAction_RigUnit::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceGraphSchemaAction_RigUnit_Statics::NewStructOps, TEXT("AnimNextInterfaceGraphSchemaAction_RigUnit"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceGraphSchemaAction_RigUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceGraphSchemaAction_RigUnit), 3737689452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphEditor_Private_AnimNextInterfaceGraphEditorSchemaActions_h_1624852926(TEXT("/Script/AnimNextInterfaceGraphEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphEditor_Private_AnimNextInterfaceGraphEditorSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphEditor_Private_AnimNextInterfaceGraphEditorSchemaActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
