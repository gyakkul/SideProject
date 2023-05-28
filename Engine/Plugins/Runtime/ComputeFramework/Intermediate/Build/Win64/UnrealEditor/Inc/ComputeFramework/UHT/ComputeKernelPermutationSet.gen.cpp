// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeKernelPermutationSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelPermutationSet() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinition();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationBool();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool;
class UScriptStruct* FComputeKernelPermutationBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationBool, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationBool"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationBool>()
{
	return FComputeKernelPermutationBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelPermutationBool, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FComputeKernelPermutationBool*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComputeKernelPermutationBool), &Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeKernelPermutationBool",
		sizeof(FComputeKernelPermutationBool),
		alignof(FComputeKernelPermutationBool),
		Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationBool()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet;
class UScriptStruct* FComputeKernelPermutationSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationSet, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelPermutationSet"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelPermutationSet>()
{
	return FComputeKernelPermutationSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BooleanOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelPermutationSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_Inner = { "BooleanOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComputeKernelPermutationBool, METADATA_PARAMS(nullptr, 0) }; // 4027891741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions = { "BooleanOptions", nullptr, (EPropertyFlags)0x0010000000010041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelPermutationSet, BooleanOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_MetaData)) }; // 4027891741
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewProp_BooleanOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeKernelPermutationSet",
		sizeof(FComputeKernelPermutationSet),
		alignof(FComputeKernelPermutationSet),
		Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelDefinition;
class UScriptStruct* FComputeKernelDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelDefinition, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelDefinition>()
{
	return FComputeKernelDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Define_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Define;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelDefinition, Symbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define_MetaData[] = {
		{ "Category", "Kernel" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define = { "Define", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelDefinition, Define), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Symbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewProp_Define,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeKernelDefinition",
		sizeof(FComputeKernelDefinition),
		alignof(FComputeKernelDefinition),
		Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeKernelDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet;
class UScriptStruct* FComputeKernelDefinitionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeKernelDefinitionSet"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeKernelDefinitionSet>()
{
	return FComputeKernelDefinitionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Defines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Defines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeKernelDefinitionSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_Inner = { "Defines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComputeKernelDefinition, METADATA_PARAMS(nullptr, 0) }; // 1759192532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_MetaData[] = {
		{ "Category", "Permutation Options" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelPermutationSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines = { "Defines", nullptr, (EPropertyFlags)0x0010000000010041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeKernelDefinitionSet, Defines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_MetaData)) }; // 1759192532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewProp_Defines,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeKernelDefinitionSet",
		sizeof(FComputeKernelDefinitionSet),
		alignof(FComputeKernelDefinitionSet),
		Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton, Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics::ScriptStructInfo[] = {
		{ FComputeKernelPermutationBool::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationBool_Statics::NewStructOps, TEXT("ComputeKernelPermutationBool"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationBool), 4027891741U) },
		{ FComputeKernelPermutationSet::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelPermutationSet_Statics::NewStructOps, TEXT("ComputeKernelPermutationSet"), &Z_Registration_Info_UScriptStruct_ComputeKernelPermutationSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelPermutationSet), 1233773543U) },
		{ FComputeKernelDefinition::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelDefinition_Statics::NewStructOps, TEXT("ComputeKernelDefinition"), &Z_Registration_Info_UScriptStruct_ComputeKernelDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelDefinition), 1759192532U) },
		{ FComputeKernelDefinitionSet::StaticStruct, Z_Construct_UScriptStruct_FComputeKernelDefinitionSet_Statics::NewStructOps, TEXT("ComputeKernelDefinitionSet"), &Z_Registration_Info_UScriptStruct_ComputeKernelDefinitionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeKernelDefinitionSet), 267567538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_3752348715(TEXT("/Script/ComputeFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelPermutationSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
