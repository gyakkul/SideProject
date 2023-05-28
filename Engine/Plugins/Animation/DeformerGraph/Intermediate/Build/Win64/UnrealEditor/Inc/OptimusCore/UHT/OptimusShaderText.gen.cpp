// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusShaderText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusShaderText() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusShaderText;
class UScriptStruct* FOptimusShaderText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusShaderText, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusShaderText"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusShaderText.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusShaderText>()
{
	return FOptimusShaderText::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusShaderText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Declarations_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Declarations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShaderText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusShaderText_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusShaderText>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations_MetaData[] = {
		{ "Category", "ShaderText" },
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations = { "Declarations", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusShaderText, Declarations), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText_MetaData[] = {
		{ "Category", "ShaderText" },
		{ "ModuleRelativePath", "Public/OptimusShaderText.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText = { "ShaderText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusShaderText, ShaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_Declarations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewProp_ShaderText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusShaderText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusShaderText",
		sizeof(FOptimusShaderText),
		alignof(FOptimusShaderText),
		Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusShaderText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton, Z_Construct_UScriptStruct_FOptimusShaderText_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusShaderText.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics::ScriptStructInfo[] = {
		{ FOptimusShaderText::StaticStruct, Z_Construct_UScriptStruct_FOptimusShaderText_Statics::NewStructOps, TEXT("OptimusShaderText"), &Z_Registration_Info_UScriptStruct_OptimusShaderText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusShaderText), 1903269153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_1188093613(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusShaderText_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
