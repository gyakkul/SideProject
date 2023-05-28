// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_RotationMultiplier.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotationMultiplier() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RotationMultiplier>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_RotationMultiplier cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier;
class UScriptStruct* FAnimNode_RotationMultiplier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotationMultiplier"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RotationMultiplier>()
{
	return FAnimNode_RotationMultiplier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxisToRefer_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAxisToRefer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[];
#endif
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that multiplies scalar value to the translation/rotation/scale of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Simple controller that multiplies scalar value to the translation/rotation/scale of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotationMultiplier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "Comment", "/** Source to get transform from */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Source to get transform from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "Comment", "// To make these to be easily pin-hookable, I'm not making it struct, but each variable\n// 0.f is invalid, and default\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "To make these to be easily pin-hookable, I'm not making it struct, but each variable\n0.f is invalid, and default" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer = { "RotationAxisToRefer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, RotationAxisToRefer), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData)) }; // 906799129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((FAnimNode_RotationMultiplier*)Obj)->bIsAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RotationMultiplier), &Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RotationMultiplier",
		sizeof(FAnimNode_RotationMultiplier),
		alignof(FAnimNode_RotationMultiplier),
		Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RotationMultiplier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RotationMultiplier_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RotationMultiplier::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewStructOps, TEXT("AnimNode_RotationMultiplier"), &Z_Registration_Info_UScriptStruct_AnimNode_RotationMultiplier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RotationMultiplier), 849439436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RotationMultiplier_h_2893216426(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RotationMultiplier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RotationMultiplier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
