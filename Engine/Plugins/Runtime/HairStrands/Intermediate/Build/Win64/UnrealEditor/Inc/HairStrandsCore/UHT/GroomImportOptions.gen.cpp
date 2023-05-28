// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomImportOptions.h"
#include "GroomAssetInterpolation.h"
#include "GroomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomHairGroupsPreview();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomHairGroupsPreview_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomImportOptions();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomImportOptions_NoRegister();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomConversionSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomHairGroupPreview();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UGroomImportOptions::StaticRegisterNativesUGroomImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomImportOptions);
	UClass* Z_Construct_UClass_UGroomImportOptions_NoRegister()
	{
		return UGroomImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGroomImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomImportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "Conversion" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomImportOptions, ConversionSettings), Z_Construct_UScriptStruct_FGroomConversionSettings, METADATA_PARAMS(Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings_MetaData)) }; // 2255439455
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_Inner = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(nullptr, 0) }; // 3358068899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/* Interpolation settings per group */" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ToolTip", "Interpolation settings per group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomImportOptions, InterpolationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_MetaData)) }; // 3358068899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomImportOptions_Statics::NewProp_InterpolationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomImportOptions_Statics::ClassParams = {
		&UGroomImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomImportOptions()
	{
		if (!Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton, Z_Construct_UClass_UGroomImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomImportOptions.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomImportOptions>()
	{
		return UGroomImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomImportOptions);
	UGroomImportOptions::~UGroomImportOptions() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomHairGroupPreview;
class UScriptStruct* FGroomHairGroupPreview::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomHairGroupPreview, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomHairGroupPreview"));
	}
	return Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomHairGroupPreview>()
{
	return FGroomHairGroupPreview::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuideCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GuideCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootUV_MetaData[];
#endif
		static void NewProp_bHasRootUV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasClumpID_MetaData[];
#endif
		static void NewProp_bHasClumpID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasClumpID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasColor_MetaData[];
#endif
		static void NewProp_bHasColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRoughness_MetaData[];
#endif
		static void NewProp_bHasRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasAO_MetaData[];
#endif
		static void NewProp_bHasAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPrecomputedWeights_MetaData[];
#endif
		static void NewProp_bHasPrecomputedWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPrecomputedWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomHairGroupPreview>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomHairGroupPreview, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomHairGroupPreview, GroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount = { "CurveCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomHairGroupPreview, CurveCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount = { "GuideCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomHairGroupPreview, GuideCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasRootUV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV = { "bHasRootUV", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasClumpID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID = { "bHasClumpID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor = { "bHasColor", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness = { "bHasRoughness", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO = { "bHasAO", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights_SetBit(void* Obj)
	{
		((FGroomHairGroupPreview*)Obj)->bHasPrecomputedWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights = { "bHasPrecomputedWeights", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGroomHairGroupPreview), &Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomHairGroupPreview, InterpolationSettings), Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings_MetaData)) }; // 3358068899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_CurveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_GuideCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRootUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasClumpID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_bHasPrecomputedWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewProp_InterpolationSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GroomHairGroupPreview",
		sizeof(FGroomHairGroupPreview),
		alignof(FGroomHairGroupPreview),
		Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroomHairGroupPreview()
	{
		if (!Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton, Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroomHairGroupPreview.InnerSingleton;
	}
	void UGroomHairGroupsPreview::StaticRegisterNativesUGroomHairGroupsPreview()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomHairGroupsPreview);
	UClass* Z_Construct_UClass_UGroomHairGroupsPreview_NoRegister()
	{
		return UGroomHairGroupsPreview::StaticClass();
	}
	struct Z_Construct_UClass_UGroomHairGroupsPreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomHairGroupsPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomHairGroupsPreview_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Hidden" },
		{ "IncludePath", "GroomImportOptions.h" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGroomHairGroupPreview, METADATA_PARAMS(nullptr, 0) }; // 4052760122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/GroomImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomHairGroupsPreview, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_MetaData)) }; // 4052760122
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomHairGroupsPreview_Statics::NewProp_Groups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomHairGroupsPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomHairGroupsPreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomHairGroupsPreview_Statics::ClassParams = {
		&UGroomHairGroupsPreview::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomHairGroupsPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomHairGroupsPreview()
	{
		if (!Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton, Z_Construct_UClass_UGroomHairGroupsPreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomHairGroupsPreview.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomHairGroupsPreview>()
	{
		return UGroomHairGroupsPreview::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomHairGroupsPreview);
	UGroomHairGroupsPreview::~UGroomHairGroupsPreview() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ScriptStructInfo[] = {
		{ FGroomHairGroupPreview::StaticStruct, Z_Construct_UScriptStruct_FGroomHairGroupPreview_Statics::NewStructOps, TEXT("GroomHairGroupPreview"), &Z_Registration_Info_UScriptStruct_GroomHairGroupPreview, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomHairGroupPreview), 4052760122U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomImportOptions, UGroomImportOptions::StaticClass, TEXT("UGroomImportOptions"), &Z_Registration_Info_UClass_UGroomImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomImportOptions), 1157984348U) },
		{ Z_Construct_UClass_UGroomHairGroupsPreview, UGroomHairGroupsPreview::StaticClass, TEXT("UGroomHairGroupsPreview"), &Z_Registration_Info_UClass_UGroomHairGroupsPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomHairGroupsPreview), 3876815636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_4247738523(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomImportOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
