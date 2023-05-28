// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_ControlRig.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ControlRig>() == std::is_polymorphic<FAnimNode_ControlRigBase>(), "USTRUCT FAnimNode_ControlRig cannot be polymorphic unless super FAnimNode_ControlRigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ControlRig;
class UScriptStruct* FAnimNode_ControlRig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimNode_ControlRig"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimNode_ControlRig>()
{
	return FAnimNode_ControlRig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetRefPoseFromSkeleton_MetaData[];
#endif
		static void NewProp_bSetRefPoseFromSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetRefPoseFromSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputMapping;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows animation ControlRig output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "ToolTip", "Animation node that allows animation ControlRig output to be used in an animation graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ControlRig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRigClass_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "Comment", "/** Cached ControlRig */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "ToolTip", "Cached ControlRig" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRigClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// alpha value handler\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "alpha value handler" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_ControlRig*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_ControlRig), &Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Override the initial transforms with those taken from the mesh component\n" },
		{ "DisplayName", "Set Initial Transforms From Mesh" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "ToolTip", "Override the initial transforms with those taken from the mesh component" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_SetBit(void* Obj)
	{
		((FAnimNode_ControlRig*)Obj)->bSetRefPoseFromSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton = { "bSetRefPoseFromSkeleton", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_ControlRig), &Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 3565619021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 1479025939
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_ValueProp = { "InputMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_Key_KeyProp = { "InputMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Comment", "// we only save mapping, \n// we have to query control rig when runtime \n// to ensure type and everything is still valid or not\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "ToolTip", "we only save mapping,\nwe have to query control rig when runtime\nto ensure type and everything is still valid or not" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, InputMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_ValueProp = { "OutputMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_Key_KeyProp = { "OutputMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping = { "OutputMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, OutputMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bAlphaBoolEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_bSetRefPoseFromSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_AlphaScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_OutputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewProp_LODThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimNode_ControlRigBase,
		&NewStructOps,
		"AnimNode_ControlRig",
		sizeof(FAnimNode_ControlRig),
		alignof(FAnimNode_ControlRig),
		Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ControlRig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ControlRig::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ControlRig_Statics::NewStructOps, TEXT("AnimNode_ControlRig"), &Z_Registration_Info_UScriptStruct_AnimNode_ControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ControlRig), 3330671004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h_849903282(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
