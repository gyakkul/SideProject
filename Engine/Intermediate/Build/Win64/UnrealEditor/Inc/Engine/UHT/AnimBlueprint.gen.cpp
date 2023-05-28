// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGroupInfo;
class UScriptStruct* FAnimGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGroupInfo>()
{
	return FAnimGroupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGroupInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimGroupInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGroupInfo",
		sizeof(FAnimGroupInfo),
		alignof(FAnimGroupInfo),
		Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride;
class UScriptStruct* FAnimParentNodeAssetOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimParentNodeAssetOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimParentNodeAssetOverride>()
{
	return FAnimParentNodeAssetOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentNodeGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimParentNodeAssetOverride, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid = { "ParentNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimParentNodeAssetOverride, ParentNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimParentNodeAssetOverride",
		sizeof(FAnimParentNodeAssetOverride),
		alignof(FAnimParentNodeAssetOverride),
		Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod;
	static UEnum* EPreviewAnimationBlueprintApplicationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPreviewAnimationBlueprintApplicationMethod"));
		}
		return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPreviewAnimationBlueprintApplicationMethod>()
	{
		return EPreviewAnimationBlueprintApplicationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enumerators[] = {
		{ "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedLayers },
		{ "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The method by which a preview animation blueprint is applied */" },
		{ "LinkedAnimGraph.Comment", "/** Apply the preview animation blueprint using SetLinkedAnimGraphByTag */" },
		{ "LinkedAnimGraph.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph" },
		{ "LinkedAnimGraph.ToolTip", "Apply the preview animation blueprint using SetLinkedAnimGraphByTag" },
		{ "LinkedLayers.Comment", "/** Apply the preview animation blueprint using LinkAnimClassLayers */" },
		{ "LinkedLayers.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers" },
		{ "LinkedLayers.ToolTip", "Apply the preview animation blueprint using LinkAnimClassLayers" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPreviewAnimationBlueprintApplicationMethod",
		"EPreviewAnimationBlueprintApplicationMethod",
		Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod()
	{
		if (!Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton;
	}
	void UAnimBlueprint::StaticRegisterNativesUAnimBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprint);
	UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister()
	{
		return UAnimBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplate_MetaData[];
#endif
		static void NewProp_bIsTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[];
#endif
		static void NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutBlueprintUsage_MetaData[];
#endif
		static void NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutBlueprintUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData[];
#endif
		static void NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLinkedAnimLayerInstanceSharing;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentAssetOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentAssetOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentAssetOverrides;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseWatchFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseWatchFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseWatchFolders;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseWatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseWatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseWatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAnimationBlueprint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewAnimationBlueprintTag;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\n * It can perform blending of animations, directly control the bones of the skeleton, and output a final pose\n * for a Skeletal Mesh each frame.\n */" },
		{ "IncludePath", "Animation/AnimBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\nIt can perform blending of animations, directly control the bones of the skeleton, and output a final pose\nfor a Skeletal Mesh each frame." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/**\n\x09 * This is the target skeleton asset for anim instances created from this blueprint; all animations\n\x09 * referenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\n\x09 * to cause errors if this is modified without updating or replacing all referenced animations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "This is the target skeleton asset for anim instances created from this blueprint; all animations\nreferenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\nto cause errors if this is modified without updating or replacing all referenced animations." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0014050000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimGroupInfo, METADATA_PARAMS(nullptr, 0) }; // 2692326272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "// List of animation sync groups\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "List of animation sync groups" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_MetaData)) }; // 2692326272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_MetaData[] = {
		{ "Comment", "// This is an anim blueprint that acts as a set of template functionality without being tied to a specific skeleton.\n// Implies a null TargetSkeleton.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "This is an anim blueprint that acts as a set of template functionality without being tied to a specific skeleton.\nImplies a null TargetSkeleton." },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bIsTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate = { "bIsTemplate", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\n\x09 * a worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\n\x09 * For updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded \n\x09 * Animation Update\" should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\na worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bUseMultiThreadedAnimationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate = { "bUseMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\n\x09 * is made from the animation graph. This can help track down optimizations that need to be made.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\nis made from the animation graph. This can help track down optimizations that need to be made." },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bWarnAboutBlueprintUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage = { "bWarnAboutBlueprintUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, linked animation layers will be instantiated only once per AnimClass instead of once per AnimInstance, AnimClass and AnimGroup.\n\x09""Extra instances will be created if two or more active anim graph override the same layer Function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "If true, linked animation layers will be instantiated only once per AnimClass instead of once per AnimInstance, AnimClass and AnimGroup.\n      Extra instances will be created if two or more active anim graph override the same layer Function" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit(void* Obj)
	{
		((UAnimBlueprint*)Obj)->bEnableLinkedAnimLayerInstanceSharing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing = { "bEnableLinkedAnimLayerInstanceSharing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, METADATA_PARAMS(nullptr, 0) }; // 2930241301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData[] = {
		{ "Comment", "// Array of overrides to asset containing nodes in the parent that have been overridden\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of overrides to asset containing nodes in the parent that have been overridden" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, ParentAssetOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_MetaData)) }; // 2930241301
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_Inner = { "PoseWatchFolders", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_MetaData[] = {
		{ "Comment", "// Array of active pose watches (pose watches allows us to see the bone pose at a \n// particular point of the anim graph and control debug draw for unselected anim nodes).\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of active pose watches (pose watches allows us to see the bone pose at a\nparticular point of the anim graph and control debug draw for unselected anim nodes)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders = { "PoseWatchFolders", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PoseWatchFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner = { "PoseWatches", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches = { "PoseWatches", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PoseWatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData[] = {
		{ "Comment", "/** \n\x09 * An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint. \n\x09 * Setting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint.\nSetting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint = { "PreviewAnimationBlueprint", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData[] = {
		{ "Comment", "/** The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod = { "PreviewAnimationBlueprintApplicationMethod", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintApplicationMethod), Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData)) }; // 3755832417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData[] = {
		{ "Comment", "/** The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag = { "PreviewAnimationBlueprintTag", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintTag), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprint, IInterface_PreviewMeshProvider), false },  // 3026411520
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams = {
		&UAnimBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprint()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton, Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimBlueprint>()
	{
		return UAnimBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprint);
	UAnimBlueprint::~UAnimBlueprint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::EnumInfo[] = {
		{ EPreviewAnimationBlueprintApplicationMethod_StaticEnum, TEXT("EPreviewAnimationBlueprintApplicationMethod"), &Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3755832417U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ScriptStructInfo[] = {
		{ FAnimGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewStructOps, TEXT("AnimGroupInfo"), &Z_Registration_Info_UScriptStruct_AnimGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGroupInfo), 2692326272U) },
		{ FAnimParentNodeAssetOverride::StaticStruct, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewStructOps, TEXT("AnimParentNodeAssetOverride"), &Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimParentNodeAssetOverride), 2930241301U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprint, UAnimBlueprint::StaticClass, TEXT("UAnimBlueprint"), &Z_Registration_Info_UClass_UAnimBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprint), 1217017434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_3041320218(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
