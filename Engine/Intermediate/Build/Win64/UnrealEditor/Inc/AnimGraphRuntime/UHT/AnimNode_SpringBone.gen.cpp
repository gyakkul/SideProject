// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_SpringBone.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SpringBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SpringBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_SpringBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SpringBone;
class UScriptStruct* FAnimNode_SpringBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SpringBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SpringBone>()
{
	return FAnimNode_SpringBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorResetThresh_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorResetThresh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoZSpring_MetaData[];
#endif
		static void NewProp_bNoZSpring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoZSpring;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitDisplacement_MetaData[];
#endif
		static void NewProp_bLimitDisplacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateX_MetaData[];
#endif
		static void NewProp_bTranslateX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateY_MetaData[];
#endif
		static void NewProp_bTranslateY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateZ_MetaData[];
#endif
		static void NewProp_bTranslateZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateX_MetaData[];
#endif
		static void NewProp_bRotateX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateY_MetaData[];
#endif
		static void NewProp_bRotateY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateZ_MetaData[];
#endif
		static void NewProp_bRotateZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone = { "SpringBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose. */" },
		{ "EditCondition", "bLimitDisplacement" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement = { "MaxDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, MaxDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Stiffness of spring */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Stiffness of spring" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Damping of spring */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Damping of spring" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If spring stretches more than this, reset it. Useful for catching teleports etc */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If spring stretches more than this, reset it. Useful for catching teleports etc" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh = { "ErrorResetThresh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, ErrorResetThresh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData[] = {
		{ "Comment", "/** If true, Z position is always correct, no spring applied */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true, Z position is always correct, no spring applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bNoZSpring_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring = { "bNoZSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bLimitDisplacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement = { "bLimitDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in X */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX = { "bTranslateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Y */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY = { "bTranslateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Z */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ = { "bTranslateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in X */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX = { "bRotateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Y */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY = { "bRotateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Z */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ = { "bRotateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SpringBone",
		sizeof(FAnimNode_SpringBone),
		alignof(FAnimNode_SpringBone),
		Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SpringBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SpringBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewStructOps, TEXT("AnimNode_SpringBone"), &Z_Registration_Info_UScriptStruct_AnimNode_SpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SpringBone), 4350895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_2253125734(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SpringBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
