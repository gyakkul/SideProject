// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerCurveReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerCurveReference() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerCurveReference();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MLDeformerCurveReference;
class UScriptStruct* FMLDeformerCurveReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMLDeformerCurveReference, (UObject*)Z_Construct_UPackage__Script_MLDeformerFramework(), TEXT("MLDeformerCurveReference"));
	}
	return Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.OuterSingleton;
}
template<> MLDEFORMERFRAMEWORK_API UScriptStruct* StaticStruct<FMLDeformerCurveReference>()
{
	return FMLDeformerCurveReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A reference to a curve implemented as a name. */" },
		{ "ModuleRelativePath", "Public/MLDeformerCurveReference.h" },
		{ "ToolTip", "A reference to a curve implemented as a name." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMLDeformerCurveReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "AnimCurveReference" },
		{ "Comment", "/** The name of the curve. */" },
		{ "ModuleRelativePath", "Public/MLDeformerCurveReference.h" },
		{ "ToolTip", "The name of the curve." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMLDeformerCurveReference, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewProp_CurveName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
		nullptr,
		&NewStructOps,
		"MLDeformerCurveReference",
		sizeof(FMLDeformerCurveReference),
		alignof(FMLDeformerCurveReference),
		Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerCurveReference()
	{
		if (!Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.InnerSingleton, Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MLDeformerCurveReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerCurveReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerCurveReference_h_Statics::ScriptStructInfo[] = {
		{ FMLDeformerCurveReference::StaticStruct, Z_Construct_UScriptStruct_FMLDeformerCurveReference_Statics::NewStructOps, TEXT("MLDeformerCurveReference"), &Z_Registration_Info_UScriptStruct_MLDeformerCurveReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMLDeformerCurveReference), 4012679004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerCurveReference_h_3886451140(TEXT("/Script/MLDeformerFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerCurveReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerCurveReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
