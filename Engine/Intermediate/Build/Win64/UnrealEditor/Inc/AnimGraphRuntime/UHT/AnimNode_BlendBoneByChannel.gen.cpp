// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendBoneByChannel.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendBoneByChannel() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry;
class UScriptStruct* FBlendBoneByChannelEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendBoneByChannelEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendBoneByChannelEntry>()
{
	return FBlendBoneByChannelEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendTranslation_MetaData[];
#endif
		static void NewProp_bBlendTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRotation_MetaData[];
#endif
		static void NewProp_bBlendRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendScale_MetaData[];
#endif
		static void NewProp_bBlendScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Bone to take Transform from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to take Transform from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendBoneByChannelEntry, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Bone to apply Transform to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to apply Transform to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendBoneByChannelEntry, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Translation from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Translation from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation = { "bBlendTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Rotation from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Rotation from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation = { "bBlendRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Scale from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Scale from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale = { "bBlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"BlendBoneByChannelEntry",
		sizeof(FBlendBoneByChannelEntry),
		alignof(FBlendBoneByChannelEntry),
		Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendBoneByChannel>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendBoneByChannel cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel;
class UScriptStruct* FAnimNode_BlendBoneByChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendBoneByChannel"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendBoneByChannel>()
{
	return FAnimNode_BlendBoneByChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformsSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformsSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData)) }; // 2393943538
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, METADATA_PARAMS(nullptr, 0) }; // 233409746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData[] = {
		{ "Category", "Blend" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, BoneDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData)) }; // 233409746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "B" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Space to convert transforms into prior to copying channels */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying channels" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace = { "TransformsSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, TransformsSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData)) }; // 793580878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_BlendBoneByChannel",
		sizeof(FAnimNode_BlendBoneByChannel),
		alignof(FAnimNode_BlendBoneByChannel),
		Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics::ScriptStructInfo[] = {
		{ FBlendBoneByChannelEntry::StaticStruct, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewStructOps, TEXT("BlendBoneByChannelEntry"), &Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendBoneByChannelEntry), 233409746U) },
		{ FAnimNode_BlendBoneByChannel::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewStructOps, TEXT("AnimNode_BlendBoneByChannel"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendBoneByChannel), 1733339711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_743233654(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
