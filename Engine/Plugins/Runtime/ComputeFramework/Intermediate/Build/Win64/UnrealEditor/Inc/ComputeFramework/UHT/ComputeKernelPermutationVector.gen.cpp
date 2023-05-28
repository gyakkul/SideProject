// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeKernelPermutationVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationVector() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationVector();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector;
class UScriptStruct* FComputeKernelPermutationVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationVector, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationVector"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationVector>()
{
	return FComputeKernelPermutationVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Permutations_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Permutations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permutations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Permutations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationVector>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_ValueProp = { "Permutations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_Key_KeyProp = { "Permutations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_MetaData[] = {
		{ "Comment", "/** Map from permutation define name to packed FPermutaionBits value. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
		{ "ToolTip", "Map from permutation define name to packed FPermutaionBits value." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations = { "Permutations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelPermutationVector, Permutations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount_MetaData[] = {
		{ "Comment", "/** Number of permutation bits allocated. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationVector.h" },
		{ "ToolTip", "Number of permutation bits allocated." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelPermutationVector, BitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_Permutations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeKernelPermutationVector",
		sizeof(FComputeKernelPermutationVector),
		alignof(FComputeKernelPermutationVector),
		Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationVector()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics::ScriptStructInfo[] = {
		{ FComputeKernelPermutationVector::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationVector_Statics::NewStructOps, TEXT("ComputeKernelPermutationVector"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationVector), 615418719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_1402995823(TEXT("/Script/ComputeFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationVector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
