// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/CachedAnimData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimStateData;
class UScriptStruct* FCachedAnimStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimStateData>()
{
	return FCachedAnimStateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedAnimStateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This file contains a number of helper structures that can be used to process state-machine-\n * related data in C++. This includes relevancy, state weights, animation time etc.\n */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "This file contains a number of helper structures that can be used to process state-machine-\nrelated data in C++. This includes relevancy, state weights, animation time etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimStateData",
		sizeof(FCachedAnimStateData),
		alignof(FCachedAnimStateData),
		Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedAnimStateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimStateArray;
class UScriptStruct* FCachedAnimStateArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateArray, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateArray"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimStateArray.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimStateArray>()
{
	return FCachedAnimStateArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(nullptr, 0) }; // 964200709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Array of states */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Array of states" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimStateArray, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData)) }; // 964200709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimStateArray",
		sizeof(FCachedAnimStateArray),
		alignof(FCachedAnimStateArray),
		Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedAnimStateArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData;
class UScriptStruct* FCachedAnimAssetPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimAssetPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimAssetPlayerData>()
{
	return FCachedAnimAssetPlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimAssetPlayerData",
		sizeof(FCachedAnimAssetPlayerData),
		alignof(FCachedAnimAssetPlayerData),
		Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData;
class UScriptStruct* FCachedAnimRelevancyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimRelevancyData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimRelevancyData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimRelevancyData>()
{
	return FCachedAnimRelevancyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimRelevancyData",
		sizeof(FCachedAnimRelevancyData),
		alignof(FCachedAnimRelevancyData),
		Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedAnimTransitionData;
class UScriptStruct* FCachedAnimTransitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimTransitionData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimTransitionData"));
	}
	return Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedAnimTransitionData>()
{
	return FCachedAnimTransitionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromStateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromStateName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToStateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToStateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of StateMachine State is in */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of From State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of From State to Cache" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName = { "FromStateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, FromStateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Name of To State to Cache */" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of To State to Cache" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName = { "ToStateName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, ToStateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimTransitionData",
		sizeof(FCachedAnimTransitionData),
		alignof(FCachedAnimTransitionData),
		Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton, Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedAnimTransitionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics::ScriptStructInfo[] = {
		{ FCachedAnimStateData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewStructOps, TEXT("CachedAnimStateData"), &Z_Registration_Info_UScriptStruct_CachedAnimStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimStateData), 964200709U) },
		{ FCachedAnimStateArray::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewStructOps, TEXT("CachedAnimStateArray"), &Z_Registration_Info_UScriptStruct_CachedAnimStateArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimStateArray), 3676086277U) },
		{ FCachedAnimAssetPlayerData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewStructOps, TEXT("CachedAnimAssetPlayerData"), &Z_Registration_Info_UScriptStruct_CachedAnimAssetPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimAssetPlayerData), 238182640U) },
		{ FCachedAnimRelevancyData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewStructOps, TEXT("CachedAnimRelevancyData"), &Z_Registration_Info_UScriptStruct_CachedAnimRelevancyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimRelevancyData), 3389584620U) },
		{ FCachedAnimTransitionData::StaticStruct, Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewStructOps, TEXT("CachedAnimTransitionData"), &Z_Registration_Info_UScriptStruct_CachedAnimTransitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedAnimTransitionData), 579525857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_3720366757(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
