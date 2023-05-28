// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_CopyBone.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_CopyBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_CopyBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CopyBone;
class UScriptStruct* FAnimNode_CopyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CopyBone>()
{
	return FAnimNode_CopyBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[];
#endif
		static void NewProp_bCopyTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[];
#endif
		static void NewProp_bCopyRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[];
#endif
		static void NewProp_bCopyScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller to copy a bone's transform to another one.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Source Bone Name to get transform from */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Source Bone Name to get transform from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Translation should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Translation should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation = { "bCopyTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Rotation should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Rotation should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation = { "bCopyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If Scale should be copied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Scale should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale = { "bCopyScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** Space to convert transforms into prior to copying components */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying components" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace = { "ControlSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CopyBone, ControlSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData)) }; // 793580878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CopyBone",
		sizeof(FAnimNode_CopyBone),
		alignof(FAnimNode_CopyBone),
		Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_CopyBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_CopyBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewStructOps, TEXT("AnimNode_CopyBone"), &Z_Registration_Info_UScriptStruct_AnimNode_CopyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CopyBone), 2274343546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_4078624821(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
