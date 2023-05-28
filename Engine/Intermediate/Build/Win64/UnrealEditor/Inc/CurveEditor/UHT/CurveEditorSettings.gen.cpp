// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSettings();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSettings_NoRegister();
	CURVEEDITOR_API UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility();
	CURVEEDITOR_API UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition();
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomColorForChannel();
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveEditorTangentVisibility;
	static UEnum* ECurveEditorTangentVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("ECurveEditorTangentVisibility"));
		}
		return Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.OuterSingleton;
	}
	template<> CURVEEDITOR_API UEnum* StaticEnum<ECurveEditorTangentVisibility>()
	{
		return ECurveEditorTangentVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enumerators[] = {
		{ "ECurveEditorTangentVisibility::AllTangents", (int64)ECurveEditorTangentVisibility::AllTangents },
		{ "ECurveEditorTangentVisibility::SelectedKeys", (int64)ECurveEditorTangentVisibility::SelectedKeys },
		{ "ECurveEditorTangentVisibility::NoTangents", (int64)ECurveEditorTangentVisibility::NoTangents },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enum_MetaDataParams[] = {
		{ "AllTangents.Comment", "/** All tangents should be visible. */" },
		{ "AllTangents.Name", "ECurveEditorTangentVisibility::AllTangents" },
		{ "AllTangents.ToolTip", "All tangents should be visible." },
		{ "Comment", "/** Defines visibility states for the tangents in the curve editor. */" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "NoTangents.Comment", "/** Don't display tangents. */" },
		{ "NoTangents.Name", "ECurveEditorTangentVisibility::NoTangents" },
		{ "NoTangents.ToolTip", "Don't display tangents." },
		{ "SelectedKeys.Comment", "/** Only tangents from selected keys should be visible. */" },
		{ "SelectedKeys.Name", "ECurveEditorTangentVisibility::SelectedKeys" },
		{ "SelectedKeys.ToolTip", "Only tangents from selected keys should be visible." },
		{ "ToolTip", "Defines visibility states for the tangents in the curve editor." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		"ECurveEditorTangentVisibility",
		"ECurveEditorTangentVisibility",
		Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.InnerSingleton, Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveEditorTangentVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveEditorZoomPosition;
	static UEnum* ECurveEditorZoomPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorZoomPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveEditorZoomPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("ECurveEditorZoomPosition"));
		}
		return Z_Registration_Info_UEnum_ECurveEditorZoomPosition.OuterSingleton;
	}
	template<> CURVEEDITOR_API UEnum* StaticEnum<ECurveEditorZoomPosition>()
	{
		return ECurveEditorZoomPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enumerators[] = {
		{ "ECurveEditorZoomPosition::CurrentTime", (int64)ECurveEditorZoomPosition::CurrentTime },
		{ "ECurveEditorZoomPosition::MousePosition", (int64)ECurveEditorZoomPosition::MousePosition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the position to center the zoom about in the curve editor. */" },
		{ "CurrentTime.Comment", "/** Current Time. */" },
		{ "CurrentTime.Name", "ECurveEditorZoomPosition::CurrentTime" },
		{ "CurrentTime.ToolTip", "Current Time." },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "MousePosition.Comment", "/** Mouse Position. */" },
		{ "MousePosition.Name", "ECurveEditorZoomPosition::MousePosition" },
		{ "MousePosition.ToolTip", "Mouse Position." },
		{ "ToolTip", "Defines the position to center the zoom about in the curve editor." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		"ECurveEditorZoomPosition",
		"ECurveEditorZoomPosition",
		Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorZoomPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveEditorZoomPosition.InnerSingleton, Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveEditorZoomPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomColorForChannel;
class UScriptStruct* FCustomColorForChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomColorForChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomColorForChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomColorForChannel, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("CustomColorForChannel"));
	}
	return Z_Registration_Info_UScriptStruct_CustomColorForChannel.OuterSingleton;
}
template<> CURVEEDITOR_API UScriptStruct* StaticStruct<FCustomColorForChannel>()
{
	return FCustomColorForChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomColorForChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom Color Object*/" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Custom Color Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomColorForChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Custom Colors" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomColorForChannel, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Custom Colors" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomColorForChannel, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Custom Colors" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomColorForChannel, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		&NewStructOps,
		"CustomColorForChannel",
		sizeof(FCustomColorForChannel),
		alignof(FCustomColorForChannel),
		Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomColorForChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomColorForChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomColorForChannel.InnerSingleton, Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomColorForChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch;
class UScriptStruct* FCustomColorForSpaceSwitch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("CustomColorForSpaceSwitch"));
	}
	return Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.OuterSingleton;
}
template<> CURVEEDITOR_API UScriptStruct* StaticStruct<FCustomColorForSpaceSwitch>()
{
	return FCustomColorForSpaceSwitch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ControlName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom Color Object*/" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Custom Color Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomColorForSpaceSwitch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_ControlName_MetaData[] = {
		{ "Category", "Space Switch Colors" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomColorForSpaceSwitch, ControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_ControlName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Space Switch Colors" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomColorForSpaceSwitch, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		&NewStructOps,
		"CustomColorForSpaceSwitch",
		sizeof(FCustomColorForSpaceSwitch),
		alignof(FCustomColorForSpaceSwitch),
		Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.InnerSingleton, Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch.InnerSingleton;
	}
	void UCurveEditorSettings::StaticRegisterNativesUCurveEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorSettings);
	UClass* Z_Construct_UClass_UCurveEditorSettings_NoRegister()
	{
		return UCurveEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFrameCurveEditor_MetaData[];
#endif
		static void NewProp_bAutoFrameCurveEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFrameCurveEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInputPadding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameInputPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameOutputPadding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameOutputPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBufferedCurves_MetaData[];
#endif
		static void NewProp_bShowBufferedCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBufferedCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCurveEditorCurveToolTips_MetaData[];
#endif
		static void NewProp_bShowCurveEditorCurveToolTips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCurveEditorCurveToolTips;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TangentVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZoomPosition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomPosition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoomPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapTimeToSelection_MetaData[];
#endif
		static void NewProp_bSnapTimeToSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapTimeToSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpaceCustomColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentSpaceCustomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceCustomColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceCustomColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlSpaceCustomColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpaceCustomColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlSpaceCustomColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeViewWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreeViewWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Serializable options for curve editor. */" },
		{ "IncludePath", "CurveEditorSettings.h" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Serializable options for curve editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bAutoFrameCurveEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor = { "bAutoFrameCurveEditor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameInputPadding_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Number of pixels to add as padding in the input axis when framing curve keys */" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Number of pixels to add as padding in the input axis when framing curve keys" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameInputPadding = { "FrameInputPadding", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, FrameInputPadding), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameInputPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameInputPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameOutputPadding_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Number of pixels to add as padding in the output axis when framing curve keys */" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Number of pixels to add as padding in the output axis when framing curve keys" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameOutputPadding = { "FrameOutputPadding", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, FrameOutputPadding), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameOutputPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameOutputPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bShowBufferedCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves = { "bShowBufferedCurves", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bShowCurveEditorCurveToolTips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips = { "bShowCurveEditorCurveToolTips", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility = { "TangentVisibility", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, TangentVisibility), Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData)) }; // 2846369183
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition = { "ZoomPosition", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, ZoomPosition), Z_Construct_UEnum_CurveEditor_ECurveEditorZoomPosition, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition_MetaData)) }; // 3459303072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bSnapTimeToSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection = { "bSnapTimeToSelection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_SelectionColor_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_SelectionColor = { "SelectionColor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, SelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_SelectionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_SelectionColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors_Inner = { "CustomColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomColorForChannel, METADATA_PARAMS(nullptr, 0) }; // 167496826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors = { "CustomColors", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, CustomColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors_MetaData)) }; // 167496826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ParentSpaceCustomColor_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ParentSpaceCustomColor = { "ParentSpaceCustomColor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, ParentSpaceCustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ParentSpaceCustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ParentSpaceCustomColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_WorldSpaceCustomColor_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_WorldSpaceCustomColor = { "WorldSpaceCustomColor", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, WorldSpaceCustomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_WorldSpaceCustomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_WorldSpaceCustomColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors_Inner = { "ControlSpaceCustomColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch, METADATA_PARAMS(nullptr, 0) }; // 107525136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors = { "ControlSpaceCustomColors", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, ControlSpaceCustomColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors_MetaData)) }; // 107525136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TreeViewWidth_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TreeViewWidth = { "TreeViewWidth", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorSettings, TreeViewWidth), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TreeViewWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TreeViewWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameInputPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_FrameOutputPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowBufferedCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ZoomPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bSnapTimeToSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_SelectionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_CustomColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ParentSpaceCustomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_WorldSpaceCustomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_ControlSpaceCustomColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TreeViewWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorSettings_Statics::ClassParams = {
		&UCurveEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorSettings.OuterSingleton, Z_Construct_UClass_UCurveEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorSettings.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorSettings>()
	{
		return UCurveEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorSettings);
	UCurveEditorSettings::~UCurveEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::EnumInfo[] = {
		{ ECurveEditorTangentVisibility_StaticEnum, TEXT("ECurveEditorTangentVisibility"), &Z_Registration_Info_UEnum_ECurveEditorTangentVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2846369183U) },
		{ ECurveEditorZoomPosition_StaticEnum, TEXT("ECurveEditorZoomPosition"), &Z_Registration_Info_UEnum_ECurveEditorZoomPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3459303072U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FCustomColorForChannel::StaticStruct, Z_Construct_UScriptStruct_FCustomColorForChannel_Statics::NewStructOps, TEXT("CustomColorForChannel"), &Z_Registration_Info_UScriptStruct_CustomColorForChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomColorForChannel), 167496826U) },
		{ FCustomColorForSpaceSwitch::StaticStruct, Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics::NewStructOps, TEXT("CustomColorForSpaceSwitch"), &Z_Registration_Info_UScriptStruct_CustomColorForSpaceSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomColorForSpaceSwitch), 107525136U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorSettings, UCurveEditorSettings::StaticClass, TEXT("UCurveEditorSettings"), &Z_Registration_Info_UClass_UCurveEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorSettings), 2577190698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_3708884011(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
