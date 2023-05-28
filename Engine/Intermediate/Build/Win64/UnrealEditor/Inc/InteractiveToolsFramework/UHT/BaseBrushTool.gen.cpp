// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/BaseBrushTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBrushTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushBaseProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBrushStampData();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UBrushBaseProperties::StaticRegisterNativesUBrushBaseProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBaseProperties);
	UClass* Z_Construct_UClass_UBrushBaseProperties_NoRegister()
	{
		return UBrushBaseProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBrushBaseProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecifyRadius_MetaData[];
#endif
		static void NewProp_bSpecifyRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecifyRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloffAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloffAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowStrength_MetaData[];
#endif
		static void NewProp_bShowStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFalloff_MetaData[];
#endif
		static void NewProp_bShowFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushBaseProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties for a Brush-type Tool\n */" },
		{ "IncludePath", "BaseTools/BaseBrushTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Standard properties for a Brush-type Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Relative size of brush */" },
		{ "DisplayName", "Size" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bSpecifyRadius == false" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Relative size of brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBaseProperties, BrushSize), METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** If true, ignore relative Brush Size and use explicit world Radius */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If true, ignore relative Brush Size and use explicit world Radius" },
	};
#endif
	void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_SetBit(void* Obj)
	{
		((UBrushBaseProperties*)Obj)->bSpecifyRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius = { "bSpecifyRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Radius of brush */" },
		{ "DisplayName", "Radius" },
		{ "EditCondition", "bSpecifyRadius" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Radius of brush" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBaseProperties, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the brush (0.0 - 1.0) */" },
		{ "DisplayName", "Strength" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "bShowStrength" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Strength of the brush (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength = { "BrushStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBaseProperties, BrushStrength), METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bShowFalloff" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushBaseProperties, BrushFalloffAmount), METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_MetaData[] = {
		{ "Comment", "/** If false, then BrushStrength will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If false, then BrushStrength will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_SetBit(void* Obj)
	{
		((UBrushBaseProperties*)Obj)->bShowStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength = { "bShowStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_MetaData[] = {
		{ "Comment", "/** If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_SetBit(void* Obj)
	{
		((UBrushBaseProperties*)Obj)->bShowFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff = { "bShowFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushBaseProperties), &Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bSpecifyRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_BrushFalloffAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBaseProperties_Statics::NewProp_bShowFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushBaseProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBaseProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBaseProperties_Statics::ClassParams = {
		&UBrushBaseProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushBaseProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBaseProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushBaseProperties()
	{
		if (!Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton, Z_Construct_UClass_UBrushBaseProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushBaseProperties.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushBaseProperties>()
	{
		return UBrushBaseProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBaseProperties);
	UBrushBaseProperties::~UBrushBaseProperties() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushStampData;
class UScriptStruct* FBrushStampData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushStampData, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("BrushStampData"));
	}
	return Z_Registration_Info_UScriptStruct_BrushStampData.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FBrushStampData>()
{
	return FBrushStampData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushStampData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushStampData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic Brush Stamp data\n */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Generic Brush Stamp data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushStampData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushStampData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushStampData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"BrushStampData",
		sizeof(FBrushStampData),
		alignof(FBrushStampData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushStampData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushStampData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushStampData()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton, Z_Construct_UScriptStruct_FBrushStampData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushStampData.InnerSingleton;
	}
	void UBaseBrushTool::StaticRegisterNativesUBaseBrushTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseBrushTool);
	UClass* Z_Construct_UClass_UBaseBrushTool_NoRegister()
	{
		return UBaseBrushTool::StaticClass();
	}
	struct Z_Construct_UClass_UBaseBrushTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInBrushStroke_MetaData[];
#endif
		static void NewProp_bInBrushStroke_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBrushStroke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToLocalScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToLocalScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBrushStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBrushStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PropertyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushStampIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushStampIndicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseBrushTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBaseBrushTool implements standard brush-style functionality for an InteractiveTool.\n * This includes:\n *   1) brush radius property set with dimension-relative brush sizing and default brush radius hotkeys\n *   2) brush indicator visualization\n *   3) tracking of last brush stamp location via .LastBrushStamp FProperty\n *   4) status of brush stroke via .bInBrushStroke FProperty\n */" },
		{ "IncludePath", "BaseTools/BaseBrushTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "UBaseBrushTool implements standard brush-style functionality for an InteractiveTool.\nThis includes:\n  1) brush radius property set with dimension-relative brush sizing and default brush radius hotkeys\n  2) brush indicator visualization\n  3) tracking of last brush stamp location via .LastBrushStamp FProperty\n  4) status of brush stroke via .bInBrushStroke FProperty" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties_MetaData[] = {
		{ "Comment", "/** Properties that control brush size/etc*/" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Properties that control brush size/etc" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties = { "BrushProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBrushTool, BrushProperties), Z_Construct_UClass_UBrushBaseProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_MetaData[] = {
		{ "Comment", "/** Set to true by Tool if user is currently in an active brush stroke*/" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Set to true by Tool if user is currently in an active brush stroke" },
	};
#endif
	void Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_SetBit(void* Obj)
	{
		((UBaseBrushTool*)Obj)->bInBrushStroke = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke = { "bInBrushStroke", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBaseBrushTool), &Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale_MetaData[] = {
		{ "Comment", "/** Uniform scale factor that scales from world space (where brush usually exists) to local space */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Uniform scale factor that scales from world space (where brush usually exists) to local space" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale = { "WorldToLocalScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBrushTool, WorldToLocalScale), METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp_MetaData[] = {
		{ "Comment", "/** Position of brush at last update (both during stroke and during Hover) */" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
		{ "ToolTip", "Position of brush at last update (both during stroke and during Hover)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp = { "LastBrushStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBrushTool, LastBrushStamp), Z_Construct_UScriptStruct_FBrushStampData, METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp_MetaData)) }; // 3601226541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBrushTool, PropertyClass), Z_Construct_UClass_UBrushBaseProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseBrushTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator = { "BrushStampIndicator", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBrushTool, BrushStampIndicator), Z_Construct_UClass_UBrushStampIndicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_bInBrushStroke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_WorldToLocalScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_LastBrushStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_PropertyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBrushTool_Statics::NewProp_BrushStampIndicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseBrushTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseBrushTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseBrushTool_Statics::ClassParams = {
		&UBaseBrushTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseBrushTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBrushTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseBrushTool()
	{
		if (!Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton, Z_Construct_UClass_UBaseBrushTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseBrushTool.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBaseBrushTool>()
	{
		return UBaseBrushTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseBrushTool);
	UBaseBrushTool::~UBaseBrushTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ScriptStructInfo[] = {
		{ FBrushStampData::StaticStruct, Z_Construct_UScriptStruct_FBrushStampData_Statics::NewStructOps, TEXT("BrushStampData"), &Z_Registration_Info_UScriptStruct_BrushStampData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushStampData), 3601226541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBaseProperties, UBrushBaseProperties::StaticClass, TEXT("UBrushBaseProperties"), &Z_Registration_Info_UClass_UBrushBaseProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBaseProperties), 930108690U) },
		{ Z_Construct_UClass_UBaseBrushTool, UBaseBrushTool::StaticClass, TEXT("UBaseBrushTool"), &Z_Registration_Info_UClass_UBaseBrushTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseBrushTool), 688256074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_4110620979(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_BaseBrushTool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
