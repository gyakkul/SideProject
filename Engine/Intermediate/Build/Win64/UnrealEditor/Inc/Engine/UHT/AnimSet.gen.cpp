// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSet_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup;
class UScriptStruct* FAnimSetMeshLinkup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSetMeshLinkup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSetMeshLinkup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSetMeshLinkup>()
{
	return FAnimSetMeshLinkup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneToTrackTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToTrackTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneToTrackTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSetMeshLinkup>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData[] = {
		{ "Comment", "/** \n\x09 * Mapping table. Size must be same as size of SkelMesh reference skeleton. \n\x09 * No index should be more than the number of tracks in this AnimSet.\n\x09 * -1 indicates no track for this bone - will use reference pose instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of SkelMesh reference skeleton.\nNo index should be more than the number of tracks in this AnimSet.\n-1 indicates no track for this bone - will use reference pose instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSetMeshLinkup, BoneToTrackTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSetMeshLinkup",
		sizeof(FAnimSetMeshLinkup),
		alignof(FAnimSetMeshLinkup),
		Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton, Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton;
	}
	void UAnimSet::StaticRegisterNativesUAnimSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSet);
	UClass* Z_Construct_UClass_UAnimSet_NoRegister()
	{
		return UAnimSet::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimRotationOnly_MetaData[];
#endif
		static void NewProp_bAnimRotationOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimRotationOnly;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackBoneNames;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkupCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkupCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkupCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneUseAnimTranslation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneUseAnimTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneUseAnimTranslation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceUseMeshTranslation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceUseMeshTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ForceUseMeshTranslation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UseTranslationBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseTranslationBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UseTranslationBoneNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ForceMeshTranslationBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMeshTranslationBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ForceMeshTranslationBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkelMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewSkelMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestRatioSkelMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BestRatioSkelMeshName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimSet.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** \n\x09 *\x09Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose. \n\x09 *\x09Note that the root bone always takes translation from the animation, even if this flag is set.\n\x09 *\x09You can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose.\nNote that the root bone always takes translation from the animation, even if this flag is set.\nYou can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set." },
	};
#endif
	void Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit(void* Obj)
	{
		((UAnimSet*)Obj)->bAnimRotationOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly = { "bAnimRotationOnly", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimSet), &Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData[] = {
		{ "Comment", "/** Bone name that each track relates to. TrackBoneName.Num() == Number of tracks. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Bone name that each track relates to. TrackBoneName.Num() == Number of tracks." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, TrackBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData[] = {
		{ "Comment", "/** Actual animation sequence information. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Actual animation sequence information." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner = { "LinkupCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSetMeshLinkup, METADATA_PARAMS(nullptr, 0) }; // 478445015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData[] = {
		{ "Comment", "/** Non-serialised cache of linkups between different skeletal meshes and this AnimSet. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Non-serialised cache of linkups between different skeletal meshes and this AnimSet. // Do not change private - they will go away" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache = { "LinkupCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, LinkupCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_MetaData)) }; // 478445015
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\n\x09 *\x09This is basically a cooked down version of UseTranslationBoneNames for speed.\n\x09 *\x09Size matches the number of tracks.\n\x09 */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\nThis is basically a cooked down version of UseTranslationBoneNames for speed.\nSize matches the number of tracks.\n   // Do not change private - they will go away" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, BoneUseAnimTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData[] = {
		{ "Comment", "/** Cooked down version of ForceMeshTranslationBoneNames */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Cooked down version of ForceMeshTranslationBoneNames // Do not change private - they will go away" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, ForceUseMeshTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** Names of bones that should use translation from the animation, if bAnimRotationOnly is set. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Names of bones that should use translation from the animation, if bAnimRotationOnly is set. // Do not change private - they will go away" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, UseTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** List of bones which are ALWAYS going to use their translation from the mesh and not the animation. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "List of bones which are ALWAYS going to use their translation from the mesh and not the animation. // Do not change private - they will go away" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, ForceMeshTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData[] = {
		{ "Comment", "/** In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName = { "PreviewSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, PreviewSkelMeshName), METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData[] = {
		{ "Comment", "/** Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName = { "BestRatioSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSet, BestRatioSkelMeshName), METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSet_Statics::ClassParams = {
		&UAnimSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSet()
	{
		if (!Z_Registration_Info_UClass_UAnimSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSet.OuterSingleton, Z_Construct_UClass_UAnimSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSet.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimSet>()
	{
		return UAnimSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSet);
	UAnimSet::~UAnimSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ScriptStructInfo[] = {
		{ FAnimSetMeshLinkup::StaticStruct, Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewStructOps, TEXT("AnimSetMeshLinkup"), &Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSetMeshLinkup), 478445015U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSet, UAnimSet::StaticClass, TEXT("UAnimSet"), &Z_Registration_Info_UClass_UAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSet), 3904820165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_3158641497(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
