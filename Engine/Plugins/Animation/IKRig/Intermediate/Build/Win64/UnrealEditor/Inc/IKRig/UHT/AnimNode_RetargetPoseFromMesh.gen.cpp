// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_RetargetPoseFromMesh.h"
#include "Retargeter/IKRetargetProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RetargetPoseFromMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RetargetPoseFromMesh>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RetargetPoseFromMesh cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh;
class UScriptStruct* FAnimNode_RetargetPoseFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("AnimNode_RetargetPoseFromMesh"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FAnimNode_RetargetPoseFromMesh>()
{
	return FAnimNode_RetargetPoseFromMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRetargeterAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IKRetargeterAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRetargetProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressWarnings_MetaData[];
#endif
		static void NewProp_bSuppressWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyCurves_MetaData[];
#endif
		static void NewProp_bCopyCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Processor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Processor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RetargetPoseFromMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Skeletal Mesh Component to retarget animation from. Assumed to be animated and tick BEFORE this anim instance." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FAnimNode_RetargetPoseFromMesh*)Obj)->bUseAttachedParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Retarget asset to use. Must define a Source and Target IK Rig compatible with the SourceMeshComponent and current anim instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset = { "IKRetargeterAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, IKRetargeterAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** connect a custom retarget profile to modify the retargeter's settings at runtime.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "connect a custom retarget profile to modify the retargeter's settings at runtime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile = { "CustomRetargetProfile", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, CustomRetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile_MetaData)) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Toggle whether to print warnings about missing or incorrectly configured retarget configurations. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Toggle whether to print warnings about missing or incorrectly configured retarget configurations." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_SetBit(void* Obj)
	{
		((FAnimNode_RetargetPoseFromMesh*)Obj)->bSuppressWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings = { "bSuppressWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Copy curves from SouceMeshComponent. This will copy any curves the source/target Skeleton have in common. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy curves from SouceMeshComponent. This will copy any curves the source/target Skeleton have in common." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit(void* Obj)
	{
		((FAnimNode_RetargetPoseFromMesh*)Obj)->bCopyCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves = { "bCopyCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RetargetPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor_MetaData[] = {
		{ "Comment", "/** the runtime processor used to run the retarget and generate new poses */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RetargetPoseFromMesh.h" },
		{ "ToolTip", "the runtime processor used to run the retarget and generate new poses" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor = { "Processor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RetargetPoseFromMesh, Processor), Z_Construct_UClass_UIKRetargetProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bUseAttachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_IKRetargeterAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_CustomRetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bSuppressWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_bCopyCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewProp_Processor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RetargetPoseFromMesh",
		sizeof(FAnimNode_RetargetPoseFromMesh),
		alignof(FAnimNode_RetargetPoseFromMesh),
		Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RetargetPoseFromMesh::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh_Statics::NewStructOps, TEXT("AnimNode_RetargetPoseFromMesh"), &Z_Registration_Info_UScriptStruct_AnimNode_RetargetPoseFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RetargetPoseFromMesh), 3302480198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_2083361633(TEXT("/Script/IKRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_RetargetPoseFromMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
