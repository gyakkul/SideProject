// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneModificationMode;
	static UEnum* EBoneModificationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EBoneModificationMode"));
		}
		return Z_Registration_Info_UEnum_EBoneModificationMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EBoneModificationMode>()
	{
		return EBoneModificationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enumerators[] = {
		{ "BMM_Ignore", (int64)BMM_Ignore },
		{ "BMM_Replace", (int64)BMM_Replace },
		{ "BMM_Additive", (int64)BMM_Additive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMM_Additive.Comment", "/** The modifier adds to the existing translation, rotation, or scale. */" },
		{ "BMM_Additive.DisplayName", "Add to Existing" },
		{ "BMM_Additive.Name", "BMM_Additive" },
		{ "BMM_Additive.ToolTip", "The modifier adds to the existing translation, rotation, or scale." },
		{ "BMM_Ignore.Comment", "/** The modifier ignores this channel (keeps the existing bone translation, rotation, or scale). */" },
		{ "BMM_Ignore.DisplayName", "Ignore" },
		{ "BMM_Ignore.Name", "BMM_Ignore" },
		{ "BMM_Ignore.ToolTip", "The modifier ignores this channel (keeps the existing bone translation, rotation, or scale)." },
		{ "BMM_Replace.Comment", "/** The modifier replaces the existing translation, rotation, or scale. */" },
		{ "BMM_Replace.DisplayName", "Replace Existing" },
		{ "BMM_Replace.Name", "BMM_Replace" },
		{ "BMM_Replace.ToolTip", "The modifier replaces the existing translation, rotation, or scale." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EBoneModificationMode",
		"EBoneModificationMode",
		Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode()
	{
		if (!Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneModificationMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ModifyBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ModifyBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone;
class UScriptStruct* FAnimNode_ModifyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ModifyBone>()
{
	return FAnimNode_ModifyBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** New rotation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New rotation of bone to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** New Scale of bone to apply. This is only worldspace. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Reference frame to apply Translation in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Reference frame to apply Scale in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ModifyBone.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ModifyBone, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace_MetaData)) }; // 793580878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_BoneToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_TranslationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_RotationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewProp_ScaleSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ModifyBone",
		sizeof(FAnimNode_ModifyBone),
		alignof(FAnimNode_ModifyBone),
		Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::EnumInfo[] = {
		{ EBoneModificationMode_StaticEnum, TEXT("EBoneModificationMode"), &Z_Registration_Info_UEnum_EBoneModificationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3534746531U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ModifyBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyBone_Statics::NewStructOps, TEXT("AnimNode_ModifyBone"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyBone), 1741280785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_3146277713(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ModifyBone_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
