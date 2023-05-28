// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimSceneAsset.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimSceneAsset() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimRolesAsset();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider();
	CONTEXTUALANIMATION_API UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimActorPreviewData();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimPoint();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryParams();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimQueryResult();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimRoleDefinition();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneSection();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSet();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSetPivotDefinition();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	void UContextualAnimRolesAsset::StaticRegisterNativesUContextualAnimRolesAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimRolesAsset);
	UClass* Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister()
	{
		return UContextualAnimRolesAsset::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimRolesAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimRolesAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ContextualAnimSceneAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimRoleDefinition, METADATA_PARAMS(nullptr, 0) }; // 1339812668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimRolesAsset, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles_MetaData)) }; // 1339812668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimRolesAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimRolesAsset_Statics::NewProp_Roles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimRolesAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimRolesAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimRolesAsset_Statics::ClassParams = {
		&UContextualAnimRolesAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimRolesAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimRolesAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimRolesAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimRolesAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimRolesAsset()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimRolesAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimRolesAsset.OuterSingleton, Z_Construct_UClass_UContextualAnimRolesAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimRolesAsset.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimRolesAsset>()
	{
		return UContextualAnimRolesAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimRolesAsset);
	UContextualAnimRolesAsset::~UContextualAnimRolesAsset() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimSet;
class UScriptStruct* FContextualAnimSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimSet, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimSet"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimSet.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimSet>()
{
	return FContextualAnimSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScenePivots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScenePivots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScenePivots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains AnimTracks for each role in the interaction.\n * Example: An specific set for a interaction with a car would have two tracks, one with the animation for the character and another one with the animation for the car.\n * It is common to have variations of the same action with different animations. We could have one AnimSet with the animations for getting into the car from the driver side and another for getting into the car from the passenger side.\n*/" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Contains AnimTracks for each role in the interaction.\nExample: An specific set for a interaction with a car would have two tracks, one with the animation for the character and another one with the animation for the car.\nIt is common to have variations of the same action with different animations. We could have one AnimSet with the animations for getting into the car from the driver side and another for getting into the car from the passenger side." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimTrack, METADATA_PARAMS(nullptr, 0) }; // 3706518326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** List of tracks with animation (and relevant data specific to that animation) for each role */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "List of tracks with animation (and relevant data specific to that animation) for each role" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSet, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks_MetaData)) }; // 3706518326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots_Inner = { "ScenePivots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Scene pivots for this set. Generated off line based on the AnimSetPivotDefinitions for the section this Set belongs to */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Scene pivots for this set. Generated off line based on the AnimSetPivotDefinitions for the section this Set belongs to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots = { "ScenePivots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSet, ScenePivots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_RandomWeight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Used by the selection mechanism to 'break the tie' when multiple Sets can be selected */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Used by the selection mechanism to 'break the tie' when multiple Sets can be selected" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_RandomWeight = { "RandomWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSet, RandomWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_RandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_RandomWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_ScenePivots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewProp_RandomWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimSet",
		sizeof(FContextualAnimSet),
		alignof(FContextualAnimSet),
		Z_Construct_UScriptStruct_FContextualAnimSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimSet.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection;
class UScriptStruct* FContextualAnimSceneSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimSceneSection, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimSceneSection"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimSceneSection>()
{
	return FContextualAnimSceneSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoleToIKTargetDefsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RoleToIKTargetDefsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleToIKTargetDefsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoleToIKTargetDefsMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSetPivotDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetPivotDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSetPivotDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Named container with one or more ContextualAnimSet */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Named container with one or more ContextualAnimSet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimSceneSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSceneSection, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets_Inner = { "AnimSets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimSet, METADATA_PARAMS(nullptr, 0) }; // 1339379515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets = { "AnimSets", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSceneSection, AnimSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets_MetaData)) }; // 1339379515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_ValueProp = { "RoleToIKTargetDefsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FContextualAnimIKTargetDefContainer, METADATA_PARAMS(nullptr, 0) }; // 2765113
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_Key_KeyProp = { "RoleToIKTargetDefsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap = { "RoleToIKTargetDefsMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSceneSection, RoleToIKTargetDefsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_MetaData)) }; // 2765113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions_Inner = { "AnimSetPivotDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimSetPivotDefinition, METADATA_PARAMS(nullptr, 0) }; // 278502818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions = { "AnimSetPivotDefinitions", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimSceneSection, AnimSetPivotDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions_MetaData)) }; // 278502818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_RoleToIKTargetDefsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewProp_AnimSetPivotDefinitions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimSceneSection",
		sizeof(FContextualAnimSceneSection),
		alignof(FContextualAnimSceneSection),
		Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneSection()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimPoint;
class UScriptStruct* FContextualAnimPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimPoint, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimPoint.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimPoint>()
{
	return FContextualAnimPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrackIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimTrackIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, Role), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, SectionIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_SectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_SectionIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, AnimSetIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimSetIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimSetIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimTrackIdx_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimTrackIdx = { "AnimTrackIdx", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimPoint, AnimTrackIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimTrackIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimTrackIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewProp_AnimTrackIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimPoint",
		sizeof(FContextualAnimPoint),
		alignof(FContextualAnimPoint),
		Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimPoint.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimPoint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimPointType;
	static UEnum* EContextualAnimPointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimPointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimPointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimPointType"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimPointType.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimPointType>()
	{
		return EContextualAnimPointType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enumerators[] = {
		{ "EContextualAnimPointType::FirstFrame", (int64)EContextualAnimPointType::FirstFrame },
		{ "EContextualAnimPointType::SyncFrame", (int64)EContextualAnimPointType::SyncFrame },
		{ "EContextualAnimPointType::LastFrame", (int64)EContextualAnimPointType::LastFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FirstFrame.Name", "EContextualAnimPointType::FirstFrame" },
		{ "LastFrame.Name", "EContextualAnimPointType::LastFrame" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "SyncFrame.Name", "EContextualAnimPointType::SyncFrame" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimPointType",
		"EContextualAnimPointType",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimPointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimPointType.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimPointType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider;
	static UEnum* EContextualAnimCriterionToConsider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimCriterionToConsider"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionToConsider>()
	{
		return EContextualAnimCriterionToConsider_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enumerators[] = {
		{ "EContextualAnimCriterionToConsider::All", (int64)EContextualAnimCriterionToConsider::All },
		{ "EContextualAnimCriterionToConsider::Spatial", (int64)EContextualAnimCriterionToConsider::Spatial },
		{ "EContextualAnimCriterionToConsider::Other", (int64)EContextualAnimCriterionToConsider::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EContextualAnimCriterionToConsider::All" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "Other.Name", "EContextualAnimCriterionToConsider::Other" },
		{ "Spatial.Name", "EContextualAnimCriterionToConsider::Spatial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimCriterionToConsider",
		"EContextualAnimCriterionToConsider",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContextualAnimActorPreviewType;
	static UEnum* EContextualAnimActorPreviewType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("EContextualAnimActorPreviewType"));
		}
		return Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimActorPreviewType>()
	{
		return EContextualAnimActorPreviewType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enumerators[] = {
		{ "EContextualAnimActorPreviewType::SkeletalMesh", (int64)EContextualAnimActorPreviewType::SkeletalMesh },
		{ "EContextualAnimActorPreviewType::StaticMesh", (int64)EContextualAnimActorPreviewType::StaticMesh },
		{ "EContextualAnimActorPreviewType::Actor", (int64)EContextualAnimActorPreviewType::Actor },
		{ "EContextualAnimActorPreviewType::None", (int64)EContextualAnimActorPreviewType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EContextualAnimActorPreviewType::Actor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "None.Name", "EContextualAnimActorPreviewType::None" },
		{ "SkeletalMesh.Name", "EContextualAnimActorPreviewType::SkeletalMesh" },
		{ "StaticMesh.Name", "EContextualAnimActorPreviewType::StaticMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		"EContextualAnimActorPreviewType",
		"EContextualAnimActorPreviewType",
		Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType()
	{
		if (!Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.InnerSingleton, Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContextualAnimActorPreviewType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData;
class UScriptStruct* FContextualAnimActorPreviewData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData, (UObject*)Z_Construct_UPackage__Script_ContextualAnimation(), TEXT("ContextualAnimActorPreviewData"));
	}
	return Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.OuterSingleton;
}
template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<FContextualAnimActorPreviewData>()
{
	return FContextualAnimActorPreviewData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PreviewAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PreviewActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContextualAnimActorPreviewData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Defaults" },
		{ "GetOptions", "GetRoles" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, Role), METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Role_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Defaults" },
		{ "GetOptions", "GetRoles" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, Type), Z_Construct_UEnum_ContextualAnimation_EContextualAnimActorPreviewType, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type_MetaData)) }; // 3708743215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "Type==EContextualAnimActorPreviewType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewAnimInstance_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "Type==EContextualAnimActorPreviewType::SkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewAnimInstance = { "PreviewAnimInstance", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, PreviewAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewStaticMesh_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "Type==EContextualAnimActorPreviewType::StaticMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewStaticMesh = { "PreviewStaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, PreviewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewActorClass_MetaData[] = {
		{ "Category", "Defaults" },
		{ "EditCondition", "Type==EContextualAnimActorPreviewType::Actor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewActorClass = { "PreviewActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContextualAnimActorPreviewData, PreviewActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewActorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewProp_PreviewActorClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
		nullptr,
		&NewStructOps,
		"ContextualAnimActorPreviewData",
		sizeof(FContextualAnimActorPreviewData),
		alignof(FContextualAnimActorPreviewData),
		Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimActorPreviewData()
	{
		if (!Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.InnerSingleton, Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData.InnerSingleton;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execQuery)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_STRUCT_REF(FContextualAnimQueryResult,Z_Param_Out_OutResult);
		P_GET_STRUCT_REF(FContextualAnimQueryParams,Z_Param_Out_QueryParams);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Query(Z_Param_Role,Z_Param_Out_OutResult,Z_Param_Out_QueryParams,Z_Param_Out_ToWorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execBP_GetStartAndEndTimeForWarpSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimSetIdx);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpSectionName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutStartTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_GetStartAndEndTimeForWarpSection(Z_Param_SectionIdx,Z_Param_AnimSetIdx,Z_Param_Role,Z_Param_WarpSectionName,Z_Param_Out_OutStartTime,Z_Param_Out_OutEndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execBP_GetIKTargetTransformForRoleAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimSetIdx);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->BP_GetIKTargetTransformForRoleAtTime(Z_Param_SectionIdx,Z_Param_AnimSetIdx,Z_Param_Role,Z_Param_TrackName,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execBP_GetAlignmentTransformForRoleRelativeToPivot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimSetIdx);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->BP_GetAlignmentTransformForRoleRelativeToPivot(Z_Param_SectionIdx,Z_Param_AnimSetIdx,Z_Param_Role,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execBP_FindAnimSetIndexByAnimation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BP_FindAnimSetIndexByAnimation(Z_Param_SectionIdx,Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execBP_FindAnimationForRole)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimSetIdx);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->BP_FindAnimationForRole(Z_Param_SectionIdx,Z_Param_AnimSetIdx,Z_Param_Role);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria)
	{
		P_GET_ENUM(EContextualAnimPointType,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_Primary);
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_Querier);
		P_GET_ENUM(EContextualAnimCriterionToConsider,Z_Param_CriterionToConsider);
		P_GET_TARRAY_REF(FContextualAnimPoint,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType(Z_Param_Type),Z_Param_SectionIdx,Z_Param_Out_Primary,Z_Param_Out_Querier,EContextualAnimCriterionToConsider(Z_Param_CriterionToConsider),Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execGetAlignmentPointsForSecondaryRole)
	{
		P_GET_ENUM(EContextualAnimPointType,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIdx);
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_Primary);
		P_GET_TARRAY_REF(FContextualAnimPoint,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAlignmentPointsForSecondaryRole(EContextualAnimPointType(Z_Param_Type),Z_Param_SectionIdx,Z_Param_Out_Primary,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneAsset::execGetRoles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetRoles();
		P_NATIVE_END;
	}
	void UContextualAnimSceneAsset::StaticRegisterNativesUContextualAnimSceneAsset()
	{
		UClass* Class = UContextualAnimSceneAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_FindAnimationForRole", &UContextualAnimSceneAsset::execBP_FindAnimationForRole },
			{ "BP_FindAnimSetIndexByAnimation", &UContextualAnimSceneAsset::execBP_FindAnimSetIndexByAnimation },
			{ "BP_GetAlignmentTransformForRoleRelativeToPivot", &UContextualAnimSceneAsset::execBP_GetAlignmentTransformForRoleRelativeToPivot },
			{ "BP_GetIKTargetTransformForRoleAtTime", &UContextualAnimSceneAsset::execBP_GetIKTargetTransformForRoleAtTime },
			{ "BP_GetStartAndEndTimeForWarpSection", &UContextualAnimSceneAsset::execBP_GetStartAndEndTimeForWarpSection },
			{ "GetAlignmentPointsForSecondaryRole", &UContextualAnimSceneAsset::execGetAlignmentPointsForSecondaryRole },
			{ "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria", &UContextualAnimSceneAsset::execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria },
			{ "GetRoles", &UContextualAnimSceneAsset::execGetRoles },
			{ "Query", &UContextualAnimSceneAsset::execQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics
	{
		struct ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms
		{
			int32 SectionIdx;
			int32 AnimSetIdx;
			FName Role;
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms, AnimSetIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "Comment", "// Blueprint Interface\n//------------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "Find Animation For Role" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Blueprint Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "BP_FindAnimationForRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::ContextualAnimSceneAsset_eventBP_FindAnimationForRole_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics
	{
		struct ContextualAnimSceneAsset_eventBP_FindAnimSetIndexByAnimation_Parms
		{
			int32 SectionIdx;
			const UAnimSequenceBase* Animation;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimSetIndexByAnimation_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimSetIndexByAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_FindAnimSetIndexByAnimation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Find AnimSet Index By Animation" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "BP_FindAnimSetIndexByAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::ContextualAnimSceneAsset_eventBP_FindAnimSetIndexByAnimation_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics
	{
		struct ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms
		{
			int32 SectionIdx;
			int32 AnimSetIdx;
			FName Role;
			float Time;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms, AnimSetIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Get Alignment Transform For Role Relative To Pivot" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "BP_GetAlignmentTransformForRoleRelativeToPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::ContextualAnimSceneAsset_eventBP_GetAlignmentTransformForRoleRelativeToPivot_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics
	{
		struct ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms
		{
			int32 SectionIdx;
			int32 AnimSetIdx;
			FName Role;
			FName TrackName;
			float Time;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, AnimSetIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, TrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Get IK Target Transform For Role At Time" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "BP_GetIKTargetTransformForRoleAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::ContextualAnimSceneAsset_eventBP_GetIKTargetTransformForRoleAtTime_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics
	{
		struct ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms
		{
			int32 SectionIdx;
			int32 AnimSetIdx;
			FName Role;
			FName WarpSectionName;
			float OutStartTime;
			float OutEndTime;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpSectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, AnimSetIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_WarpSectionName = { "WarpSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, WarpSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_OutStartTime = { "OutStartTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, OutStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_OutEndTime = { "OutEndTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms, OutEndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_WarpSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_OutStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::NewProp_OutEndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Get Start and End Time For Warp Section" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "BP_GetStartAndEndTimeForWarpSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::ContextualAnimSceneAsset_eventBP_GetStartAndEndTimeForWarpSection_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics
	{
		struct ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms
		{
			EContextualAnimPointType Type;
			int32 SectionIdx;
			FContextualAnimSceneBindingContext Primary;
			TArray<FContextualAnimPoint> OutResult;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms, Type), Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType, METADATA_PARAMS(nullptr, 0) }; // 1475866511
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Primary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms, Primary), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Primary_MetaData)) }; // 2634761810
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimPoint, METADATA_PARAMS(nullptr, 0) }; // 1525165999
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1525165999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "GetAlignmentPointsForSecondaryRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRole_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics
	{
		struct ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms
		{
			EContextualAnimPointType Type;
			int32 SectionIdx;
			FContextualAnimSceneBindingContext Primary;
			FContextualAnimSceneBindingContext Querier;
			EContextualAnimCriterionToConsider CriterionToConsider;
			TArray<FContextualAnimPoint> OutResult;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Querier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Querier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CriterionToConsider_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CriterionToConsider;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, Type), Z_Construct_UEnum_ContextualAnimation_EContextualAnimPointType, METADATA_PARAMS(nullptr, 0) }; // 1475866511
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Primary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, Primary), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Primary_MetaData)) }; // 2634761810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Querier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, Querier), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Querier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Querier_MetaData)) }; // 2634761810
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_CriterionToConsider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_CriterionToConsider = { "CriterionToConsider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, CriterionToConsider), Z_Construct_UEnum_ContextualAnimation_EContextualAnimCriterionToConsider, METADATA_PARAMS(nullptr, 0) }; // 925458372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimPoint, METADATA_PARAMS(nullptr, 0) }; // 1525165999
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1525165999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_Querier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_CriterionToConsider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_CriterionToConsider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::ContextualAnimSceneAsset_eventGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics
	{
		struct ContextualAnimSceneAsset_eventGetRoles_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventGetRoles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "GetRoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::ContextualAnimSceneAsset_eventGetRoles_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics
	{
		struct ContextualAnimSceneAsset_eventQuery_Parms
		{
			FName Role;
			FContextualAnimQueryResult OutResult;
			FContextualAnimQueryParams QueryParams;
			FTransform ToWorldTransform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToWorldTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventQuery_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventQuery_Parms, OutResult), Z_Construct_UScriptStruct_FContextualAnimQueryResult, METADATA_PARAMS(nullptr, 0) }; // 3080381883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_QueryParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventQuery_Parms, QueryParams), Z_Construct_UScriptStruct_FContextualAnimQueryParams, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_QueryParams_MetaData)) }; // 4033710884
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ToWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ToWorldTransform = { "ToWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneAsset_eventQuery_Parms, ToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ToWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ToWorldTransform_MetaData)) };
	void Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimSceneAsset_eventQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSceneAsset_eventQuery_Parms), &Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_QueryParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ToWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "Comment", "//@TODO: Kept around only to do not break existing content. It will go away in the future.\n" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "@TODO: Kept around only to do not break existing content. It will go away in the future." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneAsset, nullptr, "Query", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::ContextualAnimSceneAsset_eventQuery_Parms), Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneAsset_Query()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneAsset_Query_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSceneAsset);
	UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister()
	{
		return UContextualAnimSceneAsset::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RolesAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RolesAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrimaryRole;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverridePreviewData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePreviewData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridePreviewData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SceneInstanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollisionBetweenActors_MetaData[];
#endif
		static void NewProp_bDisableCollisionBetweenActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollisionBetweenActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSceneAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimSceneAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimationForRole, "BP_FindAnimationForRole" }, // 428155156
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_BP_FindAnimSetIndexByAnimation, "BP_FindAnimSetIndexByAnimation" }, // 1724220629
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetAlignmentTransformForRoleRelativeToPivot, "BP_GetAlignmentTransformForRoleRelativeToPivot" }, // 2160779775
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetIKTargetTransformForRoleAtTime, "BP_GetIKTargetTransformForRoleAtTime" }, // 2914537545
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_BP_GetStartAndEndTimeForWarpSection, "BP_GetStartAndEndTimeForWarpSection" }, // 1823510593
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRole, "GetAlignmentPointsForSecondaryRole" }, // 3362708775
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria, "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria" }, // 47581840
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_GetRoles, "GetRoles" }, // 1930387490
		{ &Z_Construct_UFunction_UContextualAnimSceneAsset_Query, "Query" }, // 1292210913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ContextualAnimSceneAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_RolesAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_RolesAsset = { "RolesAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, RolesAsset), Z_Construct_UClass_UContextualAnimRolesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_RolesAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_RolesAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_PrimaryRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "GetOptions", "GetRoles" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_PrimaryRole = { "PrimaryRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, PrimaryRole), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_PrimaryRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_PrimaryRole_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData_Inner = { "OverridePreviewData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimActorPreviewData, METADATA_PARAMS(nullptr, 0) }; // 2917797008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "TitleProperty", "Role" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData = { "OverridePreviewData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, OverridePreviewData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData_MetaData)) }; // 2917797008
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimSceneSection, METADATA_PARAMS(nullptr, 0) }; // 2439713505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections_MetaData)) }; // 2439713505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, Radius), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SceneInstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SceneInstanceClass = { "SceneInstanceClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, SceneInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SceneInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SceneInstanceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
	};
#endif
	void Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors_SetBit(void* Obj)
	{
		((UContextualAnimSceneAsset*)Obj)->bDisableCollisionBetweenActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors = { "bDisableCollisionBetweenActors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextualAnimSceneAsset), &Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "60" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sample rate (frames per second) used when sampling the animations to generate alignment and IK tracks */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneAsset.h" },
		{ "ToolTip", "Sample rate (frames per second) used when sampling the animations to generate alignment and IK tracks" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneAsset, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSceneAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_RolesAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_PrimaryRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_OverridePreviewData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SceneInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_bDisableCollisionBetweenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneAsset_Statics::NewProp_SampleRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSceneAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSceneAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSceneAsset_Statics::ClassParams = {
		&UContextualAnimSceneAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualAnimSceneAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSceneAsset()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSceneAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSceneAsset.OuterSingleton, Z_Construct_UClass_UContextualAnimSceneAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSceneAsset.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSceneAsset>()
	{
		return UContextualAnimSceneAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSceneAsset);
	UContextualAnimSceneAsset::~UContextualAnimSceneAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::EnumInfo[] = {
		{ EContextualAnimPointType_StaticEnum, TEXT("EContextualAnimPointType"), &Z_Registration_Info_UEnum_EContextualAnimPointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1475866511U) },
		{ EContextualAnimCriterionToConsider_StaticEnum, TEXT("EContextualAnimCriterionToConsider"), &Z_Registration_Info_UEnum_EContextualAnimCriterionToConsider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 925458372U) },
		{ EContextualAnimActorPreviewType_StaticEnum, TEXT("EContextualAnimActorPreviewType"), &Z_Registration_Info_UEnum_EContextualAnimActorPreviewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3708743215U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ScriptStructInfo[] = {
		{ FContextualAnimSet::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimSet_Statics::NewStructOps, TEXT("ContextualAnimSet"), &Z_Registration_Info_UScriptStruct_ContextualAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimSet), 1339379515U) },
		{ FContextualAnimSceneSection::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics::NewStructOps, TEXT("ContextualAnimSceneSection"), &Z_Registration_Info_UScriptStruct_ContextualAnimSceneSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimSceneSection), 2439713505U) },
		{ FContextualAnimPoint::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimPoint_Statics::NewStructOps, TEXT("ContextualAnimPoint"), &Z_Registration_Info_UScriptStruct_ContextualAnimPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimPoint), 1525165999U) },
		{ FContextualAnimActorPreviewData::StaticStruct, Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics::NewStructOps, TEXT("ContextualAnimActorPreviewData"), &Z_Registration_Info_UScriptStruct_ContextualAnimActorPreviewData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContextualAnimActorPreviewData), 2917797008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimRolesAsset, UContextualAnimRolesAsset::StaticClass, TEXT("UContextualAnimRolesAsset"), &Z_Registration_Info_UClass_UContextualAnimRolesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimRolesAsset), 3557091754U) },
		{ Z_Construct_UClass_UContextualAnimSceneAsset, UContextualAnimSceneAsset::StaticClass, TEXT("UContextualAnimSceneAsset"), &Z_Registration_Info_UClass_UContextualAnimSceneAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSceneAsset), 1385284077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_752036740(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
