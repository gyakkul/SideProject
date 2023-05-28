// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequenceObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequenceObjectReference() {}
// Cross Module References
	ACTORSEQUENCE_API UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType;
	static UEnum* EActorSequenceObjectReferenceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType, (UObject*)Z_Construct_UPackage__Script_ActorSequence(), TEXT("EActorSequenceObjectReferenceType"));
		}
		return Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton;
	}
	template<> ACTORSEQUENCE_API UEnum* StaticEnum<EActorSequenceObjectReferenceType>()
	{
		return EActorSequenceObjectReferenceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enumerators[] = {
		{ "EActorSequenceObjectReferenceType::ContextActor", (int64)EActorSequenceObjectReferenceType::ContextActor },
		{ "EActorSequenceObjectReferenceType::ExternalActor", (int64)EActorSequenceObjectReferenceType::ExternalActor },
		{ "EActorSequenceObjectReferenceType::Component", (int64)EActorSequenceObjectReferenceType::Component },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enum_MetaDataParams[] = {
		{ "Component.Comment", "/** The reference relates to a component */" },
		{ "Component.Name", "EActorSequenceObjectReferenceType::Component" },
		{ "Component.ToolTip", "The reference relates to a component" },
		{ "ContextActor.Comment", "/** The reference relates to the context actor */" },
		{ "ContextActor.Name", "EActorSequenceObjectReferenceType::ContextActor" },
		{ "ContextActor.ToolTip", "The reference relates to the context actor" },
		{ "ExternalActor.Comment", "/** The reference relates to an actor outside of the context actor actor */" },
		{ "ExternalActor.Name", "EActorSequenceObjectReferenceType::ExternalActor" },
		{ "ExternalActor.ToolTip", "The reference relates to an actor outside of the context actor actor" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		"EActorSequenceObjectReferenceType",
		"EActorSequenceObjectReferenceType",
		Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType()
	{
		if (!Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton, Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference;
class UScriptStruct* FActorSequenceObjectReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReference, (UObject*)Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReference"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.OuterSingleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReference>()
{
	return FActorSequenceObjectReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An external reference to an level sequence object, resolvable through an arbitrary context.\n */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReference>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** The type of the binding */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "The type of the binding" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReference, Type), Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_MetaData)) }; // 2547313720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData[] = {
		{ "Comment", "/** The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReference, ActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData[] = {
		{ "Comment", "/** Path to the component from its owner actor */" },
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
		{ "ToolTip", "Path to the component from its owner actor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent = { "PathToComponent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReference, PathToComponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_ActorId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewProp_PathToComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReference",
		sizeof(FActorSequenceObjectReference),
		alignof(FActorSequenceObjectReference),
		Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReference()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.InnerSingleton, Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences;
class UScriptStruct* FActorSequenceObjectReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferences, (UObject*)Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferences"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.OuterSingleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReferences>()
{
	return FActorSequenceObjectReferences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReferences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorSequenceObjectReference, METADATA_PARAMS(nullptr, 0) }; // 1164010225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReferences, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_MetaData)) }; // 1164010225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReferences",
		sizeof(FActorSequenceObjectReferences),
		alignof(FActorSequenceObjectReferences),
		Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferences()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.InnerSingleton, Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap;
class UScriptStruct* FActorSequenceObjectReferenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, (UObject*)Z_Construct_UPackage__Script_ActorSequence(), TEXT("ActorSequenceObjectReferenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.OuterSingleton;
}
template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<FActorSequenceObjectReferenceMap>()
{
	return FActorSequenceObjectReferenceMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_References_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_References;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSequenceObjectReferenceMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner = { "BindingIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds = { "BindingIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReferenceMap, BindingIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorSequenceObjectReferences, METADATA_PARAMS(nullptr, 0) }; // 3737147176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequenceObjectReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSequenceObjectReferenceMap, References), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_MetaData)) }; // 3737147176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_BindingIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewProp_References,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
		nullptr,
		&NewStructOps,
		"ActorSequenceObjectReferenceMap",
		sizeof(FActorSequenceObjectReferenceMap),
		alignof(FActorSequenceObjectReferenceMap),
		Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.InnerSingleton, Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::EnumInfo[] = {
		{ EActorSequenceObjectReferenceType_StaticEnum, TEXT("EActorSequenceObjectReferenceType"), &Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2547313720U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::ScriptStructInfo[] = {
		{ FActorSequenceObjectReference::StaticStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewStructOps, TEXT("ActorSequenceObjectReference"), &Z_Registration_Info_UScriptStruct_ActorSequenceObjectReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSequenceObjectReference), 1164010225U) },
		{ FActorSequenceObjectReferences::StaticStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewStructOps, TEXT("ActorSequenceObjectReferences"), &Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSequenceObjectReferences), 3737147176U) },
		{ FActorSequenceObjectReferenceMap::StaticStruct, Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewStructOps, TEXT("ActorSequenceObjectReferenceMap"), &Z_Registration_Info_UScriptStruct_ActorSequenceObjectReferenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSequenceObjectReferenceMap), 3127329772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_2873216618(TEXT("/Script/ActorSequence"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
