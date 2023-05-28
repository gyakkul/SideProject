// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectSubsystem.h"
#include "GameplayTagContainer.h"
#include "SmartObjectPersistentCollection.h"
#include "SmartObjectRuntime.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectContainer();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequest();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestFilter();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestResult();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntime();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter;
class UScriptStruct* FSmartObjectRequestFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectRequestFilter, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectRequestFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectRequestFilter>()
{
	return FSmartObjectRequestFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorDefinitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviorDefinitionClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviorDefinitionClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorDefinitionClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorDefinitionClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct that can be used to filter results of a smart object request when trying to find or claim a smart object\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Struct that can be used to filter results of a smart object request when trying to find or claim a smart object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectRequestFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserActor_MetaData[] = {
		{ "Comment", "/** Pointer to the Actor requesting the Smart Object slot (Optional). */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Pointer to the Actor requesting the Smart Object slot (Optional)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserActor = { "UserActor", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestFilter, UserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserTags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Gameplay tags of the Actor or Entity requesting the Smart Object slot. */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Gameplay tags of the Actor or Entity requesting the Smart Object slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserTags = { "UserTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestFilter, UserTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_ActivityRequirements_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Only return slots whose activity tags are matching this query. */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Only return slots whose activity tags are matching this query." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_ActivityRequirements = { "ActivityRequirements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestFilter, ActivityRequirements), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_ActivityRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_ActivityRequirements_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClass_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use BehaviorDefinitionClasses instead" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClass = { "BehaviorDefinitionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestFilter, BehaviorDefinitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses_Inner = { "BehaviorDefinitionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** If set, will filter out any SmartObject that uses different BehaviorDefinition classes. */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "If set, will filter out any SmartObject that uses different BehaviorDefinition classes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses = { "BehaviorDefinitionClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestFilter, BehaviorDefinitionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_UserTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_ActivityRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewProp_BehaviorDefinitionClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectRequestFilter",
		sizeof(FSmartObjectRequestFilter),
		alignof(FSmartObjectRequestFilter),
		Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectRequest;
class UScriptStruct* FSmartObjectRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectRequest, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectRequest.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectRequest>()
{
	return FSmartObjectRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct used to find a smart object within a specific search range and with optional filtering\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Struct used to find a smart object within a specific search range and with optional filtering" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_QueryBox_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Box defining the search range */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Box defining the search range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_QueryBox = { "QueryBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequest, QueryBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_QueryBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_QueryBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Struct used to filter out some results (all results allowed by default) */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Struct used to filter out some results (all results allowed by default)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequest, Filter), Z_Construct_UScriptStruct_FSmartObjectRequestFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_Filter_MetaData)) }; // 3905379238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_QueryBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewProp_Filter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectRequest",
		sizeof(FSmartObjectRequest),
		alignof(FSmartObjectRequest),
		Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectRequest.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectRequestResult;
class UScriptStruct* FSmartObjectRequestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectRequestResult, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectRequestResult"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectRequestResult>()
{
	return FSmartObjectRequestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct that holds the object and slot selected by processing a smart object request.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Struct that holds the object and slot selected by processing a smart object request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectRequestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SmartObjectHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SmartObjectHandle = { "SmartObjectHandle", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestResult, SmartObjectHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SmartObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SmartObjectHandle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectRequestResult, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SmartObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewProp_SlotHandle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectRequestResult",
		sizeof(FSmartObjectRequestResult),
		alignof(FSmartObjectRequestResult),
		Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectRequestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectRequestResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult;
	static UEnum* ESmartObjectCollectionRegistrationResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectCollectionRegistrationResult"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectCollectionRegistrationResult>()
	{
		return ESmartObjectCollectionRegistrationResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enumerators[] = {
		{ "ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection", (int64)ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection },
		{ "ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered", (int64)ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered },
		{ "ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel", (int64)ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel },
		{ "ESmartObjectCollectionRegistrationResult::Succeeded", (int64)ESmartObjectCollectionRegistrationResult::Succeeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Result code indicating if the Collection was successfully registered or why it was not.\n */" },
		{ "Failed_AlreadyRegistered.Name", "ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered" },
		{ "Failed_InvalidCollection.Name", "ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection" },
		{ "Failed_NotFromPersistentLevel.Name", "ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "Succeeded.Name", "ESmartObjectCollectionRegistrationResult::Succeeded" },
		{ "ToolTip", "Result code indicating if the Collection was successfully registered or why it was not." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectCollectionRegistrationResult",
		"ESmartObjectCollectionRegistrationResult",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectCollectionRegistrationResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode;
	static UEnum* ESmartObjectUnregistrationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectUnregistrationMode"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectUnregistrationMode>()
	{
		return ESmartObjectUnregistrationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enumerators[] = {
		{ "ESmartObjectUnregistrationMode::KeepRuntimeInstanceActiveIfPartOfCollection", (int64)ESmartObjectUnregistrationMode::KeepRuntimeInstanceActiveIfPartOfCollection },
		{ "ESmartObjectUnregistrationMode::DestroyRuntimeInstance", (int64)ESmartObjectUnregistrationMode::DestroyRuntimeInstance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Mode that indicates how the unregistration of the SmartObjectComponent affects its runtime instance.\n */" },
		{ "DestroyRuntimeInstance.Name", "ESmartObjectUnregistrationMode::DestroyRuntimeInstance" },
		{ "KeepRuntimeInstanceActiveIfPartOfCollection.Name", "ESmartObjectUnregistrationMode::KeepRuntimeInstanceActiveIfPartOfCollection" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Mode that indicates how the unregistration of the SmartObjectComponent affects its runtime instance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectUnregistrationMode",
		"ESmartObjectUnregistrationMode",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectUnregistrationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode.InnerSingleton;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execSetSlotEnabled)
	{
		P_GET_STRUCT(FSmartObjectSlotHandle,Z_Param_SlotHandle);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlotEnabled(Z_Param_SlotHandle,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execRemoveTagFromSlot)
	{
		P_GET_STRUCT(FSmartObjectSlotHandle,Z_Param_SlotHandle);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTagFromSlot(Z_Param_SlotHandle,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execAddTagToSlot)
	{
		P_GET_STRUCT(FSmartObjectSlotHandle,Z_Param_SlotHandle);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTagToSlot(Z_Param_SlotHandle,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSlotTags)
	{
		P_GET_STRUCT(FSmartObjectSlotHandle,Z_Param_SlotHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSlotTags(Z_Param_SlotHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execRemoveTagFromInstance)
	{
		P_GET_STRUCT(FSmartObjectHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTagFromInstance(Z_Param_Handle,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execAddTagToInstance)
	{
		P_GET_STRUCT(FSmartObjectHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTagToInstance(Z_Param_Handle,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetInstanceTags)
	{
		P_GET_STRUCT(FSmartObjectHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetInstanceTags(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSlotTransformFromRequestResult)
	{
		P_GET_STRUCT_REF(FSmartObjectRequestResult,Z_Param_Out_RequestResult);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSlotTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotTransformFromRequestResult(Z_Param_Out_RequestResult,Z_Param_Out_OutSlotTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSlotTransform)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutSlotTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotTransform(Z_Param_Out_ClaimHandle,Z_Param_Out_OutSlotTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSlotLocation)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSlotLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotLocation(Z_Param_Out_ClaimHandle,Z_Param_Out_OutSlotLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetBehaviorDefinitionByRequestResult)
	{
		P_GET_STRUCT_REF(FSmartObjectRequestResult,Z_Param_Out_RequestResult);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<USmartObjectBehaviorDefinition> ,Z_Param_Out_DefinitionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USmartObjectBehaviorDefinition**)Z_Param__Result=P_THIS->GetBehaviorDefinitionByRequestResult(Z_Param_Out_RequestResult,Z_Param_Out_DefinitionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetBehaviorDefinition)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<USmartObjectBehaviorDefinition> ,Z_Param_Out_DefinitionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USmartObjectBehaviorDefinition**)Z_Param__Result=P_THIS->GetBehaviorDefinition(Z_Param_Out_ClaimHandle,Z_Param_Out_DefinitionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execRelease)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Release(Z_Param_Out_ClaimHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execUse)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<USmartObjectBehaviorDefinition> ,Z_Param_Out_DefinitionClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USmartObjectBehaviorDefinition**)Z_Param__Result=P_THIS->Use(Z_Param_Out_ClaimHandle,Z_Param_Out_DefinitionClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execClaim)
	{
		P_GET_STRUCT_REF(FSmartObjectRequestResult,Z_Param_Out_RequestResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSmartObjectClaimHandle*)Z_Param__Result=P_THIS->Claim(Z_Param_Out_RequestResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execFindSmartObjects)
	{
		P_GET_STRUCT_REF(FSmartObjectRequest,Z_Param_Out_Request);
		P_GET_TARRAY_REF(FSmartObjectRequestResult,Z_Param_Out_OutResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindSmartObjects(Z_Param_Out_Request,Z_Param_Out_OutResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execFindSmartObject)
	{
		P_GET_STRUCT_REF(FSmartObjectRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSmartObjectRequestResult*)Z_Param__Result=P_THIS->FindSmartObject(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSmartObjectComponentByRequestResult)
	{
		P_GET_STRUCT_REF(FSmartObjectRequestResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USmartObjectComponent**)Z_Param__Result=P_THIS->GetSmartObjectComponentByRequestResult(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execGetSmartObjectComponent)
	{
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_ClaimHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USmartObjectComponent**)Z_Param__Result=P_THIS->GetSmartObjectComponent(Z_Param_Out_ClaimHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectSubsystem::execSetEnabled)
	{
		P_GET_STRUCT(FSmartObjectHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_Handle,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void USmartObjectSubsystem::StaticRegisterNativesUSmartObjectSubsystem()
	{
		UClass* Class = USmartObjectSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTagToInstance", &USmartObjectSubsystem::execAddTagToInstance },
			{ "AddTagToSlot", &USmartObjectSubsystem::execAddTagToSlot },
			{ "Claim", &USmartObjectSubsystem::execClaim },
			{ "FindSmartObject", &USmartObjectSubsystem::execFindSmartObject },
			{ "FindSmartObjects", &USmartObjectSubsystem::execFindSmartObjects },
			{ "GetBehaviorDefinition", &USmartObjectSubsystem::execGetBehaviorDefinition },
			{ "GetBehaviorDefinitionByRequestResult", &USmartObjectSubsystem::execGetBehaviorDefinitionByRequestResult },
			{ "GetInstanceTags", &USmartObjectSubsystem::execGetInstanceTags },
			{ "GetSlotLocation", &USmartObjectSubsystem::execGetSlotLocation },
			{ "GetSlotTags", &USmartObjectSubsystem::execGetSlotTags },
			{ "GetSlotTransform", &USmartObjectSubsystem::execGetSlotTransform },
			{ "GetSlotTransformFromRequestResult", &USmartObjectSubsystem::execGetSlotTransformFromRequestResult },
			{ "GetSmartObjectComponent", &USmartObjectSubsystem::execGetSmartObjectComponent },
			{ "GetSmartObjectComponentByRequestResult", &USmartObjectSubsystem::execGetSmartObjectComponentByRequestResult },
			{ "Release", &USmartObjectSubsystem::execRelease },
			{ "RemoveTagFromInstance", &USmartObjectSubsystem::execRemoveTagFromInstance },
			{ "RemoveTagFromSlot", &USmartObjectSubsystem::execRemoveTagFromSlot },
			{ "SetEnabled", &USmartObjectSubsystem::execSetEnabled },
			{ "SetSlotEnabled", &USmartObjectSubsystem::execSetSlotEnabled },
			{ "Use", &USmartObjectSubsystem::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics
	{
		struct SmartObjectSubsystem_eventAddTagToInstance_Parms
		{
			FSmartObjectHandle Handle;
			FGameplayTag Tag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventAddTagToInstance_Parms, Handle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Handle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventAddTagToInstance_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds a single tag to the smart object instance represented by the provided handle.\n\x09 * @param Handle Handle to the smart object.\n\x09 * @param Tag Tag to add to the smart object instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Adds a single tag to the smart object instance represented by the provided handle.\n@param Handle Handle to the smart object.\n@param Tag Tag to add to the smart object instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "AddTagToInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::SmartObjectSubsystem_eventAddTagToInstance_Parms), Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics
	{
		struct SmartObjectSubsystem_eventAddTagToSlot_Parms
		{
			FSmartObjectSlotHandle SlotHandle;
			FGameplayTag Tag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventAddTagToSlot_Parms, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventAddTagToSlot_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds a single tag to the smart object slot represented by the provided handle.\n\x09 * @param SlotHandle Handle to the smart object slot.\n\x09 * @param Tag Tag to add to the smart object slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Adds a single tag to the smart object slot represented by the provided handle.\n@param SlotHandle Handle to the smart object slot.\n@param Tag Tag to add to the smart object slot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "AddTagToSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::SmartObjectSubsystem_eventAddTagToSlot_Parms), Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics
	{
		struct SmartObjectSubsystem_eventClaim_Parms
		{
			FSmartObjectRequestResult RequestResult;
			FSmartObjectClaimHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_RequestResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_RequestResult = { "RequestResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventClaim_Parms, RequestResult), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_RequestResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_RequestResult_MetaData)) }; // 4207157864
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventClaim_Parms, ReturnValue), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(nullptr, 0) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_RequestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Claims smart object from a request result.\n\x09 * @param RequestResult Request result for given smart object and slot index.\n\x09 * @return A handle binding the claimed smart object, its slot and a user id.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Claims smart object from a request result.\n@param RequestResult Request result for given smart object and slot index.\n@return A handle binding the claimed smart object, its slot and a user id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "Claim", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::SmartObjectSubsystem_eventClaim_Parms), Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_Claim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_Claim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics
	{
		struct SmartObjectSubsystem_eventFindSmartObject_Parms
		{
			FSmartObjectRequest Request;
			FSmartObjectRequestResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventFindSmartObject_Parms, Request), Z_Construct_UScriptStruct_FSmartObjectRequest, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_Request_MetaData)) }; // 229474394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventFindSmartObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(nullptr, 0) }; // 4207157864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Spatial lookup\n\x09 * @return First valid smart object in range. Not the closest one, just the one\n\x09 *\x09\x09that happens to be retrieved first from space partition\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Spatial lookup\n@return First valid smart object in range. Not the closest one, just the one\n             that happens to be retrieved first from space partition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "FindSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::SmartObjectSubsystem_eventFindSmartObject_Parms), Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics
	{
		struct SmartObjectSubsystem_eventFindSmartObjects_Parms
		{
			FSmartObjectRequest Request;
			TArray<FSmartObjectRequestResult> OutResults;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventFindSmartObjects_Parms, Request), Z_Construct_UScriptStruct_FSmartObjectRequest, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_Request_MetaData)) }; // 229474394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_OutResults_Inner = { "OutResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(nullptr, 0) }; // 4207157864
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_OutResults = { "OutResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventFindSmartObjects_Parms, OutResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4207157864
	void Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventFindSmartObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventFindSmartObjects_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_OutResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_OutResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Spatial lookup\n\x09 * @return All valid smart objects in range.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Spatial lookup\n@return All valid smart objects in range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "FindSmartObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::SmartObjectSubsystem_eventFindSmartObjects_Parms), Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics
	{
		struct SmartObjectSubsystem_eventGetBehaviorDefinition_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			const TSubclassOf<USmartObjectBehaviorDefinition>  DefinitionClass;
			const USmartObjectBehaviorDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefinitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinition_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_DefinitionClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_DefinitionClass = { "DefinitionClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinition_Parms, DefinitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_DefinitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_DefinitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinition_Parms, ReturnValue), Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_DefinitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Return the behavior definition of a given type from a claimed object.\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @param DefinitionClass The type of behavior definition.\n\x09 * @return The base class pointer of the requested behavior definition class associated to the slotClaim handle\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Return the behavior definition of a given type from a claimed object.\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@param DefinitionClass The type of behavior definition.\n@return The base class pointer of the requested behavior definition class associated to the slotClaim handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetBehaviorDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::SmartObjectSubsystem_eventGetBehaviorDefinition_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics
	{
		struct SmartObjectSubsystem_eventGetBehaviorDefinitionByRequestResult_Parms
		{
			FSmartObjectRequestResult RequestResult;
			const TSubclassOf<USmartObjectBehaviorDefinition>  DefinitionClass;
			const USmartObjectBehaviorDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefinitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_RequestResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_RequestResult = { "RequestResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinitionByRequestResult_Parms, RequestResult), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_RequestResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_RequestResult_MetaData)) }; // 4207157864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_DefinitionClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_DefinitionClass = { "DefinitionClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinitionByRequestResult_Parms, DefinitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_DefinitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_DefinitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetBehaviorDefinitionByRequestResult_Parms, ReturnValue), Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_RequestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_DefinitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Return the behavior definition of a given type from a request result.\n\x09 * @param RequestResult A request result returned by any of the Find methods.\n\x09 * @param DefinitionClass The type of behavior definition.\n\x09 * @return The base class pointer of the requested behavior definition class associated to the request result\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Return the behavior definition of a given type from a request result.\n@param RequestResult A request result returned by any of the Find methods.\n@param DefinitionClass The type of behavior definition.\n@return The base class pointer of the requested behavior definition class associated to the request result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetBehaviorDefinitionByRequestResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::SmartObjectSubsystem_eventGetBehaviorDefinitionByRequestResult_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics
	{
		struct SmartObjectSubsystem_eventGetInstanceTags_Parms
		{
			FSmartObjectHandle Handle;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetInstanceTags_Parms, Handle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_Handle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetInstanceTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the list of tags associated to the smart object instance represented by the provided handle.\n\x09 * @param Handle Handle to the smart object.\n\x09 * @return Container of tags associated to the smart object instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the list of tags associated to the smart object instance represented by the provided handle.\n@param Handle Handle to the smart object.\n@return Container of tags associated to the smart object instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetInstanceTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::SmartObjectSubsystem_eventGetInstanceTags_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics
	{
		struct SmartObjectSubsystem_eventGetSlotLocation_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			FVector OutSlotLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotLocation_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_OutSlotLocation = { "OutSlotLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotLocation_Parms, OutSlotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventGetSlotLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventGetSlotLocation_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_OutSlotLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the position (in world space) of the slot associated to the given claim handle.\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @param OutSlotLocation Position (in world space) of the slot associated to ClaimHandle.\n\x09 * @return Whether the location was found and assigned to 'OutSlotLocation'\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the position (in world space) of the slot associated to the given claim handle.\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@param OutSlotLocation Position (in world space) of the slot associated to ClaimHandle.\n@return Whether the location was found and assigned to 'OutSlotLocation'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSlotLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::SmartObjectSubsystem_eventGetSlotLocation_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics
	{
		struct SmartObjectSubsystem_eventGetSlotTags_Parms
		{
			FSmartObjectSlotHandle SlotHandle;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTags_Parms, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the list of tags associated to the smart object slot represented by the provided handle.\n\x09 * @param SlotHandle Handle to the smart object slot.\n\x09 * @return Container of tags associated to the smart object instance, or empty container if slot was not valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the list of tags associated to the smart object slot represented by the provided handle.\n@param SlotHandle Handle to the smart object slot.\n@return Container of tags associated to the smart object instance, or empty container if slot was not valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSlotTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::SmartObjectSubsystem_eventGetSlotTags_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics
	{
		struct SmartObjectSubsystem_eventGetSlotTransform_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			FTransform OutSlotTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTransform_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_OutSlotTransform = { "OutSlotTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTransform_Parms, OutSlotTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventGetSlotTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventGetSlotTransform_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_OutSlotTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the transform (in world space) of the slot associated to the given claim handle.\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @param OutSlotTransform Transform (in world space) of the slot associated to ClaimHandle.\n\x09 * @return Whether the transform was found and assigned to 'OutSlotTransform'\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the transform (in world space) of the slot associated to the given claim handle.\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@param OutSlotTransform Transform (in world space) of the slot associated to ClaimHandle.\n@return Whether the transform was found and assigned to 'OutSlotTransform'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSlotTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::SmartObjectSubsystem_eventGetSlotTransform_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics
	{
		struct SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms
		{
			FSmartObjectRequestResult RequestResult;
			FTransform OutSlotTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSlotTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_RequestResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_RequestResult = { "RequestResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms, RequestResult), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_RequestResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_RequestResult_MetaData)) }; // 4207157864
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_OutSlotTransform = { "OutSlotTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms, OutSlotTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_RequestResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_OutSlotTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the transform (in world space) of the slot associated to the given RequestResult.\n\x09 * @param RequestResult Result returned by any of the Find Smart Object(s) methods.\n\x09 * @param OutSlotTransform Transform (in world space) of the slot associated to the RequestResult.\n\x09 * @return Whether the transform was found and assigned to 'OutSlotTransform'\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the transform (in world space) of the slot associated to the given RequestResult.\n@param RequestResult Result returned by any of the Find Smart Object(s) methods.\n@param OutSlotTransform Transform (in world space) of the slot associated to the RequestResult.\n@return Whether the transform was found and assigned to 'OutSlotTransform'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSlotTransformFromRequestResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::SmartObjectSubsystem_eventGetSlotTransformFromRequestResult_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics
	{
		struct SmartObjectSubsystem_eventGetSmartObjectComponent_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			USmartObjectComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSmartObjectComponent_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSmartObjectComponent_Parms, ReturnValue), Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the component associated to the claim handle if still\n\x09 * accessible. In some scenarios the component may no longer exist\n\x09 * but its smart object data could (e.g. streaming)\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @return A pointer to the USmartObjectComponent* associated to the handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the component associated to the claim handle if still\naccessible. In some scenarios the component may no longer exist\nbut its smart object data could (e.g. streaming)\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@return A pointer to the USmartObjectComponent* associated to the handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSmartObjectComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::SmartObjectSubsystem_eventGetSmartObjectComponent_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics
	{
		struct SmartObjectSubsystem_eventGetSmartObjectComponentByRequestResult_Parms
		{
			FSmartObjectRequestResult Result;
			USmartObjectComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSmartObjectComponentByRequestResult_Parms, Result), Z_Construct_UScriptStruct_FSmartObjectRequestResult, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_Result_MetaData)) }; // 4207157864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventGetSmartObjectComponentByRequestResult_Parms, ReturnValue), Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Returns the component associated to the  given request result\n\x09 * In some scenarios the component may no longer exist\n\x09 * but its smart object data could (e.g. streaming)\n\x09 * @param Result A request result returned by any of the Find methods .\n\x09 * @return A pointer to the USmartObjectComponent* associated to the handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Returns the component associated to the  given request result\nIn some scenarios the component may no longer exist\nbut its smart object data could (e.g. streaming)\n@param Result A request result returned by any of the Find methods .\n@return A pointer to the USmartObjectComponent* associated to the handle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "GetSmartObjectComponentByRequestResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::SmartObjectSubsystem_eventGetSmartObjectComponentByRequestResult_Parms), Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics
	{
		struct SmartObjectSubsystem_eventRelease_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventRelease_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
	void Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventRelease_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventRelease_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Release claim on a smart object.\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @return Whether the claim was successfully released or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Release claim on a smart object.\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@return Whether the claim was successfully released or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::SmartObjectSubsystem_eventRelease_Parms), Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics
	{
		struct SmartObjectSubsystem_eventRemoveTagFromInstance_Parms
		{
			FSmartObjectHandle Handle;
			FGameplayTag Tag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventRemoveTagFromInstance_Parms, Handle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Handle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventRemoveTagFromInstance_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Removes a single tag from the smartobject instance represented by the provided handle.\n\x09 * @param Handle Handle to the smart object.\n\x09 * @param Tag Tag to remove from the SmartObject instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Removes a single tag from the smartobject instance represented by the provided handle.\n@param Handle Handle to the smart object.\n@param Tag Tag to remove from the SmartObject instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "RemoveTagFromInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::SmartObjectSubsystem_eventRemoveTagFromInstance_Parms), Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics
	{
		struct SmartObjectSubsystem_eventRemoveTagFromSlot_Parms
		{
			FSmartObjectSlotHandle SlotHandle;
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventRemoveTagFromSlot_Parms, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventRemoveTagFromSlot_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventRemoveTagFromSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventRemoveTagFromSlot_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Removes a single tag from the smart object slot represented by the provided handle.\n\x09 * @param SlotHandle Handle to the smart object slot.\n\x09 * @param Tag Tag to remove from the smart object slot.\n\x09 * @return True if the tag was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Removes a single tag from the smart object slot represented by the provided handle.\n@param SlotHandle Handle to the smart object slot.\n@param Tag Tag to remove from the smart object slot.\n@return True if the tag was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "RemoveTagFromSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::SmartObjectSubsystem_eventRemoveTagFromSlot_Parms), Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics
	{
		struct SmartObjectSubsystem_eventSetEnabled_Parms
		{
			FSmartObjectHandle Handle;
			bool bEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventSetEnabled_Parms, Handle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_Handle_MetaData)) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventSetEnabled_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventSetEnabled_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Enables or disables the entire smart object represented by the provided handle.\n\x09 * Delegate 'OnEvent' is broadcasted with ESmartObjectChangeReason::OnEnabled/ESmartObjectChangeReason::OnDisabled if state changed.\n\x09 * @param Handle Handle to the smart object.\n\x09 * @param bEnabled If true enables the smart object, disables otherwise.\n\x09 * @return True when associated smart object is found and set (or already set) to desired state; false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Enables or disables the entire smart object represented by the provided handle.\nDelegate 'OnEvent' is broadcasted with ESmartObjectChangeReason::OnEnabled/ESmartObjectChangeReason::OnDisabled if state changed.\n@param Handle Handle to the smart object.\n@param bEnabled If true enables the smart object, disables otherwise.\n@return True when associated smart object is found and set (or already set) to desired state; false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::SmartObjectSubsystem_eventSetEnabled_Parms), Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics
	{
		struct SmartObjectSubsystem_eventSetSlotEnabled_Parms
		{
			FSmartObjectSlotHandle SlotHandle;
			bool bEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventSetSlotEnabled_Parms, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_SlotHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_SlotHandle_MetaData)) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventSetSlotEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventSetSlotEnabled_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectSubsystem_eventSetSlotEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectSubsystem_eventSetSlotEnabled_Parms), &Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Enables or disables the smart object slot represented by the provided handle.\n\x09 * @param SlotHandle Handle to the smart object slot.\n\x09 * @param bEnabled If true enables the slot, if false, disables the slot.\n\x09 * @return Previous enabled state. \n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Enables or disables the smart object slot represented by the provided handle.\n@param SlotHandle Handle to the smart object slot.\n@param bEnabled If true enables the slot, if false, disables the slot.\n@return Previous enabled state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "SetSlotEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::SmartObjectSubsystem_eventSetSlotEnabled_Parms), Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics
	{
		struct SmartObjectSubsystem_eventUse_Parms
		{
			FSmartObjectClaimHandle ClaimHandle;
			const TSubclassOf<USmartObjectBehaviorDefinition>  DefinitionClass;
			const USmartObjectBehaviorDefinition* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefinitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ClaimHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventUse_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ClaimHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ClaimHandle_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_DefinitionClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_DefinitionClass = { "DefinitionClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventUse_Parms, DefinitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_DefinitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_DefinitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectSubsystem_eventUse_Parms, ReturnValue), Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_DefinitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Start using a claimed smart object slot.\n\x09 * @param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n\x09 * @param DefinitionClass The type of behavior definition the user wants to use.\n\x09 * @return The base class pointer of the requested behavior definition class associated to the slot\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Start using a claimed smart object slot.\n@param ClaimHandle Handle to a claimed slot returned by any of the Claim methods.\n@param DefinitionClass The type of behavior definition the user wants to use.\n@return The base class pointer of the requested behavior definition class associated to the slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectSubsystem, nullptr, "Use", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::SmartObjectSubsystem_eventUse_Parms), Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectSubsystem_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectSubsystem_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSubsystem);
	UClass* Z_Construct_UClass_USmartObjectSubsystem_NoRegister()
	{
		return USmartObjectSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacePartitionClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpacePartitionClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacePartitionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpacePartitionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacePartition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpacePartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeSmartObjects_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeSmartObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeSmartObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeSmartObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeSlots_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeSlots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeSlots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeSlots;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredSOComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredSOComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredSOComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PendingSmartObjectRegistration_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingSmartObjectRegistration_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingSmartObjectRegistration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmartObjectSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartObjectSubsystem_AddTagToInstance, "AddTagToInstance" }, // 154525495
		{ &Z_Construct_UFunction_USmartObjectSubsystem_AddTagToSlot, "AddTagToSlot" }, // 695667228
		{ &Z_Construct_UFunction_USmartObjectSubsystem_Claim, "Claim" }, // 3529208220
		{ &Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObject, "FindSmartObject" }, // 595156389
		{ &Z_Construct_UFunction_USmartObjectSubsystem_FindSmartObjects, "FindSmartObjects" }, // 4248552125
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinition, "GetBehaviorDefinition" }, // 3565488980
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult, "GetBehaviorDefinitionByRequestResult" }, // 592256921
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetInstanceTags, "GetInstanceTags" }, // 178466848
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotLocation, "GetSlotLocation" }, // 2354044591
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTags, "GetSlotTags" }, // 50815873
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransform, "GetSlotTransform" }, // 574144238
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSlotTransformFromRequestResult, "GetSlotTransformFromRequestResult" }, // 1320267206
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponent, "GetSmartObjectComponent" }, // 1535476070
		{ &Z_Construct_UFunction_USmartObjectSubsystem_GetSmartObjectComponentByRequestResult, "GetSmartObjectComponentByRequestResult" }, // 4078007796
		{ &Z_Construct_UFunction_USmartObjectSubsystem_Release, "Release" }, // 3286661682
		{ &Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromInstance, "RemoveTagFromInstance" }, // 1342370829
		{ &Z_Construct_UFunction_USmartObjectSubsystem_RemoveTagFromSlot, "RemoveTagFromSlot" }, // 2273917907
		{ &Z_Construct_UFunction_USmartObjectSubsystem_SetEnabled, "SetEnabled" }, // 3749235357
		{ &Z_Construct_UFunction_USmartObjectSubsystem_SetSlotEnabled, "SetSlotEnabled" }, // 1895267941
		{ &Z_Construct_UFunction_USmartObjectSubsystem_Use, "Use" }, // 2475012173
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem that holds all registered smart object instances and offers the API for spatial queries and reservations.\n */" },
		{ "IncludePath", "SmartObjectSubsystem.h" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Subsystem that holds all registered smart object instances and offers the API for spatial queries and reservations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the Space partition class to use.\n\x09 * Usage:\n\x09 *\x09\x09[/Script/SmartObjectsModule.SmartObjectSubsystem]\n\x09 *\x09\x09SpacePartitionClassName=/Script/SmartObjectsModule.<SpacePartitionClassName>\n\x09 */" },
		{ "DisplayName", "Spatial Representation Structure Class" },
		{ "MetaClass", "/Script/SmartObjectsModule.SmartObjectSpacePartition" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "Name of the Space partition class to use.\nUsage:\n             [/Script/SmartObjectsModule.SmartObjectSubsystem]\n             SpacePartitionClassName=/Script/SmartObjectsModule.<SpacePartitionClassName>" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClassName = { "SpacePartitionClassName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, SpacePartitionClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClass = { "SpacePartitionClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, SpacePartitionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectSpacePartition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartition = { "SpacePartition", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, SpacePartition), Z_Construct_UClass_USmartObjectSpacePartition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RenderingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RenderingActor = { "RenderingActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, RenderingActor), Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RenderingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RenderingActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SmartObjectContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SmartObjectContainer = { "SmartObjectContainer", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, SmartObjectContainer), Z_Construct_UScriptStruct_FSmartObjectContainer, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SmartObjectContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SmartObjectContainer_MetaData)) }; // 395998703
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_ValueProp = { "RuntimeSmartObjects", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSmartObjectRuntime, METADATA_PARAMS(nullptr, 0) }; // 815902710
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_Key_KeyProp = { "RuntimeSmartObjects_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(nullptr, 0) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects = { "RuntimeSmartObjects", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, RuntimeSmartObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_MetaData)) }; // 3072114966 815902710
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_ValueProp = { "RuntimeSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSmartObjectRuntimeSlot, METADATA_PARAMS(nullptr, 0) }; // 1274014954
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_Key_KeyProp = { "RuntimeSlots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(nullptr, 0) }; // 467463604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots = { "RuntimeSlots", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, RuntimeSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_MetaData)) }; // 467463604 1274014954
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents_Inner = { "RegisteredSOComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents_MetaData[] = {
		{ "Comment", "/** List of registered components. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "List of registered components." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents = { "RegisteredSOComponents", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, RegisteredSOComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration_Inner = { "PendingSmartObjectRegistration", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration_MetaData[] = {
		{ "Comment", "/** smart objects that attempted to register while no collection was being present */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectSubsystem.h" },
		{ "ToolTip", "smart objects that attempted to register while no collection was being present" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration = { "PendingSmartObjectRegistration", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSubsystem, PendingSmartObjectRegistration), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartitionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SpacePartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RenderingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_SmartObjectContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSmartObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RuntimeSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_RegisteredSOComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSubsystem_Statics::NewProp_PendingSmartObjectRegistration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSubsystem_Statics::ClassParams = {
		&USmartObjectSubsystem::StaticClass,
		"SmartObjects",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USmartObjectSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectSubsystem()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSubsystem.OuterSingleton, Z_Construct_UClass_USmartObjectSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSubsystem.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSubsystem>()
	{
		return USmartObjectSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSubsystem);
	USmartObjectSubsystem::~USmartObjectSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::EnumInfo[] = {
		{ ESmartObjectCollectionRegistrationResult_StaticEnum, TEXT("ESmartObjectCollectionRegistrationResult"), &Z_Registration_Info_UEnum_ESmartObjectCollectionRegistrationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352650653U) },
		{ ESmartObjectUnregistrationMode_StaticEnum, TEXT("ESmartObjectUnregistrationMode"), &Z_Registration_Info_UEnum_ESmartObjectUnregistrationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 378681456U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectRequestFilter::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics::NewStructOps, TEXT("SmartObjectRequestFilter"), &Z_Registration_Info_UScriptStruct_SmartObjectRequestFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectRequestFilter), 3905379238U) },
		{ FSmartObjectRequest::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectRequest_Statics::NewStructOps, TEXT("SmartObjectRequest"), &Z_Registration_Info_UScriptStruct_SmartObjectRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectRequest), 229474394U) },
		{ FSmartObjectRequestResult::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics::NewStructOps, TEXT("SmartObjectRequestResult"), &Z_Registration_Info_UScriptStruct_SmartObjectRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectRequestResult), 4207157864U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectSubsystem, USmartObjectSubsystem::StaticClass, TEXT("USmartObjectSubsystem"), &Z_Registration_Info_UClass_USmartObjectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSubsystem), 3593337128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_2722614207(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
