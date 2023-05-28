// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionCaller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionCaller() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionCaller;
class UScriptStruct* FFunctionCaller::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionCaller.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionCaller.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionCaller, (UObject*)Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("FunctionCaller"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionCaller.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<FFunctionCaller>()
{
	return FFunctionCaller::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFunctionCaller_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionEntry_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FunctionEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DisplayOrder;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionCaller>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The function that should be called to invoke this event.\n\x09 * Functions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
		{ "ToolTip", "The function that should be called to invoke this event.\nFunctions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionCaller, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData[] = {
		{ "Comment", "/** Weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor. */" },
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
		{ "ToolTip", "Weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry = { "FunctionEntry", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionCaller, FunctionEntry), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/FunctionCaller.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionCaller, DisplayOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_FunctionEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewProp_DisplayOrder,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionCaller_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
		nullptr,
		&NewStructOps,
		"FunctionCaller",
		sizeof(FFunctionCaller),
		alignof(FFunctionCaller),
		Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionCaller_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionCaller()
	{
		if (!Z_Registration_Info_UScriptStruct_FunctionCaller.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionCaller.InnerSingleton, Z_Construct_UScriptStruct_FFunctionCaller_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FunctionCaller.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h_Statics::ScriptStructInfo[] = {
		{ FFunctionCaller::StaticStruct, Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewStructOps, TEXT("FunctionCaller"), &Z_Registration_Info_UScriptStruct_FunctionCaller, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionCaller), 3936284012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h_31241308(TEXT("/Script/VariantManagerContent"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
