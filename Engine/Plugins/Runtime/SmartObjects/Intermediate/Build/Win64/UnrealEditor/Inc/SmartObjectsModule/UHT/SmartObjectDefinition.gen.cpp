// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectDefinition.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "WorldConditionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinition();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryDefinition();
// End Cross Module References
	void USmartObjectBehaviorDefinition::StaticRegisterNativesUSmartObjectBehaviorDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectBehaviorDefinition);
	UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister()
	{
		return USmartObjectBehaviorDefinition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract class that can be extended to bind a new type of behavior framework\n * to the smart objects by defining the required definition.\n */" },
		{ "IncludePath", "SmartObjectDefinition.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Abstract class that can be extended to bind a new type of behavior framework\nto the smart objects by defining the required definition." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectBehaviorDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::ClassParams = {
		&USmartObjectBehaviorDefinition::StaticClass,
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
		0x041030A1u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectBehaviorDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectBehaviorDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectBehaviorDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectBehaviorDefinition.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectBehaviorDefinition>()
	{
		return USmartObjectBehaviorDefinition::StaticClass();
	}
	USmartObjectBehaviorDefinition::USmartObjectBehaviorDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectBehaviorDefinition);
	USmartObjectBehaviorDefinition::~USmartObjectBehaviorDefinition() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition;
class UScriptStruct* FSmartObjectSlotDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotDefinition>()
{
	return FSmartObjectSlotDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DEBUG_DrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DEBUG_DrawColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionPreconditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionPreconditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorDefinitions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Persistent and sharable definition of a smart object slot.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Persistent and sharable definition of a smart object slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotDefinition>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_DEBUG_DrawColor_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_DEBUG_DrawColor = { "DEBUG_DrawColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, DEBUG_DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_DEBUG_DrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_DEBUG_DrawColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Whether the slot is enable initially. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Whether the slot is enable initially." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSmartObjectSlotDefinition*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSmartObjectSlotDefinition), &Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_RuntimeTags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Initial runtime tags. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Initial runtime tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_RuntimeTags = { "RuntimeTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, RuntimeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_RuntimeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_RuntimeTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_UserTagFilter_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** This slot is available only for users matching this query. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "This slot is available only for users matching this query." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_UserTagFilter = { "UserTagFilter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, UserTagFilter), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_UserTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_UserTagFilter_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ActivityTags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Tags identifying this slot's use case. Can be used while looking for slots supporting given activity.\n\x09 * Depending on the tag filtering policy these tags can override the parent object's tags\n\x09 * or be combined with them while applying filters from requests.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Tags identifying this slot's use case. Can be used while looking for slots supporting given activity.\nDepending on the tag filtering policy these tags can override the parent object's tags\nor be combined with them while applying filters from requests." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ActivityTags = { "ActivityTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, ActivityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ActivityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ActivityTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_SelectionPreconditions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Preconditions that must pass for the slot to be selected. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Preconditions that must pass for the slot to be selected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_SelectionPreconditions = { "SelectionPreconditions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, SelectionPreconditions), Z_Construct_UScriptStruct_FWorldConditionQueryDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_SelectionPreconditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_SelectionPreconditions_MetaData)) }; // 3528044641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Offset relative to the parent object where the slot is located. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Offset relative to the parent object where the slot is located." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Rotation relative to the parent object. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Rotation relative to the parent object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data_MetaData[] = {
		{ "BaseStruct", "/Script/SmartObjectsModule.SmartObjectSlotDefinitionData" },
		{ "Category", "SmartObject" },
		{ "Comment", "/** Custom data (struct inheriting from SmartObjectSlotDefinitionData) that can be added to the slot definition and accessed through a FSmartObjectSlotView */" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Custom data (struct inheriting from SmartObjectSlotDefinitionData) that can be added to the slot definition and accessed through a FSmartObjectSlotView" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_Inner_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * All available definitions associated to this slot.\n\x09 * This allows multiple frameworks to provide their specific behavior definition to the slot.\n\x09 * Note that there should be only one definition of each type since the first one will be selected.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "All available definitions associated to this slot.\nThis allows multiple frameworks to provide their specific behavior definition to the slot.\nNote that there should be only one definition of each type since the first one will be selected." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_Inner = { "BehaviorDefinitions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * All available definitions associated to this slot.\n\x09 * This allows multiple frameworks to provide their specific behavior definition to the slot.\n\x09 * Note that there should be only one definition of each type since the first one will be selected.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "All available definitions associated to this slot.\nThis allows multiple frameworks to provide their specific behavior definition to the slot.\nNote that there should be only one definition of each type since the first one will be selected." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions = { "BehaviorDefinitions", nullptr, (EPropertyFlags)0x0014008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinition, BehaviorDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_DEBUG_DrawColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_RuntimeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_UserTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_ActivityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_SelectionPreconditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewProp_BehaviorDefinitions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotDefinition",
		sizeof(FSmartObjectSlotDefinition),
		alignof(FSmartObjectSlotDefinition),
		Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition.InnerSingleton;
	}
	void USmartObjectDefinition::StaticRegisterNativesUSmartObjectDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectDefinition);
	UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister()
	{
		return USmartObjectDefinition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PreviewClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMeshPath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorDefinitions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBehaviorDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultBehaviorDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTagFilter;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectTagFilter;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preconditions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preconditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldConditionSchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WorldConditionSchemaClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivityTagsMergingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityTagsMergingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivityTagsMergingPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserTagsFilteringPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTagsFilteringPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserTagsFilteringPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SmartObject definition asset. Contains sharable information that can be used by multiple SmartObject instances at runtime.\n */" },
		{ "IncludePath", "SmartObjectDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SmartObject definition asset. Contains sharable information that can be used by multiple SmartObject instances at runtime." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewClass_MetaData[] = {
		{ "Comment", "/** Actor class used for previewing the definition in the asset editor. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Actor class used for previewing the definition in the asset editor." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewClass = { "PreviewClass", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, PreviewClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewMeshPath_MetaData[] = {
		{ "Comment", "/** Path of the static mesh used for previewing the definition in the asset editor. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Path of the static mesh used for previewing the definition in the asset editor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewMeshPath = { "PreviewMeshPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, PreviewMeshPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewMeshPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectSlotDefinition, METADATA_PARAMS(nullptr, 0) }; // 3734758941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Where SmartObject's user needs to stay to be able to activate it. These\n\x09 * will be used by AI to approach the object. Locations are relative to object's location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Where SmartObject's user needs to stay to be able to activate it. These\nwill be used by AI to approach the object. Locations are relative to object's location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0040008000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots_MetaData)) }; // 3734758941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_Inner_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** List of behavior definitions of different types provided to SO's user if the slot does not provide one. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "List of behavior definitions of different types provided to SO's user if the slot does not provide one." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_Inner = { "DefaultBehaviorDefinitions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectBehaviorDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** List of behavior definitions of different types provided to SO's user if the slot does not provide one. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "List of behavior definitions of different types provided to SO's user if the slot does not provide one." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions = { "DefaultBehaviorDefinitions", nullptr, (EPropertyFlags)0x0044008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, DefaultBehaviorDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagFilter_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** This object is available if user tags match this query; always available if query is empty. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "This object is available if user tags match this query; always available if query is empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagFilter = { "UserTagFilter", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, UserTagFilter), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagFilter_MetaData)) }; // 689482789
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ObjectTagFilter_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FWorldCondition_SmartObjectActorTagQuery or FSmartObjectWorldConditionObjectTagQuery in Preconditions instead." },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ObjectTagFilter = { "ObjectTagFilter", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, ObjectTagFilter), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ObjectTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ObjectTagFilter_MetaData)) }; // 689482789
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Preconditions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Preconditions that must pass for the object to be found/used. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Preconditions that must pass for the object to be found/used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Preconditions = { "Preconditions", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, Preconditions), Z_Construct_UScriptStruct_FWorldConditionQueryDefinition, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Preconditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Preconditions_MetaData)) }; // 3528044641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTags_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Tags identifying this Smart Object's use case. Can be used while looking for objects supporting given activity */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Tags identifying this Smart Object's use case. Can be used while looking for objects supporting given activity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTags = { "ActivityTags", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, ActivityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_WorldConditionSchemaClass_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_WorldConditionSchemaClass = { "WorldConditionSchemaClass", nullptr, (EPropertyFlags)0x0044040000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, WorldConditionSchemaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_WorldConditionSchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_WorldConditionSchemaClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy = { "ActivityTagsMergingPolicy", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, ActivityTagsMergingPolicy), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy_MetaData)) }; // 124876394
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Indicates how TagQueries from slots and parent object will be processed against User Tags from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Indicates how TagQueries from slots and parent object will be processed against User Tags from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy = { "UserTagsFilteringPolicy", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectDefinition, UserTagsFilteringPolicy), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy, METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy_MetaData)) }; // 46274684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectDefinition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_PreviewMeshPath,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_DefaultBehaviorDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagFilter,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ObjectTagFilter,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_Preconditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_WorldConditionSchemaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_ActivityTagsMergingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectDefinition_Statics::NewProp_UserTagsFilteringPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectDefinition_Statics::ClassParams = {
		&USmartObjectDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectDefinition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectDefinition.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectDefinition>()
	{
		return USmartObjectDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectDefinition);
	USmartObjectDefinition::~USmartObjectDefinition() {}

static_assert(std::is_polymorphic<FSmartObjectSlotDefinitionFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FSmartObjectSlotDefinitionFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment;
class UScriptStruct* FSmartObjectSlotDefinitionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotDefinitionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotDefinitionFragment>()
{
	return FSmartObjectSlotDefinitionFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartObjectDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Mass Fragment used to share slot definition between slot instances.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "ToolTip", "Mass Fragment used to share slot definition between slot instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotDefinitionFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewProp_SmartObjectDefinition_MetaData[] = {
		{ "Comment", "/** Pointer to the parent object definition to preserve slot definition pointer validity. */" },
		{ "ModuleRelativePath", "Public/SmartObjectDefinition.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to the parent object definition to preserve slot definition pointer validity." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewProp_SmartObjectDefinition = { "SmartObjectDefinition", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotDefinitionFragment, SmartObjectDefinition), Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewProp_SmartObjectDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewProp_SmartObjectDefinition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewProp_SmartObjectDefinition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"SmartObjectSlotDefinitionFragment",
		sizeof(FSmartObjectSlotDefinitionFragment),
		alignof(FSmartObjectSlotDefinitionFragment),
		Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotDefinition::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotDefinition_Statics::NewStructOps, TEXT("SmartObjectSlotDefinition"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotDefinition), 3734758941U) },
		{ FSmartObjectSlotDefinitionFragment::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionFragment_Statics::NewStructOps, TEXT("SmartObjectSlotDefinitionFragment"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotDefinitionFragment), 1725174919U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectBehaviorDefinition, USmartObjectBehaviorDefinition::StaticClass, TEXT("USmartObjectBehaviorDefinition"), &Z_Registration_Info_UClass_USmartObjectBehaviorDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectBehaviorDefinition), 1590999521U) },
		{ Z_Construct_UClass_USmartObjectDefinition, USmartObjectDefinition::StaticClass, TEXT("USmartObjectDefinition"), &Z_Registration_Info_UClass_USmartObjectDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectDefinition), 2998663997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_34352821(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDefinition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
