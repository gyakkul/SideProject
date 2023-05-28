// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectRequest.h"
#include "GameplayTagContainer.h"
#include "MassEntityTypes.h"
#include "SmartObjectSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectRequest() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectRequestID();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectCandidateSlot();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestResult();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot;
class UScriptStruct* FSmartObjectCandidateSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("SmartObjectCandidateSlot"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FSmartObjectCandidateSlot>()
{
	return FSmartObjectCandidateSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a potential smart object slot for a MassEntity during the search\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Structure that represents a potential smart object slot for a MassEntity during the search" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectCandidateSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCandidateSlot, Result), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Result_MetaData)) }; // 4207157864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Cost_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectCandidateSlot, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Cost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewProp_Cost,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"SmartObjectCandidateSlot",
		sizeof(FSmartObjectCandidateSlot),
		alignof(FSmartObjectCandidateSlot),
		Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectCandidateSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID;
class UScriptStruct* FMassSmartObjectRequestID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectRequestID, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectRequestID"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectRequestID>()
{
	return FMassSmartObjectRequestID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Identifier associated to a request for smart object candidates. We use a 1:1 match\n * with an FMassEntityHandle since all requests are batched together using the EntitySubsystem.\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Identifier associated to a request for smart object candidates. We use a 1:1 match\nwith an FMassEntityHandle since all requests are batched together using the EntitySubsystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectRequestID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewProp_Entity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectRequestID, Entity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewProp_Entity_MetaData)) }; // 2284468209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewProp_Entity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"MassSmartObjectRequestID",
		sizeof(FMassSmartObjectRequestID),
		alignof(FMassSmartObjectRequestID),
		Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectRequestID()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots;
class UScriptStruct* FMassSmartObjectCandidateSlots::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectCandidateSlots"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectCandidateSlots>()
{
	return FMassSmartObjectCandidateSlots::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct that holds status and results of a candidate finder request\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Struct that holds status and results of a candidate finder request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectCandidateSlots>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectCandidateSlots, NumSlots), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewProp_NumSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewProp_NumSlots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewProp_NumSlots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"MassSmartObjectCandidateSlots",
		sizeof(FMassSmartObjectCandidateSlots),
		alignof(FMassSmartObjectCandidateSlots),
		Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmartObjectRequestResultFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSmartObjectRequestResultFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment;
class UScriptStruct* FMassSmartObjectRequestResultFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectRequestResultFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectRequestResultFragment>()
{
	return FMassSmartObjectRequestResultFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Candidates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Candidates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProcessed_MetaData[];
#endif
		static void NewProp_bProcessed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Fragment that holds the result of a request to find candidates.\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Fragment that holds the result of a request to find candidates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectRequestResultFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_Candidates_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_Candidates = { "Candidates", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectRequestResultFragment, Candidates), Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_Candidates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_Candidates_MetaData)) }; // 1054470490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed_SetBit(void* Obj)
	{
		((FMassSmartObjectRequestResultFragment*)Obj)->bProcessed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed = { "bProcessed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassSmartObjectRequestResultFragment), &Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_Candidates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewProp_bProcessed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSmartObjectRequestResultFragment",
		sizeof(FMassSmartObjectRequestResultFragment),
		alignof(FMassSmartObjectRequestResultFragment),
		Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmartObjectWorldLocationRequestFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSmartObjectWorldLocationRequestFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment;
class UScriptStruct* FMassSmartObjectWorldLocationRequestFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectWorldLocationRequestFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectWorldLocationRequestFragment>()
{
	return FMassSmartObjectWorldLocationRequestFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestingEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestingEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityRequirements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Fragment used to build a list potential smart objects to use. Once added to an entity\n * this will be processed by the candidates finder processor to fill a SmartObjectCandidates\n * fragment that could then be processed by the reservation processor\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Fragment used to build a list potential smart objects to use. Once added to an entity\nthis will be processed by the candidates finder processor to fill a SmartObjectCandidates\nfragment that could then be processed by the reservation processor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectWorldLocationRequestFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_SearchOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_SearchOrigin = { "SearchOrigin", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectWorldLocationRequestFragment, SearchOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_SearchOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_SearchOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_RequestingEntity = { "RequestingEntity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectWorldLocationRequestFragment, RequestingEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData)) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_UserTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_UserTags = { "UserTags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectWorldLocationRequestFragment, UserTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_UserTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_UserTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_ActivityRequirements = { "ActivityRequirements", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectWorldLocationRequestFragment, ActivityRequirements), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_SearchOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_RequestingEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_UserTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewProp_ActivityRequirements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSmartObjectWorldLocationRequestFragment",
		sizeof(FMassSmartObjectWorldLocationRequestFragment),
		alignof(FMassSmartObjectWorldLocationRequestFragment),
		Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmartObjectLaneLocationRequestFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSmartObjectLaneLocationRequestFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment;
class UScriptStruct* FMassSmartObjectLaneLocationRequestFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectLaneLocationRequestFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectLaneLocationRequestFragment>()
{
	return FMassSmartObjectLaneLocationRequestFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestingEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestingEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityRequirements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Fragment used to build a list potential smart objects to use. Once added to an entity\n * this will be processed by the candidates finder processor to fill a SmartObjectCandidates\n * fragment that could then be processed by the reservation processor\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Fragment used to build a list potential smart objects to use. Once added to an entity\nthis will be processed by the candidates finder processor to fill a SmartObjectCandidates\nfragment that could then be processed by the reservation processor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectLaneLocationRequestFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_RequestingEntity = { "RequestingEntity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectLaneLocationRequestFragment, RequestingEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_RequestingEntity_MetaData)) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_UserTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_UserTags = { "UserTags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectLaneLocationRequestFragment, UserTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_UserTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_UserTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_ActivityRequirements = { "ActivityRequirements", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmartObjectLaneLocationRequestFragment, ActivityRequirements), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_ActivityRequirements_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_RequestingEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_UserTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewProp_ActivityRequirements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSmartObjectLaneLocationRequestFragment",
		sizeof(FMassSmartObjectLaneLocationRequestFragment),
		alignof(FMassSmartObjectLaneLocationRequestFragment),
		Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmartObjectCompletedRequestTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassSmartObjectCompletedRequestTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag;
class UScriptStruct* FMassSmartObjectCompletedRequestTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("MassSmartObjectCompletedRequestTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FMassSmartObjectCompletedRequestTag>()
{
	return FMassSmartObjectCompletedRequestTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Special tag to mark processed requests\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectRequest.h" },
		{ "ToolTip", "Special tag to mark processed requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmartObjectCompletedRequestTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassSmartObjectCompletedRequestTag",
		sizeof(FMassSmartObjectCompletedRequestTag),
		alignof(FMassSmartObjectCompletedRequestTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.InnerSingleton, Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRequest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRequest_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectCandidateSlot::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectCandidateSlot_Statics::NewStructOps, TEXT("SmartObjectCandidateSlot"), &Z_Registration_Info_UScriptStruct_SmartObjectCandidateSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectCandidateSlot), 867226769U) },
		{ FMassSmartObjectRequestID::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectRequestID_Statics::NewStructOps, TEXT("MassSmartObjectRequestID"), &Z_Registration_Info_UScriptStruct_MassSmartObjectRequestID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectRequestID), 262356520U) },
		{ FMassSmartObjectCandidateSlots::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectCandidateSlots_Statics::NewStructOps, TEXT("MassSmartObjectCandidateSlots"), &Z_Registration_Info_UScriptStruct_MassSmartObjectCandidateSlots, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectCandidateSlots), 1054470490U) },
		{ FMassSmartObjectRequestResultFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectRequestResultFragment_Statics::NewStructOps, TEXT("MassSmartObjectRequestResultFragment"), &Z_Registration_Info_UScriptStruct_MassSmartObjectRequestResultFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectRequestResultFragment), 1648531570U) },
		{ FMassSmartObjectWorldLocationRequestFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectWorldLocationRequestFragment_Statics::NewStructOps, TEXT("MassSmartObjectWorldLocationRequestFragment"), &Z_Registration_Info_UScriptStruct_MassSmartObjectWorldLocationRequestFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectWorldLocationRequestFragment), 1178825698U) },
		{ FMassSmartObjectLaneLocationRequestFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectLaneLocationRequestFragment_Statics::NewStructOps, TEXT("MassSmartObjectLaneLocationRequestFragment"), &Z_Registration_Info_UScriptStruct_MassSmartObjectLaneLocationRequestFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectLaneLocationRequestFragment), 4063878235U) },
		{ FMassSmartObjectCompletedRequestTag::StaticStruct, Z_Construct_UScriptStruct_FMassSmartObjectCompletedRequestTag_Statics::NewStructOps, TEXT("MassSmartObjectCompletedRequestTag"), &Z_Registration_Info_UScriptStruct_MassSmartObjectCompletedRequestTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmartObjectCompletedRequestTag), 3579867442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRequest_h_163888675(TEXT("/Script/MassSmartObjects"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRequest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
