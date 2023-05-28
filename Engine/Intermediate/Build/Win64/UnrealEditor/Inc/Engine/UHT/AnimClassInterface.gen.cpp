// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimClassInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBlueprintFunction;
class UScriptStruct* FAnimBlueprintFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintFunction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintFunction>()
{
	return FAnimBlueprintFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputPoseNodeIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPoseNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImplemented_MetaData[];
#endif
		static void NewProp_bImplemented_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImplemented;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the input and output of an anim blueprint 'function' */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Describes the input and output of an anim blueprint 'function'" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The name of the function" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** The group of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The group of the function" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunction, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData[] = {
		{ "Comment", "/** Index of the output node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Index of the output node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex = { "OutputPoseNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunction, OutputPoseNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** The names of the input poses */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The names of the input poses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData[] = {
		{ "Comment", "/** Indices of the input nodes */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Indices of the input nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData[] = {
		{ "Comment", "/** Whether this function is actually implemented by this class - it could just be a stub */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Whether this function is actually implemented by this class - it could just be a stub" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit(void* Obj)
	{
		((FAnimBlueprintFunction*)Obj)->bImplemented = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented = { "bImplemented", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimBlueprintFunction), &Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintFunction",
		sizeof(FAnimBlueprintFunction),
		alignof(FAnimBlueprintFunction),
		Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimBlueprintFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedPoseIndices;
class UScriptStruct* FCachedPoseIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPoseIndices, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedPoseIndices"));
	}
	return Z_Registration_Info_UScriptStruct_CachedPoseIndices.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedPoseIndices>()
{
	return FCachedPoseIndices::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseNodeIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper struct as we dont support nested containers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Wrapper struct as we dont support nested containers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPoseIndices>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedPoseIndices, OrderedSavedPoseNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedPoseIndices",
		sizeof(FCachedPoseIndices),
		alignof(FCachedPoseIndices),
		Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedPoseIndices.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation;
class UScriptStruct* FGraphAssetPlayerInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GraphAssetPlayerInformation"));
	}
	return Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGraphAssetPlayerInformation>()
{
	return FGraphAssetPlayerInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Contains indices for any Asset Player nodes found for a specific Name Anim Graph (only and specifically harvested for Anim Graph Layers and Implemented Anim Layer Graphs)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphAssetPlayerInformation>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGraphAssetPlayerInformation, PlayerNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewProp_PlayerNodeIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GraphAssetPlayerInformation",
		sizeof(FGraphAssetPlayerInformation),
		alignof(FGraphAssetPlayerInformation),
		Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphAssetPlayerInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions;
class UScriptStruct* FAnimGraphBlendOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGraphBlendOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGraphBlendOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGraphBlendOptions>()
{
	return FAnimGraphBlendOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendInProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendOutProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Blending options for animation graphs in Linked Animation Blueprints. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Blending options for animation graphs in Linked Animation Blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGraphBlendOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\n\x09* To blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph in using Inertialization. Specify -1.0 to defer to the BlendOutTime of the previous graph.\nTo blend this graph in you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Optional blend profile to use when blending this graph in (if BlendInTime > 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Optional blend profile to use when blending this graph in (if BlendInTime > 0)" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile = { "BlendInProfile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendInProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\n\x09* To blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Time to blend this graph out using Inertialization. Specify -1.0 to defer to the BlendInTime of the next graph.\nTo blend this graph out you must place an Inertialization node after the Linked Anim Graph node or Linked Anim Layer node that uses this graph." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/**\n\x09* Optional blend profile to use when blending this graph out (if BlendOutTime > 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Optional blend profile to use when blending this graph out (if BlendOutTime > 0)" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile = { "BlendOutProfile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGraphBlendOptions, BlendOutProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendInProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewProp_BlendOutProfile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGraphBlendOptions",
		sizeof(FAnimGraphBlendOptions),
		alignof(FAnimGraphBlendOptions),
		Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton, Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions.InnerSingleton;
	}
	void UAnimClassInterface::StaticRegisterNativesUAnimClassInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimClassInterface);
	UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister()
	{
		return UAnimClassInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimClassInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimClassInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimClassInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimClassInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams = {
		&UAnimClassInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimClassInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton, Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimClassInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimClassInterface>()
	{
		return UAnimClassInterface::StaticClass();
	}
	UAnimClassInterface::UAnimClassInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassInterface);
	UAnimClassInterface::~UAnimClassInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ScriptStructInfo[] = {
		{ FAnimBlueprintFunction::StaticStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps, TEXT("AnimBlueprintFunction"), &Z_Registration_Info_UScriptStruct_AnimBlueprintFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBlueprintFunction), 2510542410U) },
		{ FCachedPoseIndices::StaticStruct, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps, TEXT("CachedPoseIndices"), &Z_Registration_Info_UScriptStruct_CachedPoseIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedPoseIndices), 2761889948U) },
		{ FGraphAssetPlayerInformation::StaticStruct, Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics::NewStructOps, TEXT("GraphAssetPlayerInformation"), &Z_Registration_Info_UScriptStruct_GraphAssetPlayerInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphAssetPlayerInformation), 2243653460U) },
		{ FAnimGraphBlendOptions::StaticStruct, Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics::NewStructOps, TEXT("AnimGraphBlendOptions"), &Z_Registration_Info_UScriptStruct_AnimGraphBlendOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGraphBlendOptions), 1611955230U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimClassInterface, UAnimClassInterface::StaticClass, TEXT("UAnimClassInterface"), &Z_Registration_Info_UClass_UAnimClassInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimClassInterface), 1984927856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_2401376015(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
