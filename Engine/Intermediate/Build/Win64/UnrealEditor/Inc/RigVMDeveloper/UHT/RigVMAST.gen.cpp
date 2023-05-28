// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCompiler/RigVMAST.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMAST() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMParserASTSettings();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMParserASTSettings;
class UScriptStruct* FRigVMParserASTSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMParserASTSettings, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMParserASTSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMParserASTSettings>()
{
	return FRigVMParserASTSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFoldAssignments_MetaData[];
#endif
		static void NewProp_bFoldAssignments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoldAssignments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFoldLiterals_MetaData[];
#endif
		static void NewProp_bFoldLiterals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoldLiterals;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinksToSkip_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinksToSkip_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinksToSkip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContextStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExecuteContextStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The settings to apply during the parse of the abstract syntax tree.\n * The folding settings can affect the performance of the parse dramatically.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMAST.h" },
		{ "ToolTip", "* The settings to apply during the parse of the abstract syntax tree.\n* The folding settings can affect the performance of the parse dramatically." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMParserASTSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments_MetaData[] = {
		{ "Category", "AST" },
		{ "Comment", "// fold assignments / copies\n" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMAST.h" },
		{ "ToolTip", "fold assignments / copies" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments_SetBit(void* Obj)
	{
		((FRigVMParserASTSettings*)Obj)->bFoldAssignments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments = { "bFoldAssignments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMParserASTSettings), &Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals_MetaData[] = {
		{ "Category", "AST" },
		{ "Comment", "// fold literals and share memory\n" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMAST.h" },
		{ "ToolTip", "fold literals and share memory" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals_SetBit(void* Obj)
	{
		((FRigVMParserASTSettings*)Obj)->bFoldLiterals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals = { "bFoldLiterals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMParserASTSettings), &Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip_Inner = { "LinksToSkip", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMLink_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip_MetaData[] = {
		{ "Comment", "// links to be ignored during the parse\n" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMAST.h" },
		{ "ToolTip", "links to be ignored during the parse" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip = { "LinksToSkip", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParserASTSettings, LinksToSkip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_ExecuteContextStruct_MetaData[] = {
		{ "Category", "AST" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMAST.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_ExecuteContextStruct = { "ExecuteContextStruct", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParserASTSettings, ExecuteContextStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_ExecuteContextStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_ExecuteContextStruct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldAssignments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_bFoldLiterals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_LinksToSkip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewProp_ExecuteContextStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMParserASTSettings",
		sizeof(FRigVMParserASTSettings),
		alignof(FRigVMParserASTSettings),
		Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMParserASTSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMParserASTSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMAST_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMAST_h_Statics::ScriptStructInfo[] = {
		{ FRigVMParserASTSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMParserASTSettings_Statics::NewStructOps, TEXT("RigVMParserASTSettings"), &Z_Registration_Info_UScriptStruct_RigVMParserASTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMParserASTSettings), 3727232090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMAST_h_3966609520(TEXT("/Script/RigVMDeveloper"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMAST_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMAST_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
