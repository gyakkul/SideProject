// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusValidatedName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusValidatedName() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusValidatedName;
class UScriptStruct* FOptimusValidatedName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValidatedName, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusValidatedName"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusValidatedName.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusValidatedName>()
{
	return FOptimusValidatedName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusValidatedName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure containing a FName that has been validated for use as a variable or function name in HLSL code. \n * When using this as a UPROPERTY, the UI will use a property customization that validates text entry.\n */" },
		{ "ModuleRelativePath", "Public/OptimusValidatedName.h" },
		{ "ToolTip", "Structure containing a FName that has been validated for use as a variable or function name in HLSL code.\nWhen using this as a UPROPERTY, the UI will use a property customization that validates text entry." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusValidatedName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Public/OptimusValidatedName.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusValidatedName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusValidatedName",
		sizeof(FOptimusValidatedName),
		alignof(FOptimusValidatedName),
		Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton, Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusValidatedName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics::ScriptStructInfo[] = {
		{ FOptimusValidatedName::StaticStruct, Z_Construct_UScriptStruct_FOptimusValidatedName_Statics::NewStructOps, TEXT("OptimusValidatedName"), &Z_Registration_Info_UScriptStruct_OptimusValidatedName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusValidatedName), 34316713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_2165207858(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusValidatedName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
