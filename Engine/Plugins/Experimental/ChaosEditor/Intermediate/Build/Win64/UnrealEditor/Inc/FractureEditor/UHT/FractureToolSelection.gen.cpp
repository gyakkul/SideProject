// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolSelection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSelectionSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureSelectionSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSelection();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSelection_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_URectangleMarqueeManager();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_URectangleMarqueeManager_NoRegister();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_ESelectionOperation();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumeSelectionMethod;
	static UEnum* EVolumeSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumeSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumeSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EVolumeSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EVolumeSelectionMethod.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EVolumeSelectionMethod>()
	{
		return EVolumeSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enumerators[] = {
		{ "EVolumeSelectionMethod::CubeRootOfVolume", (int64)EVolumeSelectionMethod::CubeRootOfVolume },
		{ "EVolumeSelectionMethod::RelativeToWhole", (int64)EVolumeSelectionMethod::RelativeToWhole },
		{ "EVolumeSelectionMethod::RelativeToLargest", (int64)EVolumeSelectionMethod::RelativeToLargest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "CubeRootOfVolume.Comment", "// Select by cube root of volume\n" },
		{ "CubeRootOfVolume.Name", "EVolumeSelectionMethod::CubeRootOfVolume" },
		{ "CubeRootOfVolume.ToolTip", "Select by cube root of volume" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "RelativeToLargest.Comment", "// Select by cube root of volume relative to the largest single geometry\n" },
		{ "RelativeToLargest.Name", "EVolumeSelectionMethod::RelativeToLargest" },
		{ "RelativeToLargest.ToolTip", "Select by cube root of volume relative to the largest single geometry" },
		{ "RelativeToWhole.Comment", "// Select by cube root of volume relative to the overall shape's cube root of volume\n" },
		{ "RelativeToWhole.Name", "EVolumeSelectionMethod::RelativeToWhole" },
		{ "RelativeToWhole.ToolTip", "Select by cube root of volume relative to the overall shape's cube root of volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EVolumeSelectionMethod",
		"EVolumeSelectionMethod",
		Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EVolumeSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumeSelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumeSelectionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectionOperation;
	static UEnum* ESelectionOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectionOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectionOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_ESelectionOperation, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("ESelectionOperation"));
		}
		return Z_Registration_Info_UEnum_ESelectionOperation.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<ESelectionOperation>()
	{
		return ESelectionOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enumerators[] = {
		{ "ESelectionOperation::Replace", (int64)ESelectionOperation::Replace },
		{ "ESelectionOperation::Add", (int64)ESelectionOperation::Add },
		{ "ESelectionOperation::Remove", (int64)ESelectionOperation::Remove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "ESelectionOperation::Add" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "Remove.Name", "ESelectionOperation::Remove" },
		{ "Replace.Name", "ESelectionOperation::Replace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"ESelectionOperation",
		"ESelectionOperation",
		Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_ESelectionOperation()
	{
		if (!Z_Registration_Info_UEnum_ESelectionOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectionOperation.InnerSingleton, Z_Construct_UEnum_FractureEditor_ESelectionOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectionOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMouseSelectionMethod;
	static UEnum* EMouseSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMouseSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMouseSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EMouseSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EMouseSelectionMethod.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMouseSelectionMethod>()
	{
		return EMouseSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enumerators[] = {
		{ "EMouseSelectionMethod::RectSelect", (int64)EMouseSelectionMethod::RectSelect },
		{ "EMouseSelectionMethod::StandardSelect", (int64)EMouseSelectionMethod::StandardSelect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "RectSelect.Comment", "// Click+Drag a rectangle to select -- hold shift to append, ctrl to subtract, and ctrl+shift to toggle\n" },
		{ "RectSelect.Name", "EMouseSelectionMethod::RectSelect" },
		{ "RectSelect.ToolTip", "Click+Drag a rectangle to select -- hold shift to append, ctrl to subtract, and ctrl+shift to toggle" },
		{ "StandardSelect.Comment", "// Selection that works the same as when the tool is not active\n" },
		{ "StandardSelect.Name", "EMouseSelectionMethod::StandardSelect" },
		{ "StandardSelect.ToolTip", "Selection that works the same as when the tool is not active" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EMouseSelectionMethod",
		"EMouseSelectionMethod",
		Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EMouseSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMouseSelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMouseSelectionMethod.InnerSingleton;
	}
	void UFractureSelectionSettings::StaticRegisterNativesUFractureSelectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureSelectionSettings);
	UClass* Z_Construct_UClass_UFractureSelectionSettings_NoRegister()
	{
		return UFractureSelectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureSelectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MouseSelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseSelectionMethod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VolumeSelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumeSelectionMethod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectionOperation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOperation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolume_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeFrac_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinVolumeFrac;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeFrac_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxVolumeFrac;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepFraction_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_KeepFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureSelectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings controlling how geometry is selected */" },
		{ "IncludePath", "FractureToolSelection.h" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings controlling how geometry is selected" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod_MetaData[] = {
		{ "Category", "MouseInteraction" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod = { "MouseSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, MouseSelectionMethod), Z_Construct_UEnum_FractureEditor_EMouseSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod_MetaData)) }; // 1966935227
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "/** What values to use when filtering by volume.  Note all values are presented as cube roots to give more intuitive scales (e.g., to select bones with volume less than a 10x10x10 cube, choose CubeRootOfVolume and MaxVolume=10, rather than needing to multiply out to 1000) */" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "What values to use when filtering by volume.  Note all values are presented as cube roots to give more intuitive scales (e.g., to select bones with volume less than a 10x10x10 cube, choose CubeRootOfVolume and MaxVolume=10, rather than needing to multiply out to 1000)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod = { "VolumeSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, VolumeSelectionMethod), Z_Construct_UEnum_FractureEditor_EVolumeSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod_MetaData)) }; // 1447243713
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "/** How to update the selection from the filter */" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "How to update the selection from the filter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation = { "SelectionOperation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, SelectionOperation), Z_Construct_UEnum_FractureEditor_ESelectionOperation, METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation_MetaData)) }; // 1014308266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter */" },
		{ "EditCondition", "VolumeSelectionMethod == EVolumeSelectionMethod::CubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter" },
		{ "UIMax", "1000" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, MinVolume), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolume_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter */" },
		{ "EditCondition", "VolumeSelectionMethod == EVolumeSelectionMethod::CubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter" },
		{ "UIMax", "1000" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolume = { "MaxVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, MaxVolume), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolumeFrac_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter */" },
		{ "EditCondition", "VolumeSelectionMethod != EVolumeSelectionMethod::CubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Sets the minimum volume (as computed by the Volume Selection Method) that should be included in the filter" },
		{ "UIMax", "1" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolumeFrac = { "MinVolumeFrac", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, MinVolumeFrac), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolumeFrac_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolumeFrac_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolumeFrac_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter */" },
		{ "EditCondition", "VolumeSelectionMethod != EVolumeSelectionMethod::CubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Sets the maximum volume (as computed by the Volume Selection Method) that should be included in the filter" },
		{ "UIMax", "1" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolumeFrac = { "MaxVolumeFrac", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, MaxVolumeFrac), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolumeFrac_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolumeFrac_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_KeepFraction_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** Fraction of bones to keep in the selection: If less than 1, bones will be randomly excluded from the selection filter */" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Fraction of bones to keep in the selection: If less than 1, bones will be randomly excluded from the selection filter" },
		{ "UIMax", "1" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_KeepFraction = { "KeepFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, KeepFraction), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_KeepFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_KeepFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "Comment", "/** Seed to use for randomization when deciding which bones to keep w/ the Keep Fraction*/" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "Seed to use for randomization when deciding which bones to keep w/ the Keep Fraction" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureSelectionSettings, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureSelectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MouseSelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_VolumeSelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_SelectionOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MinVolumeFrac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_MaxVolumeFrac,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_KeepFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureSelectionSettings_Statics::NewProp_RandomSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureSelectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureSelectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureSelectionSettings_Statics::ClassParams = {
		&UFractureSelectionSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureSelectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureSelectionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureSelectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureSelectionSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureSelectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureSelectionSettings.OuterSingleton, Z_Construct_UClass_UFractureSelectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureSelectionSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureSelectionSettings>()
	{
		return UFractureSelectionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureSelectionSettings);
	UFractureSelectionSettings::~UFractureSelectionSettings() {}
	void URectangleMarqueeManager::StaticRegisterNativesURectangleMarqueeManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleMarqueeManager);
	UClass* Z_Construct_UClass_URectangleMarqueeManager_NoRegister()
	{
		return URectangleMarqueeManager::StaticClass();
	}
	struct Z_Construct_UClass_URectangleMarqueeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalClickDragBehavior_MetaData[];
#endif
		static void NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalClickDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDragRectangleChangedDeferredThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OnDragRectangleChangedDeferredThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickDragBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleMarqueeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Adapted from URectangleMarqueeMechanic, the mechanic for a rectangle \"marquee\" selection, to operate without\n * the UInteractionMechanic framework. It creates and maintains the 2D rectangle associated with a mouse drag.\n * It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n *\n * You must manually call the Setup(), Render() and DrawHUD() functions.\n * Note these functions have been changed from the Mechanic versions to be easier to call without additional InteractiveTool machinery\n *\n * Attach to the delegates and use the passed rectangle to test against your geometry.\n * \n * TODO: Refactor this into a more generalized / generally usable class in RectangleMarqueeMechanic.h,\n * and share more common code with URectangleMarqueeMechanic.\n */" },
		{ "IncludePath", "FractureToolSelection.h" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "* Adapted from URectangleMarqueeMechanic, the mechanic for a rectangle \"marquee\" selection, to operate without\n* the UInteractionMechanic framework. It creates and maintains the 2D rectangle associated with a mouse drag.\n* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n*\n* You must manually call the Setup(), Render() and DrawHUD() functions.\n* Note these functions have been changed from the Mechanic versions to be easier to call without additional InteractiveTool machinery\n*\n* Attach to the delegates and use the passed rectangle to test against your geometry.\n*\n* TODO: Refactor this into a more generalized / generally usable class in RectangleMarqueeMechanic.h,\n* and share more common code with URectangleMarqueeMechanic." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then the URectangleMarqueeManager will not create an internal UClickDragInputBehavior in ::Setup(), allowing\n\x09 * the client to control the marquee with an external InputBehavior that uses the marquee manager as its IClickDragBehaviorTarget.\n\x09 * For instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\n\x09 * Must be configured before calling ::Setup()\n\x09 */" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "If true, then the URectangleMarqueeManager will not create an internal UClickDragInputBehavior in ::Setup(), allowing\nthe client to control the marquee with an external InputBehavior that uses the marquee manager as its IClickDragBehaviorTarget.\nFor instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\nMust be configured before calling ::Setup()" },
	};
#endif
	void Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj)
	{
		((URectangleMarqueeManager*)Obj)->bUseExternalClickDragBehavior = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior = { "bUseExternalClickDragBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URectangleMarqueeManager), &Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData[] = {
		{ "Comment", "/**\n\x09 * If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\n\x09 * to this function (in the current drag sequence) will be deferred until the mouse button is released. This will\n\x09 * improve the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\n\x09 * want it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)\n\x09 */" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\nto this function (in the current drag sequence) will be deferred until the mouse button is released. This will\nimprove the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\nwant it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_OnDragRectangleChangedDeferredThreshold = { "OnDragRectangleChangedDeferredThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleMarqueeManager, OnDragRectangleChangedDeferredThreshold), METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleMarqueeManager, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_ClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_ClickDragBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectangleMarqueeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_bUseExternalClickDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_OnDragRectangleChangedDeferredThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeManager_Statics::NewProp_ClickDragBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleMarqueeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleMarqueeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleMarqueeManager_Statics::ClassParams = {
		&URectangleMarqueeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URectangleMarqueeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleMarqueeManager()
	{
		if (!Z_Registration_Info_UClass_URectangleMarqueeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleMarqueeManager.OuterSingleton, Z_Construct_UClass_URectangleMarqueeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleMarqueeManager.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<URectangleMarqueeManager>()
	{
		return URectangleMarqueeManager::StaticClass();
	}
	URectangleMarqueeManager::URectangleMarqueeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleMarqueeManager);
	URectangleMarqueeManager::~URectangleMarqueeManager() {}
	void UFractureToolSelection::StaticRegisterNativesUFractureToolSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSelection);
	UClass* Z_Construct_UClass_UFractureToolSelection_NoRegister()
	{
		return UFractureToolSelection::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBehaviorSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionBehaviorSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBehaviorSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionBehaviorSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectangleMarqueeManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RectangleMarqueeManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsedToolsContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "Comment", "// Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools\n" },
		{ "DisplayName", "Custom Selection Tool" },
		{ "IncludePath", "FractureToolSelection.h" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSet_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSet = { "SelectionBehaviorSet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSelection, SelectionBehaviorSet), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSource = { "SelectionBehaviorSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSelection, SelectionBehaviorSource), Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_RectangleMarqueeManager_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_RectangleMarqueeManager = { "RectangleMarqueeManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSelection, RectangleMarqueeManager), Z_Construct_UClass_URectangleMarqueeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_RectangleMarqueeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_RectangleMarqueeManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_UsedToolsContext_MetaData[] = {
		{ "Comment", "// the tools context responsible for the selection input router\n" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
		{ "ToolTip", "the tools context responsible for the selection input router" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_UsedToolsContext = { "UsedToolsContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSelection, UsedToolsContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_UsedToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_UsedToolsContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionSettings_MetaData[] = {
		{ "Category", "FixGeo" },
		{ "ModuleRelativePath", "Private/FractureToolSelection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionSettings = { "SelectionSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSelection, SelectionSettings), Z_Construct_UClass_UFractureSelectionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionBehaviorSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_RectangleMarqueeManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_UsedToolsContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSelection_Statics::NewProp_SelectionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSelection_Statics::ClassParams = {
		&UFractureToolSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSelection()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSelection.OuterSingleton, Z_Construct_UClass_UFractureToolSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSelection.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSelection>()
	{
		return UFractureToolSelection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSelection);
	UFractureToolSelection::~UFractureToolSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::EnumInfo[] = {
		{ EVolumeSelectionMethod_StaticEnum, TEXT("EVolumeSelectionMethod"), &Z_Registration_Info_UEnum_EVolumeSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1447243713U) },
		{ ESelectionOperation_StaticEnum, TEXT("ESelectionOperation"), &Z_Registration_Info_UEnum_ESelectionOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1014308266U) },
		{ EMouseSelectionMethod_StaticEnum, TEXT("EMouseSelectionMethod"), &Z_Registration_Info_UEnum_EMouseSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1966935227U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureSelectionSettings, UFractureSelectionSettings::StaticClass, TEXT("UFractureSelectionSettings"), &Z_Registration_Info_UClass_UFractureSelectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureSelectionSettings), 3310402889U) },
		{ Z_Construct_UClass_URectangleMarqueeManager, URectangleMarqueeManager::StaticClass, TEXT("URectangleMarqueeManager"), &Z_Registration_Info_UClass_URectangleMarqueeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleMarqueeManager), 1949426141U) },
		{ Z_Construct_UClass_UFractureToolSelection, UFractureToolSelection::StaticClass, TEXT("UFractureToolSelection"), &Z_Registration_Info_UClass_UFractureToolSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSelection), 1451658753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_675864288(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolSelection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
