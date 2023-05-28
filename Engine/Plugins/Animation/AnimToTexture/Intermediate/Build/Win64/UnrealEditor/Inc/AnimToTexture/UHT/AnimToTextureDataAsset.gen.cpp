// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimToTextureDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimToTextureDataAsset() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	ANIMTOTEXTURE_API UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode();
	ANIMTOTEXTURE_API UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences();
	ANIMTOTEXTURE_API UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInfo();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimToTexture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimToTextureMode;
	static UEnum* EAnimToTextureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimToTextureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("EAnimToTextureMode"));
		}
		return Z_Registration_Info_UEnum_EAnimToTextureMode.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTextureMode>()
	{
		return EAnimToTextureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enumerators[] = {
		{ "EAnimToTextureMode::Vertex", (int64)EAnimToTextureMode::Vertex },
		{ "EAnimToTextureMode::Bone", (int64)EAnimToTextureMode::Bone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bone.Comment", "/* Linear Blending Skinnin */" },
		{ "Bone.Name", "EAnimToTextureMode::Bone" },
		{ "Bone.ToolTip", "Linear Blending Skinnin" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "Vertex.Comment", "/* Position and Normal Per-Vertex */" },
		{ "Vertex.Name", "EAnimToTextureMode::Vertex" },
		{ "Vertex.ToolTip", "Position and Normal Per-Vertex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		"EAnimToTextureMode",
		"EAnimToTextureMode",
		Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimToTextureMode.InnerSingleton, Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimToTextureMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimToTexturePrecision;
	static UEnum* EAnimToTexturePrecision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTexturePrecision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimToTexturePrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("EAnimToTexturePrecision"));
		}
		return Z_Registration_Info_UEnum_EAnimToTexturePrecision.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTexturePrecision>()
	{
		return EAnimToTexturePrecision_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enumerators[] = {
		{ "EAnimToTexturePrecision::EightBits", (int64)EAnimToTexturePrecision::EightBits },
		{ "EAnimToTexturePrecision::SixteenBits", (int64)EAnimToTexturePrecision::SixteenBits },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EightBits.Comment", "/* 8 bits */" },
		{ "EightBits.Name", "EAnimToTexturePrecision::EightBits" },
		{ "EightBits.ToolTip", "8 bits" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "SixteenBits.Comment", "/* 16 bits */" },
		{ "SixteenBits.Name", "EAnimToTexturePrecision::SixteenBits" },
		{ "SixteenBits.ToolTip", "16 bits" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		"EAnimToTexturePrecision",
		"EAnimToTexturePrecision",
		Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTexturePrecision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimToTexturePrecision.InnerSingleton, Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimToTexturePrecision.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences;
	static UEnum* EAnimToTextureNumBoneInfluences_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("EAnimToTextureNumBoneInfluences"));
		}
		return Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UEnum* StaticEnum<EAnimToTextureNumBoneInfluences>()
	{
		return EAnimToTextureNumBoneInfluences_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enumerators[] = {
		{ "EAnimToTextureNumBoneInfluences::One", (int64)EAnimToTextureNumBoneInfluences::One },
		{ "EAnimToTextureNumBoneInfluences::Two", (int64)EAnimToTextureNumBoneInfluences::Two },
		{ "EAnimToTextureNumBoneInfluences::Four", (int64)EAnimToTextureNumBoneInfluences::Four },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Four.Comment", "/* Blend between four influences */" },
		{ "Four.Name", "EAnimToTextureNumBoneInfluences::Four" },
		{ "Four.ToolTip", "Blend between four influences" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "One.Comment", "/* Single bone influence */" },
		{ "One.Name", "EAnimToTextureNumBoneInfluences::One" },
		{ "One.ToolTip", "Single bone influence" },
		{ "Two.Comment", "/* Blend between two influences */" },
		{ "Two.Name", "EAnimToTextureNumBoneInfluences::Two" },
		{ "Two.ToolTip", "Blend between two influences" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		"EAnimToTextureNumBoneInfluences",
		"EAnimToTextureNumBoneInfluences",
		Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences()
	{
		if (!Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.InnerSingleton, Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequenceInfo;
class UScriptStruct* FAnimSequenceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequenceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequenceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceInfo, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimSequenceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequenceInfo.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimSequenceInfo>()
{
	return FAnimSequenceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomRange_MetaData[];
#endif
		static void NewProp_bUseCustomRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FAnimSequenceInfo*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimSequenceInfo), &Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSequenceInfo, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAnimSequenceInfo*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimSequenceInfo), &Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange_SetBit(void* Obj)
	{
		((FAnimSequenceInfo*)Obj)->bUseCustomRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange = { "bUseCustomRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimSequenceInfo), &Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bEnabled && bUseCustomRange" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSequenceInfo, StartFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bEnabled && bUseCustomRange" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSequenceInfo, EndFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_EndFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_bUseCustomRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewProp_EndFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimSequenceInfo",
		sizeof(FAnimSequenceInfo),
		alignof(FAnimSequenceInfo),
		Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSequenceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequenceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSequenceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInfo;
class UScriptStruct* FAnimInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInfo, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInfo.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimInfo>()
{
	return FAnimInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimInfo, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_AnimStart_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_AnimStart = { "AnimStart", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimInfo, AnimStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_AnimStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_AnimStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAnimInfo*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimInfo), &Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_AnimStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInfo_Statics::NewProp_bLooping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimInfo",
		sizeof(FAnimInfo),
		alignof(FAnimInfo),
		Z_Construct_UScriptStruct_FAnimInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execBP_GetBoneWeightTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->BP_GetBoneWeightTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execBP_GetBoneRotationTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->BP_GetBoneRotationTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execBP_GetBonePositionTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->BP_GetBonePositionTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execBP_GetSkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->BP_GetSkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execBP_GetStaticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->BP_GetStaticMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execResetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureDataAsset::execGetIndexFromAnimSequence)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexFromAnimSequence(Z_Param_Sequence);
		P_NATIVE_END;
	}
	void UAnimToTextureDataAsset::StaticRegisterNativesUAnimToTextureDataAsset()
	{
		UClass* Class = UAnimToTextureDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetBonePositionTexture", &UAnimToTextureDataAsset::execBP_GetBonePositionTexture },
			{ "BP_GetBoneRotationTexture", &UAnimToTextureDataAsset::execBP_GetBoneRotationTexture },
			{ "BP_GetBoneWeightTexture", &UAnimToTextureDataAsset::execBP_GetBoneWeightTexture },
			{ "BP_GetSkeletalMesh", &UAnimToTextureDataAsset::execBP_GetSkeletalMesh },
			{ "BP_GetStaticMesh", &UAnimToTextureDataAsset::execBP_GetStaticMesh },
			{ "GetIndexFromAnimSequence", &UAnimToTextureDataAsset::execGetIndexFromAnimSequence },
			{ "ResetInfo", &UAnimToTextureDataAsset::execResetInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics
	{
		struct AnimToTextureDataAsset_eventBP_GetBonePositionTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventBP_GetBonePositionTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Bone Position Texture" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "BP_GetBonePositionTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::AnimToTextureDataAsset_eventBP_GetBonePositionTexture_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics
	{
		struct AnimToTextureDataAsset_eventBP_GetBoneRotationTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventBP_GetBoneRotationTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Bone Rotation Texture" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "BP_GetBoneRotationTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::AnimToTextureDataAsset_eventBP_GetBoneRotationTexture_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics
	{
		struct AnimToTextureDataAsset_eventBP_GetBoneWeightTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventBP_GetBoneWeightTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Bone Weight Texture" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "BP_GetBoneWeightTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::AnimToTextureDataAsset_eventBP_GetBoneWeightTexture_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics
	{
		struct AnimToTextureDataAsset_eventBP_GetSkeletalMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventBP_GetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "BP_GetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::AnimToTextureDataAsset_eventBP_GetSkeletalMesh_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics
	{
		struct AnimToTextureDataAsset_eventBP_GetStaticMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventBP_GetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Static Mesh" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "BP_GetStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::AnimToTextureDataAsset_eventBP_GetStaticMesh_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics
	{
		struct AnimToTextureDataAsset_eventGetIndexFromAnimSequence_Parms
		{
			const UAnimSequence* Sequence;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventGetIndexFromAnimSequence_Parms, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_Sequence_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureDataAsset_eventGetIndexFromAnimSequence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "GetIndexFromAnimSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::AnimToTextureDataAsset_eventGetIndexFromAnimSequence_Parms), Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureDataAsset, nullptr, "ResetInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimToTextureDataAsset);
	UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister()
	{
		return UAnimToTextureDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAnimToTextureDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletalLODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticLODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforcePowerOfTwo_MetaData[];
#endif
		static void NewProp_bEnforcePowerOfTwo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforcePowerOfTwo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Precision_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Precision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexPositionTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VertexPositionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VertexNormalTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonePositionTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BonePositionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRotationTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoneRotationTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoneWeightTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexRowsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexRowsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMinBBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexMinBBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSizeBBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSizeBBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightRowsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneWeightRowsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRowsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneRowsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMinBBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMinBBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSizeBBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneSizeBBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimToTextureDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimToTextureDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBonePositionTexture, "BP_GetBonePositionTexture" }, // 3187206123
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneRotationTexture, "BP_GetBoneRotationTexture" }, // 3285206331
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetBoneWeightTexture, "BP_GetBoneWeightTexture" }, // 3606913134
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetSkeletalMesh, "BP_GetSkeletalMesh" }, // 2964277336
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_BP_GetStaticMesh, "BP_GetStaticMesh" }, // 3305363606
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_GetIndexFromAnimSequence, "GetIndexFromAnimSequence" }, // 1104915538
		{ &Z_Construct_UFunction_UAnimToTextureDataAsset_ResetInfo, "ResetInfo" }, // 2220550064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimToTextureDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09* SkeletalMesh to bake animations from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "SkeletalMesh to bake animations from." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalLODIndex_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09* SkeletalMesh LOD to bake.\n\x09*/" },
		{ "DisplayName", "LODIndex" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "SkeletalMesh LOD to bake." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalLODIndex = { "SkeletalLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, SkeletalLODIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalLODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09* StaticMesh to bake to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "StaticMesh to bake to." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticLODIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09* StaticMesh LOD to bake to.\n\x09*/" },
		{ "DisplayName", "LODIndex" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "StaticMesh LOD to bake to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticLODIndex = { "StaticLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, StaticLODIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticLODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/**\n\x09* StaticMesh UVChannel Index for storing vertex information.\n\x09* Make sure this index does not conflict with the Lightmap UV Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "StaticMesh UVChannel Index for storing vertex information.\nMake sure this index does not conflict with the Lightmap UV Index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Max resolution of the texture.\n\x09* A smaller size will be used if the data fits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Max resolution of the texture.\nA smaller size will be used if the data fits." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Max resolution of the texture.\n\x09* A smaller size will be used if the data fits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Max resolution of the texture.\nA smaller size will be used if the data fits." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, MaxWidth), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Enforce Power Of Two on texture resolutions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Enforce Power Of Two on texture resolutions." },
	};
#endif
	void Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo_SetBit(void* Obj)
	{
		((UAnimToTextureDataAsset*)Obj)->bEnforcePowerOfTwo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo = { "bEnforcePowerOfTwo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimToTextureDataAsset), &Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture Precision\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture Precision" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, Precision), Z_Construct_UEnum_AnimToTexture_EAnimToTexturePrecision, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision_MetaData)) }; // 3684053011
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Storage Mode.\n\x09* Vertex: will store per-vertex position and normal.\n\x09* Bone: Will store per-bone position and rotation and per-vertex bone weight. \n\x09        This is the preferred method if meshes share skeleton.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Storage Mode.\nVertex: will store per-vertex position and normal.\nBone: Will store per-bone position and rotation and per-vertex bone weight.\n               This is the preferred method if meshes share skeleton." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, Mode), Z_Construct_UEnum_AnimToTexture_EAnimToTextureMode, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode_MetaData)) }; // 476505378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexPositionTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture for storing vertex positions\n\x09* This is only used on Vertex Mode\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Vertex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture for storing vertex positions\nThis is only used on Vertex Mode" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexPositionTexture = { "VertexPositionTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, VertexPositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexPositionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexPositionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexNormalTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture for storing vertex normals\n\x09* This is only used on Vertex Mode\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Vertex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture for storing vertex normals\nThis is only used on Vertex Mode" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexNormalTexture = { "VertexNormalTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, VertexNormalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexNormalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexNormalTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BonePositionTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture for storing bone positions\n\x09* This is only used on Bone Mode\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture for storing bone positions\nThis is only used on Bone Mode" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BonePositionTexture = { "BonePositionTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BonePositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BonePositionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BonePositionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRotationTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture for storing bone rotations\n\x09* This is only used on Bone Mode\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture for storing bone rotations\nThis is only used on Bone Mode" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRotationTexture = { "BoneRotationTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneRotationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRotationTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRotationTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09* Texture for storing vertex/bone weighting\n\x09* This is only used on Bone Mode\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Texture for storing vertex/bone weighting\nThis is only used on Bone Mode" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightTexture = { "BoneWeightTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneWeightTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AttachToSocket_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** \n\x09* Bone used for Rigid Binding. The bone needs to be part of the RawBones. \n\x09* Sockets and VirtualBones are not supported.\n\x09*/" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Bone used for Rigid Binding. The bone needs to be part of the RawBones.\nSockets and VirtualBones are not supported." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AttachToSocket = { "AttachToSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, AttachToSocket), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AttachToSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AttachToSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences_Inner = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSequenceInfo, METADATA_PARAMS(nullptr, 0) }; // 1587687329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, AnimSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences_MetaData)) }; // 1587687329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/* Total Number of Frames in all animations */" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
		{ "ToolTip", "Total Number of Frames in all animations" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, NumFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexRowsPerFrame_MetaData[] = {
		{ "Category", "Info" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Vertex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexRowsPerFrame = { "VertexRowsPerFrame", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, VertexRowsPerFrame), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexRowsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexRowsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexMinBBox_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "MinBBox" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Vertex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexMinBBox = { "VertexMinBBox", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, VertexMinBBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexMinBBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexMinBBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexSizeBBox_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "SizeBBox" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Vertex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexSizeBBox = { "VertexSizeBBox", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, VertexSizeBBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexSizeBBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexSizeBBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightRowsPerFrame_MetaData[] = {
		{ "Category", "Info" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightRowsPerFrame = { "BoneWeightRowsPerFrame", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneWeightRowsPerFrame), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightRowsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightRowsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRowsPerFrame_MetaData[] = {
		{ "Category", "Info" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRowsPerFrame = { "BoneRowsPerFrame", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneRowsPerFrame), METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRowsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRowsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneMinBBox_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "MinBBox" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneMinBBox = { "BoneMinBBox", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneMinBBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneMinBBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneMinBBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneSizeBBox_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "SizeBBox" },
		{ "EditCondition", "Mode == EAnimToTextureMode::Bone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneSizeBBox = { "BoneSizeBBox", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, BoneSizeBBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneSizeBBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneSizeBBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimInfo, METADATA_PARAMS(nullptr, 0) }; // 681009968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/AnimToTextureDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimToTextureDataAsset, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations_MetaData)) }; // 681009968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimToTextureDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SkeletalLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_StaticLODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_MaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_bEnforcePowerOfTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexPositionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexNormalTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BonePositionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRotationTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AttachToSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_AnimSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexRowsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexMinBBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_VertexSizeBBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneWeightRowsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneRowsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneMinBBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_BoneSizeBBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimToTextureDataAsset_Statics::NewProp_Animations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimToTextureDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimToTextureDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimToTextureDataAsset_Statics::ClassParams = {
		&UAnimToTextureDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimToTextureDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimToTextureDataAsset()
	{
		if (!Z_Registration_Info_UClass_UAnimToTextureDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimToTextureDataAsset.OuterSingleton, Z_Construct_UClass_UAnimToTextureDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimToTextureDataAsset.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UClass* StaticClass<UAnimToTextureDataAsset>()
	{
		return UAnimToTextureDataAsset::StaticClass();
	}
	UAnimToTextureDataAsset::UAnimToTextureDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimToTextureDataAsset);
	UAnimToTextureDataAsset::~UAnimToTextureDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::EnumInfo[] = {
		{ EAnimToTextureMode_StaticEnum, TEXT("EAnimToTextureMode"), &Z_Registration_Info_UEnum_EAnimToTextureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 476505378U) },
		{ EAnimToTexturePrecision_StaticEnum, TEXT("EAnimToTexturePrecision"), &Z_Registration_Info_UEnum_EAnimToTexturePrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3684053011U) },
		{ EAnimToTextureNumBoneInfluences_StaticEnum, TEXT("EAnimToTextureNumBoneInfluences"), &Z_Registration_Info_UEnum_EAnimToTextureNumBoneInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2738411651U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FAnimSequenceInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimSequenceInfo_Statics::NewStructOps, TEXT("AnimSequenceInfo"), &Z_Registration_Info_UScriptStruct_AnimSequenceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequenceInfo), 1587687329U) },
		{ FAnimInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimInfo_Statics::NewStructOps, TEXT("AnimInfo"), &Z_Registration_Info_UScriptStruct_AnimInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInfo), 681009968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimToTextureDataAsset, UAnimToTextureDataAsset::StaticClass, TEXT("UAnimToTextureDataAsset"), &Z_Registration_Info_UClass_UAnimToTextureDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimToTextureDataAsset), 296585880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_1242090440(TEXT("/Script/AnimToTexture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
