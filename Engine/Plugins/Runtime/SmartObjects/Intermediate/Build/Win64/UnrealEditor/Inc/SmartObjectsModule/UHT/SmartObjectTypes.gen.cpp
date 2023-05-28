// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectEventData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotIndex();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotReference();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy;
	static UEnum* ESmartObjectTagMergingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectTagMergingPolicy"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectTagMergingPolicy>()
	{
		return ESmartObjectTagMergingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators[] = {
		{ "ESmartObjectTagMergingPolicy::Combine", (int64)ESmartObjectTagMergingPolicy::Combine },
		{ "ESmartObjectTagMergingPolicy::Override", (int64)ESmartObjectTagMergingPolicy::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Combine.Comment", "/** Tags are combined (parent object and slot) and TagQuery from the request will be run against the combined list. */" },
		{ "Combine.Name", "ESmartObjectTagMergingPolicy::Combine" },
		{ "Combine.ToolTip", "Tags are combined (parent object and slot) and TagQuery from the request will be run against the combined list." },
		{ "Comment", "/** Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "Override.Comment", "/** Tags in slot (if any) will be used instead of the parent object Tags when running the TagQuery from a request. Empty Tags on a slot indicates no override. */" },
		{ "Override.Name", "ESmartObjectTagMergingPolicy::Override" },
		{ "Override.ToolTip", "Tags in slot (if any) will be used instead of the parent object Tags when running the TagQuery from a request. Empty Tags on a slot indicates no override." },
		{ "ToolTip", "Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectTagMergingPolicy",
		"ESmartObjectTagMergingPolicy",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy;
	static UEnum* ESmartObjectTagFilteringPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectTagFilteringPolicy"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectTagFilteringPolicy>()
	{
		return ESmartObjectTagFilteringPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators[] = {
		{ "ESmartObjectTagFilteringPolicy::NoFilter", (int64)ESmartObjectTagFilteringPolicy::NoFilter },
		{ "ESmartObjectTagFilteringPolicy::Combine", (int64)ESmartObjectTagFilteringPolicy::Combine },
		{ "ESmartObjectTagFilteringPolicy::Override", (int64)ESmartObjectTagFilteringPolicy::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Combine.Comment", "/** Both TagQueries (parent object and slot) will be applied to the Tags provided by a request. */" },
		{ "Combine.Name", "ESmartObjectTagFilteringPolicy::Combine" },
		{ "Combine.ToolTip", "Both TagQueries (parent object and slot) will be applied to the Tags provided by a request." },
		{ "Comment", "/** Indicates how TagQueries from slots and parent object will be processed against Tags from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "NoFilter.Comment", "/** TagQueries in the object and slot definitions are not used by the framework to filter results. Users can access them and perform its own filtering. */" },
		{ "NoFilter.Name", "ESmartObjectTagFilteringPolicy::NoFilter" },
		{ "NoFilter.ToolTip", "TagQueries in the object and slot definitions are not used by the framework to filter results. Users can access them and perform its own filtering." },
		{ "Override.Comment", "/** TagQuery in slot (if any) will be used instead of the parent object TagQuery to run against the Tags provided by a request. EmptyTagQuery on a slot indicates no override. */" },
		{ "Override.Name", "ESmartObjectTagFilteringPolicy::Override" },
		{ "Override.ToolTip", "TagQuery in slot (if any) will be used instead of the parent object TagQuery to run against the Tags provided by a request. EmptyTagQuery on a slot indicates no override." },
		{ "ToolTip", "Indicates how TagQueries from slots and parent object will be processed against Tags from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectTagFilteringPolicy",
		"ESmartObjectTagFilteringPolicy",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectUserHandle;
class UScriptStruct* FSmartObjectUserHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectUserHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectUserHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectUserHandle>()
{
	return FSmartObjectUserHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Handle to a smartobject user.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to a smartobject user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectUserHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectUserHandle, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectUserHandle",
		sizeof(FSmartObjectUserHandle),
		alignof(FSmartObjectUserHandle),
		Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectHandle;
class UScriptStruct* FSmartObjectHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectHandle>()
{
	return FSmartObjectHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to a registered smartobject.\n * Internal IDs are assigned in editor by the collection and then serialized for runtime.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to a registered smartobject.\nInternal IDs are assigned in editor by the collection and then serialized for runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectHandle, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectHandle",
		sizeof(FSmartObjectHandle),
		alignof(FSmartObjectHandle),
		Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle;
class UScriptStruct* FSmartObjectSlotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotHandle>()
{
	return FSmartObjectSlotHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct used to identify a runtime slot instance\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Struct used to identify a runtime slot instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotHandle",
		sizeof(FSmartObjectSlotHandle),
		alignof(FSmartObjectSlotHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData;
class UScriptStruct* FSmartObjectSlotDefinitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotDefinitionData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotDefinitionData>()
{
	return FSmartObjectSlotDefinitionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store custom definition data within the main slot definition\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store custom definition data within the main slot definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotDefinitionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotDefinitionData",
		sizeof(FSmartObjectSlotDefinitionData),
		alignof(FSmartObjectSlotDefinitionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectSlotStateData>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSmartObjectSlotStateData cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData;
class UScriptStruct* FSmartObjectSlotStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotStateData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotStateData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotStateData>()
{
	return FSmartObjectSlotStateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store custom state data associated to a slot\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store custom state data associated to a slot" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotStateData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"SmartObjectSlotStateData",
		sizeof(FSmartObjectSlotStateData),
		alignof(FSmartObjectSlotStateData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData;
class UScriptStruct* FSmartObjectSpatialEntryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSpatialEntryData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSpatialEntryData>()
{
	return FSmartObjectSpatialEntryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store some data associated to a specific entry in the spatial representation structure\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store some data associated to a specific entry in the spatial representation structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSpatialEntryData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSpatialEntryData",
		sizeof(FSmartObjectSpatialEntryData),
		alignof(FSmartObjectSpatialEntryData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton;
	}
	void USmartObjectSpacePartition::StaticRegisterNativesUSmartObjectSpacePartition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSpacePartition);
	UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister()
	{
		return USmartObjectSpacePartition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSpacePartition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSpacePartition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for space partitioning structure that can be used to store smart object locations\n */" },
		{ "IncludePath", "SmartObjectTypes.h" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Base class for space partitioning structure that can be used to store smart object locations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSpacePartition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSpacePartition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSpacePartition_Statics::ClassParams = {
		&USmartObjectSpacePartition::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectSpacePartition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton, Z_Construct_UClass_USmartObjectSpacePartition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSpacePartition>()
	{
		return USmartObjectSpacePartition::StaticClass();
	}
	USmartObjectSpacePartition::USmartObjectSpacePartition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSpacePartition);
	USmartObjectSpacePartition::~USmartObjectSpacePartition() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex;
class UScriptStruct* FSmartObjectSlotIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotIndex, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotIndex"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotIndex>()
{
	return FSmartObjectSlotIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper struct to wrap basic functionalities to store the index of a slot in a SmartObject definition\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Helper struct to wrap basic functionalities to store the index of a slot in a SmartObject definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotIndex",
		sizeof(FSmartObjectSlotIndex),
		alignof(FSmartObjectSlotIndex),
		Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotReference;
class UScriptStruct* FSmartObjectSlotReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotReference, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotReference"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotReference>()
{
	return FSmartObjectSlotReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Reference to a specific Smart Object slot in a Smart Object Definition.\n * When placed on a slot definition data, the Index is resolved automatically when changed, on load and save. \n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Reference to a specific Smart Object slot in a Smart Object Definition.\nWhen placed on a slot definition data, the Index is resolved automatically when changed, on load and save." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotReference, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotReference, SlotID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotReference",
		sizeof(FSmartObjectSlotReference),
		alignof(FSmartObjectSlotReference),
		Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectChangeReason;
	static UEnum* ESmartObjectChangeReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectChangeReason"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectChangeReason>()
	{
		return ESmartObjectChangeReason_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators[] = {
		{ "ESmartObjectChangeReason::None", (int64)ESmartObjectChangeReason::None },
		{ "ESmartObjectChangeReason::OnEvent", (int64)ESmartObjectChangeReason::OnEvent },
		{ "ESmartObjectChangeReason::OnTagAdded", (int64)ESmartObjectChangeReason::OnTagAdded },
		{ "ESmartObjectChangeReason::OnTagRemoved", (int64)ESmartObjectChangeReason::OnTagRemoved },
		{ "ESmartObjectChangeReason::OnClaimed", (int64)ESmartObjectChangeReason::OnClaimed },
		{ "ESmartObjectChangeReason::OnReleased", (int64)ESmartObjectChangeReason::OnReleased },
		{ "ESmartObjectChangeReason::OnEnabled", (int64)ESmartObjectChangeReason::OnEnabled },
		{ "ESmartObjectChangeReason::OnDisabled", (int64)ESmartObjectChangeReason::OnDisabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes how Smart Object or slot was changed.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "None.Comment", "/** No Change. */" },
		{ "None.Name", "ESmartObjectChangeReason::None" },
		{ "None.ToolTip", "No Change." },
		{ "OnClaimed.Comment", "/** Slot was claimed. */" },
		{ "OnClaimed.Name", "ESmartObjectChangeReason::OnClaimed" },
		{ "OnClaimed.ToolTip", "Slot was claimed." },
		{ "OnDisabled.Comment", "/** Object or slot was disabled. */" },
		{ "OnDisabled.Name", "ESmartObjectChangeReason::OnDisabled" },
		{ "OnDisabled.ToolTip", "Object or slot was disabled." },
		{ "OnEnabled.Comment", "/** Object or slot was enabled. */" },
		{ "OnEnabled.Name", "ESmartObjectChangeReason::OnEnabled" },
		{ "OnEnabled.ToolTip", "Object or slot was enabled." },
		{ "OnEvent.Comment", "/** External event sent. */" },
		{ "OnEvent.Name", "ESmartObjectChangeReason::OnEvent" },
		{ "OnEvent.ToolTip", "External event sent." },
		{ "OnReleased.Comment", "/** Slot claim was released. */" },
		{ "OnReleased.Name", "ESmartObjectChangeReason::OnReleased" },
		{ "OnReleased.ToolTip", "Slot claim was released." },
		{ "OnTagAdded.Comment", "/** A tag was added. */" },
		{ "OnTagAdded.Name", "ESmartObjectChangeReason::OnTagAdded" },
		{ "OnTagAdded.ToolTip", "A tag was added." },
		{ "OnTagRemoved.Comment", "/** A tag was removed. */" },
		{ "OnTagRemoved.Name", "ESmartObjectChangeReason::OnTagRemoved" },
		{ "OnTagRemoved.ToolTip", "A tag was removed." },
		{ "ToolTip", "Describes how Smart Object or slot was changed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectChangeReason",
		"ESmartObjectChangeReason",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectEventData;
class UScriptStruct* FSmartObjectEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectEventData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectEventData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectEventData>()
{
	return FSmartObjectEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Strict describing a change in Smart Object or Slot. \n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Strict describing a change in Smart Object or Slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData[] = {
		{ "Comment", "/** Handle to the changed Smart Object. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to the changed Smart Object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle = { "SmartObjectHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectEventData, SmartObjectHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "Comment", "/** Handle to the changed slot, if invalid, the event is for the object. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to the changed slot, if invalid, the event is for the object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectEventData, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData[] = {
		{ "Comment", "/** Change reason. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Change reason." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectEventData, Reason), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData)) }; // 3396491639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData[] = {
		{ "Comment", "/** Added/Removed tag, or event tag, depending on Reason. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Added/Removed tag, or event tag, depending on Reason." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectEventData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectEventData",
		sizeof(FSmartObjectEventData),
		alignof(FSmartObjectEventData),
		Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo[] = {
		{ ESmartObjectTagMergingPolicy_StaticEnum, TEXT("ESmartObjectTagMergingPolicy"), &Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 124876394U) },
		{ ESmartObjectTagFilteringPolicy_StaticEnum, TEXT("ESmartObjectTagFilteringPolicy"), &Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 46274684U) },
		{ ESmartObjectChangeReason_StaticEnum, TEXT("ESmartObjectChangeReason"), &Z_Registration_Info_UEnum_ESmartObjectChangeReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396491639U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectUserHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewStructOps, TEXT("SmartObjectUserHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectUserHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectUserHandle), 2906428898U) },
		{ FSmartObjectHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewStructOps, TEXT("SmartObjectHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectHandle), 3072114966U) },
		{ FSmartObjectSlotHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::NewStructOps, TEXT("SmartObjectSlotHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotHandle), 467463604U) },
		{ FSmartObjectSlotDefinitionData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::NewStructOps, TEXT("SmartObjectSlotDefinitionData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotDefinitionData), 3368156248U) },
		{ FSmartObjectSlotStateData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::NewStructOps, TEXT("SmartObjectSlotStateData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotStateData), 1251160422U) },
		{ FSmartObjectSpatialEntryData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::NewStructOps, TEXT("SmartObjectSpatialEntryData"), &Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSpatialEntryData), 321701026U) },
		{ FSmartObjectSlotIndex::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewStructOps, TEXT("SmartObjectSlotIndex"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotIndex), 3579978106U) },
		{ FSmartObjectSlotReference::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewStructOps, TEXT("SmartObjectSlotReference"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotReference), 1619878014U) },
		{ FSmartObjectEventData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewStructOps, TEXT("SmartObjectEventData"), &Z_Registration_Info_UScriptStruct_SmartObjectEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectEventData), 3914128874U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectSpacePartition, USmartObjectSpacePartition::StaticClass, TEXT("USmartObjectSpacePartition"), &Z_Registration_Info_UClass_USmartObjectSpacePartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSpacePartition), 2325477675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_1626454832(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
