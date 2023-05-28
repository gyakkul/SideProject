// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Kismet2/Breakpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakpoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintBreakpoint();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintBreakpoint;
class UScriptStruct* FBlueprintBreakpoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintBreakpoint, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("BlueprintBreakpoint"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FBlueprintBreakpoint>()
{
	return FBlueprintBreakpoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_MetaData[];
#endif
		static void NewProp_bStepOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStepOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_WasPreviouslyDisabled_MetaData[];
#endif
		static void NewProp_bStepOnce_WasPreviouslyDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_WasPreviouslyDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_RemoveAfterHit_MetaData[];
#endif
		static void NewProp_bStepOnce_RemoveAfterHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_RemoveAfterHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintBreakpoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "// Is the breakpoint currently enabled?\n" },
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
		{ "ToolTip", "Is the breakpoint currently enabled?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FBlueprintBreakpoint*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintBreakpoint), &Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_Node_MetaData[] = {
		{ "Comment", "// Node that the breakpoint is placed on\n" },
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
		{ "ToolTip", "Node that the breakpoint is placed on" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintBreakpoint, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_MetaData[] = {
		{ "Comment", "// Is this breakpoint auto-generated, and should be removed when next hit?\n" },
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
		{ "ToolTip", "Is this breakpoint auto-generated, and should be removed when next hit?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_SetBit(void* Obj)
	{
		((FBlueprintBreakpoint*)Obj)->bStepOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce = { "bStepOnce", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintBreakpoint), &Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_SetBit(void* Obj)
	{
		((FBlueprintBreakpoint*)Obj)->bStepOnce_WasPreviouslyDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled = { "bStepOnce_WasPreviouslyDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintBreakpoint), &Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Kismet2/Breakpoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_SetBit(void* Obj)
	{
		((FBlueprintBreakpoint*)Obj)->bStepOnce_RemoveAfterHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit = { "bStepOnce_RemoveAfterHit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintBreakpoint), &Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"BlueprintBreakpoint",
		sizeof(FBlueprintBreakpoint),
		alignof(FBlueprintBreakpoint),
		Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintBreakpoint()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintBreakpoint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_Breakpoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_Breakpoint_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintBreakpoint::StaticStruct, Z_Construct_UScriptStruct_FBlueprintBreakpoint_Statics::NewStructOps, TEXT("BlueprintBreakpoint"), &Z_Registration_Info_UScriptStruct_BlueprintBreakpoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintBreakpoint), 3270532364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_Breakpoint_h_412075350(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_Breakpoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_Breakpoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
