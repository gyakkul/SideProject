// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/SmartName.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimCurveType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimCurveType;
	static UEnum* EAnimCurveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimCurveType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimCurveType"));
		}
		return Z_Registration_Info_UEnum_EAnimCurveType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimCurveType>()
	{
		return EAnimCurveType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimCurveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enumerators[] = {
		{ "EAnimCurveType::AttributeCurve", (int64)EAnimCurveType::AttributeCurve },
		{ "EAnimCurveType::MaterialCurve", (int64)EAnimCurveType::MaterialCurve },
		{ "EAnimCurveType::MorphTargetCurve", (int64)EAnimCurveType::MorphTargetCurve },
		{ "EAnimCurveType::MaxAnimCurveType", (int64)EAnimCurveType::MaxAnimCurveType },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enum_MetaDataParams[] = {
		{ "AttributeCurve.Name", "EAnimCurveType::AttributeCurve" },
		{ "MaterialCurve.Name", "EAnimCurveType::MaterialCurve" },
		{ "MaxAnimCurveType.Comment", "// make sure to update MaxCurve \n" },
		{ "MaxAnimCurveType.Hidden", "" },
		{ "MaxAnimCurveType.Name", "EAnimCurveType::MaxAnimCurveType" },
		{ "MaxAnimCurveType.ToolTip", "make sure to update MaxCurve" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "MorphTargetCurve.Name", "EAnimCurveType::MorphTargetCurve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimCurveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimCurveType",
		"EAnimCurveType",
		Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimCurveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimCurveType()
	{
		if (!Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimCurveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimCurveType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimAssetCurveFlags;
	static UEnum* EAnimAssetCurveFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAssetCurveFlags"));
		}
		return Z_Registration_Info_UEnum_EAnimAssetCurveFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimAssetCurveFlags>()
	{
		return EAnimAssetCurveFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enumerators[] = {
		{ "AACF_NONE", (int64)AACF_NONE },
		{ "AACF_DriveMorphTarget_DEPRECATED", (int64)AACF_DriveMorphTarget_DEPRECATED },
		{ "AACF_DriveAttribute_DEPRECATED", (int64)AACF_DriveAttribute_DEPRECATED },
		{ "AACF_Editable", (int64)AACF_Editable },
		{ "AACF_DriveMaterial_DEPRECATED", (int64)AACF_DriveMaterial_DEPRECATED },
		{ "AACF_Metadata", (int64)AACF_Metadata },
		{ "AACF_DriveTrack", (int64)AACF_DriveTrack },
		{ "AACF_Disabled", (int64)AACF_Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enum_MetaDataParams[] = {
		{ "AACF_Disabled.Comment", "// @Todo: remove?\n// disabled, right now it's used by track\n" },
		{ "AACF_Disabled.Hidden", "" },
		{ "AACF_Disabled.Name", "AACF_Disabled" },
		{ "AACF_Disabled.ToolTip", "@Todo: remove?\ndisabled, right now it's used by track" },
		{ "AACF_DriveAttribute_DEPRECATED.Comment", "// This has moved to FAnimCurveType:bMorphTarget. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Used as triggering event\n" },
		{ "AACF_DriveAttribute_DEPRECATED.Hidden", "" },
		{ "AACF_DriveAttribute_DEPRECATED.Name", "AACF_DriveAttribute_DEPRECATED" },
		{ "AACF_DriveAttribute_DEPRECATED.ToolTip", "This has moved to FAnimCurveType:bMorphTarget. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nUsed as triggering event" },
		{ "AACF_DriveMaterial_DEPRECATED.Comment", "// per asset\n// Used as a material curve\n" },
		{ "AACF_DriveMaterial_DEPRECATED.Hidden", "" },
		{ "AACF_DriveMaterial_DEPRECATED.Name", "AACF_DriveMaterial_DEPRECATED" },
		{ "AACF_DriveMaterial_DEPRECATED.ToolTip", "per asset\nUsed as a material curve" },
		{ "AACF_DriveMorphTarget_DEPRECATED.Comment", "// Used as morph target curve\n" },
		{ "AACF_DriveMorphTarget_DEPRECATED.Hidden", "" },
		{ "AACF_DriveMorphTarget_DEPRECATED.Name", "AACF_DriveMorphTarget_DEPRECATED" },
		{ "AACF_DriveMorphTarget_DEPRECATED.ToolTip", "Used as morph target curve" },
		{ "AACF_DriveTrack.Comment", "// per asset\n// motifies bone track\n" },
		{ "AACF_DriveTrack.Hidden", "" },
		{ "AACF_DriveTrack.Name", "AACF_DriveTrack" },
		{ "AACF_DriveTrack.ToolTip", "per asset\nmotifies bone track" },
		{ "AACF_Editable.Comment", "// Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Is editable in Sequence Editor\n" },
		{ "AACF_Editable.DisplayName", "Editable" },
		{ "AACF_Editable.Name", "AACF_Editable" },
		{ "AACF_Editable.ToolTip", "Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs editable in Sequence Editor" },
		{ "AACF_Metadata.Comment", "// This has moved to FAnimCurveType:bMaterial. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\n// Is a metadata 'curve'\n" },
		{ "AACF_Metadata.DisplayName", "Metadata" },
		{ "AACF_Metadata.Name", "AACF_Metadata" },
		{ "AACF_Metadata.ToolTip", "This has moved to FAnimCurveType:bMaterial. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs a metadata 'curve'" },
		{ "AACF_NONE.Hidden", "" },
		{ "AACF_NONE.Name", "AACF_NONE" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is curve flags that are saved in asset and **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "This is curve flags that are saved in asset and *" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimAssetCurveFlags",
		"EAnimAssetCurveFlags",
		Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags()
	{
		if (!Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton, Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimAssetCurveFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimCurveParam;
class UScriptStruct* FAnimCurveParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCurveParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimCurveParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveParam, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveParam"));
	}
	return Z_Registration_Info_UScriptStruct_AnimCurveParam.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveParam>()
{
	return FAnimCurveParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimCurveParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UI Curve Parameter type\n * This gets name, and cached UID and use it when needed\n * Also it contains curve types \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "UI Curve Parameter type\nThis gets name, and cached UID and use it when needed\nAlso it contains curve types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FAnimCurveParam" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimCurveParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveParam",
		sizeof(FAnimCurveParam),
		alignof(FAnimCurveParam),
		Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimCurveParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimCurveParam.InnerSingleton, Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimCurveParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimCurveBase;
class UScriptStruct* FAnimCurveBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCurveBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimCurveBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimCurveBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveBase>()
{
	return FAnimCurveBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimCurveBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastObservedName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LastObservedName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTypeFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurveTypeFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Float curve data for one track\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Float curve data for one track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveBase>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData[] = {
		{ "Comment", "// Last observed name of the curve. We store this so we can recover from situations that\n// mean the skeleton doesn't have a mapped name for our UID (such as a user saving the an\n// animation but not the skeleton).\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Last observed name of the curve. We store this so we can recover from situations that\nmean the skeleton doesn't have a mapped name for our UID (such as a user saving the an\nanimation but not the skeleton)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName = { "LastObservedName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimCurveBase, LastObservedName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimCurveBase, Name), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData)) }; // 1281775015
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimCurveBase, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData[] = {
		{ "Comment", "/** Curve Type Flags */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve Type Flags" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags = { "CurveTypeFlags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimCurveBase, CurveTypeFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Color,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveBase",
		sizeof(FAnimCurveBase),
		alignof(FAnimCurveBase),
		Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimCurveBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimCurveBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimCurveBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FFloatCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatCurve;
class UScriptStruct* FFloatCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FloatCurve"));
	}
	return Z_Registration_Info_UScriptStruct_FloatCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFloatCurve>()
{
	return FFloatCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Curve data for float. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatCurve, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"FloatCurve",
		sizeof(FFloatCurve),
		alignof(FFloatCurve),
		Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatCurve.InnerSingleton, Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatCurve.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVectorCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FVectorCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorCurve;
class UScriptStruct* FVectorCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VectorCurve"));
	}
	return Z_Registration_Info_UScriptStruct_VectorCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorCurve>()
{
	return FVectorCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Curve data for float. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, FVectorCurve), nullptr, nullptr, STRUCT_OFFSET(FVectorCurve, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"VectorCurve",
		sizeof(FVectorCurve),
		alignof(FVectorCurve),
		Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorCurve.InnerSingleton, Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorCurve.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransformCurve>() == std::is_polymorphic<FAnimCurveBase>(), "USTRUCT FTransformCurve cannot be polymorphic unless super FAnimCurveBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformCurve;
class UScriptStruct* FTransformCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TransformCurve"));
	}
	return Z_Registration_Info_UScriptStruct_TransformCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformCurve>()
{
	return FTransformCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData[] = {
		{ "Comment", "/** Curve data for each transform. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for each transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve = { "TranslationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCurve, TranslationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData)) }; // 639932431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Comment", "/** Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation\n\x09 * If you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock. \n\x09 * @TODO: Eventually we'll need FRotationCurve that would contain rotation curve - that will interpolate as slerp or as quaternion \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation\nIf you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock.\n@TODO: Eventually we'll need FRotationCurve that would contain rotation curve - that will interpolate as slerp or as quaternion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCurve, RotationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData)) }; // 639932431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformCurve, ScaleCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData)) }; // 639932431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"TransformCurve",
		sizeof(FTransformCurve),
		alignof(FTransformCurve),
		Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformCurve.InnerSingleton, Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedFloatCurve;
class UScriptStruct* FCachedFloatCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedFloatCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedFloatCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedFloatCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedFloatCurve"));
	}
	return Z_Registration_Info_UScriptStruct_CachedFloatCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedFloatCurve>()
{
	return FCachedFloatCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedFloatCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedFloatCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "Curve Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedFloatCurve, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewProp_CurveName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedFloatCurve",
		sizeof(FCachedFloatCurve),
		alignof(FCachedFloatCurve),
		Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedFloatCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedFloatCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedFloatCurve.InnerSingleton, Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedFloatCurve.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERawCurveTrackTypes;
	static UEnum* ERawCurveTrackTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERawCurveTrackTypes, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERawCurveTrackTypes"));
		}
		return Z_Registration_Info_UEnum_ERawCurveTrackTypes.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERawCurveTrackTypes>()
	{
		return ERawCurveTrackTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enumerators[] = {
		{ "ERawCurveTrackTypes::RCT_Float", (int64)ERawCurveTrackTypes::RCT_Float },
		{ "ERawCurveTrackTypes::RCT_Vector", (int64)ERawCurveTrackTypes::RCT_Vector },
		{ "ERawCurveTrackTypes::RCT_Transform", (int64)ERawCurveTrackTypes::RCT_Transform },
		{ "ERawCurveTrackTypes::RCT_MAX", (int64)ERawCurveTrackTypes::RCT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "RCT_Float.DisplayName", "Float Curve" },
		{ "RCT_Float.Name", "ERawCurveTrackTypes::RCT_Float" },
		{ "RCT_MAX.Name", "ERawCurveTrackTypes::RCT_MAX" },
		{ "RCT_Transform.DisplayName", "Transformation Curve" },
		{ "RCT_Transform.Name", "ERawCurveTrackTypes::RCT_Transform" },
		{ "RCT_Vector.DisplayName", "Vector Curve" },
		{ "RCT_Vector.Hidden", "" },
		{ "RCT_Vector.Name", "ERawCurveTrackTypes::RCT_Vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERawCurveTrackTypes",
		"ERawCurveTrackTypes",
		Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes()
	{
		if (!Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton, Z_Construct_UEnum_Engine_ERawCurveTrackTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERawCurveTrackTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawCurveTracks;
class UScriptStruct* FRawCurveTracks::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawCurveTracks.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawCurveTracks.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawCurveTracks, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RawCurveTracks"));
	}
	return Z_Registration_Info_UScriptStruct_RawCurveTracks.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawCurveTracks>()
{
	return FRawCurveTracks::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawCurveTracks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatCurves;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformCurves;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Raw Curve data for serialization\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Raw Curve data for serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawCurveTracks>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner = { "FloatCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 936738579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawCurveTracks, FloatCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData)) }; // 936738579
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner = { "VectorCurves", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(nullptr, 0) }; // 639932431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData[] = {
		{ "Comment", "/**\n\x09 * @note : Currently VectorCurves are not evaluated or used for anything else but transient data for modifying bone track\n\x09 *\x09\x09\x09Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : Currently VectorCurves are not evaluated or used for anything else but transient data for modifying bone track\n                     Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves = { "VectorCurves", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawCurveTracks, VectorCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData)) }; // 639932431
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner = { "TransformCurves", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(nullptr, 0) }; // 2461261714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData[] = {
		{ "Comment", "/**\n\x09 * @note : TransformCurves are used to edit additive animation in editor. \n\x09 **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : TransformCurves are used to edit additive animation in editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves = { "TransformCurves", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawCurveTracks, TransformCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData)) }; // 2461261714
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RawCurveTracks",
		sizeof(FRawCurveTracks),
		alignof(FRawCurveTracks),
		Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks()
	{
		if (!Z_Registration_Info_UScriptStruct_RawCurveTracks.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawCurveTracks.InnerSingleton, Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawCurveTracks.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::EnumInfo[] = {
		{ EAnimCurveType_StaticEnum, TEXT("EAnimCurveType"), &Z_Registration_Info_UEnum_EAnimCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3756150698U) },
		{ EAnimAssetCurveFlags_StaticEnum, TEXT("EAnimAssetCurveFlags"), &Z_Registration_Info_UEnum_EAnimAssetCurveFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1645145010U) },
		{ ERawCurveTrackTypes_StaticEnum, TEXT("ERawCurveTrackTypes"), &Z_Registration_Info_UEnum_ERawCurveTrackTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1535854795U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::ScriptStructInfo[] = {
		{ FAnimCurveParam::StaticStruct, Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewStructOps, TEXT("AnimCurveParam"), &Z_Registration_Info_UScriptStruct_AnimCurveParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimCurveParam), 3731168798U) },
		{ FAnimCurveBase::StaticStruct, Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewStructOps, TEXT("AnimCurveBase"), &Z_Registration_Info_UScriptStruct_AnimCurveBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimCurveBase), 3572319546U) },
		{ FFloatCurve::StaticStruct, Z_Construct_UScriptStruct_FFloatCurve_Statics::NewStructOps, TEXT("FloatCurve"), &Z_Registration_Info_UScriptStruct_FloatCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatCurve), 936738579U) },
		{ FVectorCurve::StaticStruct, Z_Construct_UScriptStruct_FVectorCurve_Statics::NewStructOps, TEXT("VectorCurve"), &Z_Registration_Info_UScriptStruct_VectorCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorCurve), 639932431U) },
		{ FTransformCurve::StaticStruct, Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps, TEXT("TransformCurve"), &Z_Registration_Info_UScriptStruct_TransformCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformCurve), 2461261714U) },
		{ FCachedFloatCurve::StaticStruct, Z_Construct_UScriptStruct_FCachedFloatCurve_Statics::NewStructOps, TEXT("CachedFloatCurve"), &Z_Registration_Info_UScriptStruct_CachedFloatCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedFloatCurve), 3079100588U) },
		{ FRawCurveTracks::StaticStruct, Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewStructOps, TEXT("RawCurveTracks"), &Z_Registration_Info_UScriptStruct_RawCurveTracks, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawCurveTracks), 2460749437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_910042798(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
