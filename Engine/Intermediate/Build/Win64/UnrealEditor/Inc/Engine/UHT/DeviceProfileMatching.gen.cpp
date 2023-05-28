// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileMatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileMatching() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingIfCondition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructA();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructB();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructC();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructD();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedFragmentProperties();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectedFragmentProperties;
class UScriptStruct* FSelectedFragmentProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectedFragmentProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SelectedFragmentProperties"));
	}
	return Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSelectedFragmentProperties>()
{
	return FSelectedFragmentProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Fragment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectedFragmentProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag_MetaData[] = {
		{ "Comment", "// user defined 'Tag' for this fragment.\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "user defined 'Tag' for this fragment." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSelectedFragmentProperties, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment_MetaData[] = {
		{ "Comment", "// Actual name of the fragment to select\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "Actual name of the fragment to select" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSelectedFragmentProperties, Fragment), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "// whether the fragment's cvars will be applied\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "whether the fragment's cvars will be applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSelectedFragmentProperties*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSelectedFragmentProperties), &Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SelectedFragmentProperties",
		sizeof(FSelectedFragmentProperties),
		alignof(FSelectedFragmentProperties),
		Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectedFragmentProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton, Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingIfCondition;
class UScriptStruct* FDPMatchingIfCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingIfCondition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingIfCondition"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingIfCondition>()
{
	return FDPMatchingIfCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arg1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arg2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingIfCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingIfCondition, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1 = { "Arg1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingIfCondition, Arg1), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2 = { "Arg2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingIfCondition, Arg2), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DPMatchingIfCondition",
		sizeof(FDPMatchingIfCondition),
		alignof(FDPMatchingIfCondition),
		Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingIfCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase;
class UScriptStruct* FDPMatchingRulestructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructBase"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructBase>()
{
	return FDPMatchingRulestructBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IfConditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppendFragments_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppendFragments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetUserVar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SetUserVar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructBase, RuleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_Inner = { "IfConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingIfCondition, METADATA_PARAMS(nullptr, 0) }; // 3628186734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions = { "IfConditions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructBase, IfConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_MetaData)) }; // 3628186734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments = { "AppendFragments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructBase, AppendFragments), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar = { "SetUserVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructBase, SetUserVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DPMatchingRulestructBase",
		sizeof(FDPMatchingRulestructBase),
		alignof(FDPMatchingRulestructBase),
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructBase()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestructA>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructA cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructA;
class UScriptStruct* FDPMatchingRulestructA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructA, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructA"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructA>()
{
	return FDPMatchingRulestructA::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructA>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructBase, METADATA_PARAMS(nullptr, 0) }; // 1659432063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructA, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_MetaData)) }; // 1659432063
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructBase, METADATA_PARAMS(nullptr, 0) }; // 1659432063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructA, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_MetaData)) }; // 1659432063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestructA",
		sizeof(FDPMatchingRulestructA),
		alignof(FDPMatchingRulestructA),
		Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructA()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestructB>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructB cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructB;
class UScriptStruct* FDPMatchingRulestructB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructB, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructB"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructB>()
{
	return FDPMatchingRulestructB::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructB>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructA, METADATA_PARAMS(nullptr, 0) }; // 996844189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructB, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_MetaData)) }; // 996844189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructA, METADATA_PARAMS(nullptr, 0) }; // 996844189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructB, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_MetaData)) }; // 996844189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestructB",
		sizeof(FDPMatchingRulestructB),
		alignof(FDPMatchingRulestructB),
		Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructB()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestructC>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructC cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructC;
class UScriptStruct* FDPMatchingRulestructC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructC, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructC"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructC>()
{
	return FDPMatchingRulestructC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructC>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructB, METADATA_PARAMS(nullptr, 0) }; // 1923510351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructC, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_MetaData)) }; // 1923510351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructB, METADATA_PARAMS(nullptr, 0) }; // 1923510351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructC, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_MetaData)) }; // 1923510351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestructC",
		sizeof(FDPMatchingRulestructC),
		alignof(FDPMatchingRulestructC),
		Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructC()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestructD>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructD cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructD;
class UScriptStruct* FDPMatchingRulestructD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructD, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructD"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructD>()
{
	return FDPMatchingRulestructD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructD>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructC, METADATA_PARAMS(nullptr, 0) }; // 1616365761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructD, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_MetaData)) }; // 1616365761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructC, METADATA_PARAMS(nullptr, 0) }; // 1616365761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructD, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_MetaData)) }; // 1616365761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestructD",
		sizeof(FDPMatchingRulestructD),
		alignof(FDPMatchingRulestructD),
		Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructD()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestructE>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructE cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructE;
class UScriptStruct* FDPMatchingRulestructE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructE, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructE"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructE>()
{
	return FDPMatchingRulestructE::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructE>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructD, METADATA_PARAMS(nullptr, 0) }; // 1107878329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructE, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_MetaData)) }; // 1107878329
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructD, METADATA_PARAMS(nullptr, 0) }; // 1107878329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestructE, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_MetaData)) }; // 1107878329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestructE",
		sizeof(FDPMatchingRulestructE),
		alignof(FDPMatchingRulestructE),
		Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructE()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDPMatchingRulestruct>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestruct cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestruct;
class UScriptStruct* FDPMatchingRulestruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestruct"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestruct>()
{
	return FDPMatchingRulestruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestruct>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructE, METADATA_PARAMS(nullptr, 0) }; // 3811689090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestruct, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_MetaData)) }; // 3811689090
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructE, METADATA_PARAMS(nullptr, 0) }; // 3811689090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDPMatchingRulestruct, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_MetaData)) }; // 3811689090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
		&NewStructOps,
		"DPMatchingRulestruct",
		sizeof(FDPMatchingRulestruct),
		alignof(FDPMatchingRulestruct),
		Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics::ScriptStructInfo[] = {
		{ FSelectedFragmentProperties::StaticStruct, Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewStructOps, TEXT("SelectedFragmentProperties"), &Z_Registration_Info_UScriptStruct_SelectedFragmentProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectedFragmentProperties), 1813391487U) },
		{ FDPMatchingIfCondition::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewStructOps, TEXT("DPMatchingIfCondition"), &Z_Registration_Info_UScriptStruct_DPMatchingIfCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingIfCondition), 3628186734U) },
		{ FDPMatchingRulestructBase::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewStructOps, TEXT("DPMatchingRulestructBase"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructBase), 1659432063U) },
		{ FDPMatchingRulestructA::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewStructOps, TEXT("DPMatchingRulestructA"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructA), 996844189U) },
		{ FDPMatchingRulestructB::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewStructOps, TEXT("DPMatchingRulestructB"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructB), 1923510351U) },
		{ FDPMatchingRulestructC::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewStructOps, TEXT("DPMatchingRulestructC"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructC), 1616365761U) },
		{ FDPMatchingRulestructD::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewStructOps, TEXT("DPMatchingRulestructD"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructD), 1107878329U) },
		{ FDPMatchingRulestructE::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewStructOps, TEXT("DPMatchingRulestructE"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructE), 3811689090U) },
		{ FDPMatchingRulestruct::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewStructOps, TEXT("DPMatchingRulestruct"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestruct), 292402787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_1836278870(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
