// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_ScaleChainLength.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ScaleChainLength() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScaleChainInitialLength;
	static UEnum* EScaleChainInitialLength_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EScaleChainInitialLength"));
		}
		return Z_Registration_Info_UEnum_EScaleChainInitialLength.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EScaleChainInitialLength>()
	{
		return EScaleChainInitialLength_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enumerators[] = {
		{ "EScaleChainInitialLength::FixedDefaultLengthValue", (int64)EScaleChainInitialLength::FixedDefaultLengthValue },
		{ "EScaleChainInitialLength::Distance", (int64)EScaleChainInitialLength::Distance },
		{ "EScaleChainInitialLength::ChainLength", (int64)EScaleChainInitialLength::ChainLength },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChainLength.Comment", "/* Use animated chain length (length in local space of every bone from 'ChainStartBone' to 'ChainEndBone' */" },
		{ "ChainLength.Name", "EScaleChainInitialLength::ChainLength" },
		{ "ChainLength.ToolTip", "Use animated chain length (length in local space of every bone from 'ChainStartBone' to 'ChainEndBone'" },
		{ "Distance.Comment", "/** Use distance between 'ChainStartBone' and 'ChainEndBone' (in Component Space) */" },
		{ "Distance.Name", "EScaleChainInitialLength::Distance" },
		{ "Distance.ToolTip", "Use distance between 'ChainStartBone' and 'ChainEndBone' (in Component Space)" },
		{ "FixedDefaultLengthValue.Comment", "/** Use the 'DefaultChainLength' input value. */" },
		{ "FixedDefaultLengthValue.Name", "EScaleChainInitialLength::FixedDefaultLengthValue" },
		{ "FixedDefaultLengthValue.ToolTip", "Use the 'DefaultChainLength' input value." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EScaleChainInitialLength",
		"EScaleChainInitialLength",
		Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength()
	{
		if (!Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScaleChainInitialLength.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ScaleChainLength>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ScaleChainLength cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength;
class UScriptStruct* FAnimNode_ScaleChainLength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ScaleChainLength"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ScaleChainLength>()
{
	return FAnimNode_ScaleChainLength::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChainLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultChainLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainStartBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainStartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainEndBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainEndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChainInitialLength_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainInitialLength_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChainInitialLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Scale the length of a chain of bones.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "ToolTip", "Scale the length of a chain of bones." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ScaleChainLength>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "Comment", "/** Default chain length, as animated. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Default chain length, as animated." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength = { "DefaultChainLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, DefaultChainLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone = { "ChainStartBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainStartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone = { "ChainEndBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainEndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength = { "ChainInitialLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainInitialLength), Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData)) }; // 2258724790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ScaleChainLength",
		sizeof(FAnimNode_ScaleChainLength),
		alignof(FAnimNode_ScaleChainLength),
		Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::EnumInfo[] = {
		{ EScaleChainInitialLength_StaticEnum, TEXT("EScaleChainInitialLength"), &Z_Registration_Info_UEnum_EScaleChainInitialLength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2258724790U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ScaleChainLength::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewStructOps, TEXT("AnimNode_ScaleChainLength"), &Z_Registration_Info_UScriptStruct_AnimNode_ScaleChainLength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ScaleChainLength), 510148354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_2300802217(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
