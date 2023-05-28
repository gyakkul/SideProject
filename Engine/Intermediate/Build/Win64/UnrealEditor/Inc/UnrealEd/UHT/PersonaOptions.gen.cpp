// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/PersonaOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
	UNREALED_API UClass* Z_Construct_UClass_UPersonaOptions();
	UNREALED_API UClass* Z_Construct_UClass_UPersonaOptions_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOptions();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigOptions();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode;
	static UEnum* EAnimationViewportCameraFollowMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EAnimationViewportCameraFollowMode"));
		}
		return Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EAnimationViewportCameraFollowMode>()
	{
		return EAnimationViewportCameraFollowMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enumerators[] = {
		{ "EAnimationViewportCameraFollowMode::None", (int64)EAnimationViewportCameraFollowMode::None },
		{ "EAnimationViewportCameraFollowMode::Bounds", (int64)EAnimationViewportCameraFollowMode::Bounds },
		{ "EAnimationViewportCameraFollowMode::Bone", (int64)EAnimationViewportCameraFollowMode::Bone },
		{ "EAnimationViewportCameraFollowMode::Root", (int64)EAnimationViewportCameraFollowMode::Root },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enum_MetaDataParams[] = {
		{ "Bone.Comment", "/** Follow a bone or socket */" },
		{ "Bone.Name", "EAnimationViewportCameraFollowMode::Bone" },
		{ "Bone.ToolTip", "Follow a bone or socket" },
		{ "Bounds.Comment", "/** Follow the bounds of the mesh */" },
		{ "Bounds.Name", "EAnimationViewportCameraFollowMode::Bounds" },
		{ "Bounds.ToolTip", "Follow the bounds of the mesh" },
		{ "Comment", "/** Persisted camera follow mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "None.Comment", "/** Standard camera controls */" },
		{ "None.Name", "EAnimationViewportCameraFollowMode::None" },
		{ "None.ToolTip", "Standard camera controls" },
		{ "Root.Comment", "/** Follow the root bone while keeping the mesh vertically centered */" },
		{ "Root.Name", "EAnimationViewportCameraFollowMode::Root" },
		{ "Root.ToolTip", "Follow the root bone while keeping the mesh vertically centered" },
		{ "ToolTip", "Persisted camera follow mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EAnimationViewportCameraFollowMode",
		"EAnimationViewportCameraFollowMode",
		Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode()
	{
		if (!Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportConfigOptions;
class UScriptStruct* FViewportConfigOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportConfigOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportConfigOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportConfigOptions, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ViewportConfigOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportConfigOptions.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FViewportConfigOptions>()
{
	return FViewportConfigOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewportConfigOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewModeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeedSetting_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CameraSpeedSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeedScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeedScalar;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraFollowMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFollowMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraFollowMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFollowBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraFollowBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Persistent per-viewport options */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Persistent per-viewport options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportConfigOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex = { "ViewModeIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, ViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex_MetaData)) }; // 1054163023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV = { "ViewFOV", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, ViewFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedSetting_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedSetting = { "CameraSpeedSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, CameraSpeedSetting), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedScalar_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedScalar = { "CameraSpeedScalar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, CameraSpeedScalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedScalar_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData[] = {
		{ "Comment", "/** Persisted camera follow mode for a viewport */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Persisted camera follow mode for a viewport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode = { "CameraFollowMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, CameraFollowMode), Z_Construct_UEnum_UnrealEd_EAnimationViewportCameraFollowMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_MetaData)) }; // 1769404155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName = { "CameraFollowBoneName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportConfigOptions, CameraFollowBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewModeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_ViewFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraSpeedScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewProp_CameraFollowBoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ViewportConfigOptions",
		sizeof(FViewportConfigOptions),
		alignof(FViewportConfigOptions),
		Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewportConfigOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportConfigOptions.InnerSingleton, Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewportConfigOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetEditorOptions;
class UScriptStruct* FAssetEditorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetEditorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetEditorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOptions, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("AssetEditorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AssetEditorOptions.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FAssetEditorOptions>()
{
	return FAssetEditorOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetEditorOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Options that should be unique per asset editor (like skeletal mesh or anim sequence editors) */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Options that should be unique per asset editor (like skeletal mesh or anim sequence editors)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData[] = {
		{ "Comment", "/** the name of the asset editor properties apply to */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "the name of the asset editor properties apply to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetEditorOptions, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Per-viewport configuration */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Per-viewport configuration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs = { "ViewportConfigs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ViewportConfigs, FAssetEditorOptions), nullptr, nullptr, STRUCT_OFFSET(FAssetEditorOptions, ViewportConfigs), Z_Construct_UScriptStruct_FViewportConfigOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs_MetaData)) }; // 1881362836
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewProp_ViewportConfigs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"AssetEditorOptions",
		sizeof(FAssetEditorOptions),
		alignof(FAssetEditorOptions),
		Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetEditorOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetEditorOptions.InnerSingleton, Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetEditorOptions.InnerSingleton;
	}
	void UPersonaOptions::StaticRegisterNativesUPersonaOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaOptions);
	UClass* Z_Construct_UClass_UPersonaOptions_NoRegister()
	{
		return UPersonaOptions::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAlignFloorToMesh_MetaData[];
#endif
		static void NewProp_bAutoAlignFloorToMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAlignFloorToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysOpenAnimationAssetsInNewTab_MetaData[];
#endif
		static void NewProp_bAlwaysOpenAnimationAssetsInNewTab_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysOpenAnimationAssetsInNewTab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[];
#endif
		static void NewProp_bShowGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightOrigin_MetaData[];
#endif
		static void NewProp_bHighlightOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMuteAudio_MetaData[];
#endif
		static void NewProp_bMuteAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudioAttenuation_MetaData[];
#endif
		static void NewProp_bUseAudioAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowMeshStats_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShowMeshStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalAxesSelection_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultLocalAxesSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneDrawSelection_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultBoneDrawSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOfSelectedBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentOfSelectedBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionTimingNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionTimingNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyTimingNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyTimingNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointTimingNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointTimingNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseAnimationOnCameraMove_MetaData[];
#endif
		static void NewProp_bPauseAnimationOnCameraMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAnimationOnCameraMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInlineSocketEditor_MetaData[];
#endif
		static void NewProp_bUseInlineSocketEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInlineSocketEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData[];
#endif
		static void NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenSkeletonHierarchyWhenFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideParentsWhenFiltering_MetaData[];
#endif
		static void NewProp_bHideParentsWhenFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideParentsWhenFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandTreeOnSelection_MetaData[];
#endif
		static void NewProp_bExpandTreeOnSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandTreeOnSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData[];
#endif
		static void NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData[];
#endif
		static void NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMeshSectionSelection_MetaData[];
#endif
		static void NewProp_bAllowMeshSectionSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMeshSectionSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFolderFiltersInAssetBrowser_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumFolderFiltersInAssetBrowser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetEditorOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetEditorOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetEditorOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveEditorSnapInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveEditorSnapInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineScrubSnapValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimelineScrubSnapValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimelineDisplayFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineDisplayFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimelineDisplayFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimelineDisplayPercentage_MetaData[];
#endif
		static void NewProp_bTimelineDisplayPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimelineDisplayPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimelineDisplayFormatSecondary_MetaData[];
#endif
		static void NewProp_bTimelineDisplayFormatSecondary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimelineDisplayFormatSecondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimelineDisplayCurveKeys_MetaData[];
#endif
		static void NewProp_bTimelineDisplayCurveKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimelineDisplayCurveKeys;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TimelineEnabledSnaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineEnabledSnaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimelineEnabledSnaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIncompatibleSkeletonSelection_MetaData[];
#endif
		static void NewProp_bAllowIncompatibleSkeletonSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIncompatibleSkeletonSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTreeViewForAnimationCurves_MetaData[];
#endif
		static void NewProp_bUseTreeViewForAnimationCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTreeViewForAnimationCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCurveGroupingDelimiters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationCurveGroupingDelimiters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/PersonaOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData[] = {
		{ "Category", "Preview Scene" },
		{ "Comment", "/** Whether or not the floor should be aligned to the Skeletal Mesh's bounds by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the floor should be aligned to the Skeletal Mesh's bounds by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAutoAlignFloorToMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh = { "bAutoAlignFloorToMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab_MetaData[] = {
		{ "Category", "Assets" },
		{ "Comment", "/** Whether or not the Animation Editor opens in an additional tab when double clicking an animation asset or if it reuses an already existing Animation Editor tab.\n\x09  * You can also keep this disabled and hold shift pressed while double clicking the asset to open the asset inside its own tab.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the Animation Editor opens in an additional tab when double clicking an animation asset or if it reuses an already existing Animation Editor tab.\nYou can also keep this disabled and hold shift pressed while double clicking the asset to open the asset inside its own tab." },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAlwaysOpenAnimationAssetsInNewTab = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab = { "bAlwaysOpenAnimationAssetsInNewTab", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Whether or not the grid should be visible by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the grid should be visible by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bShowGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Whether or not the XYZ axis at the origin should be highlighted on the grid by default */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not the XYZ axis at the origin should be highlighted on the grid by default" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bHighlightOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin = { "bHighlightOrigin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Whether or not audio should be muted by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not audio should be muted by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bMuteAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio = { "bMuteAudio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bUseAudioAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation = { "bUseAudioAttenuation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Currently Stats can have None, Basic and Detailed. Please refer to EDisplayInfoMode. */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Currently Stats can have None, Basic and Detailed. Please refer to EDisplayInfoMode." },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats = { "ShowMeshStats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, ShowMeshStats), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Index used to determine which ViewMode should be used by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Index used to determine which ViewMode should be used by default for the Animation Editor(s)" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection = { "DefaultLocalAxesSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, DefaultLocalAxesSelection), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Index used to determine which Bone Draw Mode should be used by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Index used to determine which Bone Draw Mode should be used by default for the Animation Editor(s)" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection = { "DefaultBoneDrawSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, DefaultBoneDrawSelection), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneColor = { "DefaultBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, DefaultBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SelectedBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SelectedBoneColor = { "SelectedBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, SelectedBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SelectedBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SelectedBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AffectedBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AffectedBoneColor = { "AffectedBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, AffectedBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AffectedBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AffectedBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DisabledBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DisabledBoneColor = { "DisabledBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, DisabledBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DisabledBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DisabledBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ParentOfSelectedBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ParentOfSelectedBoneColor = { "ParentOfSelectedBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, ParentOfSelectedBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ParentOfSelectedBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ParentOfSelectedBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_VirtualBoneColor_MetaData[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_VirtualBoneColor = { "VirtualBoneColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, VirtualBoneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_VirtualBoneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_VirtualBoneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor = { "SectionTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, SectionTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor = { "NotifyTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, NotifyTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData[] = {
		{ "Category", "Composites and Montages" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor = { "BranchingPointTimingNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, BranchingPointTimingNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Pause the preview animation if playing when moving the camera and resume when finished */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Pause the preview animation if playing when moving the camera and resume when finished" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bPauseAnimationOnCameraMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove = { "bPauseAnimationOnCameraMove", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "Comment", "/** Whether to use a socket editor that is created in-line inside the skeleton tree, or whether to use the separate details panel */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to use a socket editor that is created in-line inside the skeleton tree, or whether to use the separate details panel" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bUseInlineSocketEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor = { "bUseInlineSocketEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "Comment", "/** Whether to keep the hierarchy or flatten it when searching for bones, sockets etc. */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to keep the hierarchy or flatten it when searching for bones, sockets etc." },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bFlattenSkeletonHierarchyWhenFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering = { "bFlattenSkeletonHierarchyWhenFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "Comment", "/** Whether to hide parent items when filtering or to display them grayed out */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to hide parent items when filtering or to display them grayed out" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bHideParentsWhenFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering = { "bHideParentsWhenFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection_MetaData[] = {
		{ "Category", "Skeleton Tree" },
		{ "Comment", "/** Whether to focus and expand an item's tree recursively based on selection */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to focus and expand an item's tree recursively based on selection" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bExpandTreeOnSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection = { "bExpandTreeOnSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData[] = {
		{ "Category", "Preview Scene|AdditionalMesh" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons = { "bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData[] = {
		{ "Category", "Preview Scene|AdditionalMesh" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowPreviewMeshCollectionsToUseCustomAnimBP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP = { "bAllowPreviewMeshCollectionsToUseCustomAnimBP", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether or not Skeletal Mesh Section selection should be enabled by default for the Animation Editor(s)*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether or not Skeletal Mesh Section selection should be enabled by default for the Animation Editor(s)" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowMeshSectionSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection = { "bAllowMeshSectionSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData[] = {
		{ "Category", "Asset Browser" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of folder filters to allow at any one time in the animation tool's asset browser */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "The number of folder filters to allow at any one time in the animation tool's asset browser" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser = { "NumFolderFiltersInAssetBrowser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, NumFolderFiltersInAssetBrowser), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_Inner = { "AssetEditorOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetEditorOptions, METADATA_PARAMS(nullptr, 0) }; // 204084638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData[] = {
		{ "Comment", "/** Options that should be unique per asset editor (like skeletal mesh or anim sequence editors) */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Options that should be unique per asset editor (like skeletal mesh or anim sequence editors)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions = { "AssetEditorOptions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, AssetEditorOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_MetaData)) }; // 204084638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_CurveEditorSnapInterval_MetaData[] = {
		{ "Comment", "/** Snap value used to determine scrub resolution of the curve timeline */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Snap value used to determine scrub resolution of the curve timeline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_CurveEditorSnapInterval = { "CurveEditorSnapInterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, CurveEditorSnapInterval), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_CurveEditorSnapInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_CurveEditorSnapInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineScrubSnapValue_MetaData[] = {
		{ "Comment", "/** Snap value used to determine scrub resolution of the anim timeline */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Snap value used to determine scrub resolution of the anim timeline" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineScrubSnapValue = { "TimelineScrubSnapValue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, TimelineScrubSnapValue), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineScrubSnapValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineScrubSnapValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat_MetaData[] = {
		{ "Comment", "/** Display format for the anim timeline */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Display format for the anim timeline" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat = { "TimelineDisplayFormat", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, TimelineDisplayFormat), Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat_MetaData)) }; // 161162794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage_MetaData[] = {
		{ "Comment", "/** Whether to display percentage in the anim timeline */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to display percentage in the anim timeline" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bTimelineDisplayPercentage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage = { "bTimelineDisplayPercentage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary_MetaData[] = {
		{ "Comment", "/** Whether to display secondary format (times/frames) in the anim timeline */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to display secondary format (times/frames) in the anim timeline" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bTimelineDisplayFormatSecondary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary = { "bTimelineDisplayFormatSecondary", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys_MetaData[] = {
		{ "Comment", "/** Whether to display keys in the timeline's curve tracks */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to display keys in the timeline's curve tracks" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bTimelineDisplayCurveKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys = { "bTimelineDisplayCurveKeys", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps_Inner = { "TimelineEnabledSnaps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps_MetaData[] = {
		{ "Comment", "/** Whether to snap to various things */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to snap to various things" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps = { "TimelineEnabledSnaps", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, TimelineEnabledSnaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection_MetaData[] = {
		{ "Category", "Assets" },
		{ "Comment", "/** Whether to allow animation assets that are incompatible with the current skeleton/skeletal mesh to be selected. */" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to allow animation assets that are incompatible with the current skeleton/skeletal mesh to be selected." },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bAllowIncompatibleSkeletonSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection = { "bAllowIncompatibleSkeletonSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Whether to use tree view for animation curves*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Whether to use tree view for animation curves" },
	};
#endif
	void Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves_SetBit(void* Obj)
	{
		((UPersonaOptions*)Obj)->bUseTreeViewForAnimationCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves = { "bUseTreeViewForAnimationCurves", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaOptions), &Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AnimationCurveGroupingDelimiters_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Delimiters to split animation curve names for grouping*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PersonaOptions.h" },
		{ "ToolTip", "Delimiters to split animation curve names for grouping" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AnimationCurveGroupingDelimiters = { "AnimationCurveGroupingDelimiters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaOptions, AnimationCurveGroupingDelimiters), METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AnimationCurveGroupingDelimiters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AnimationCurveGroupingDelimiters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAutoAlignFloorToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAlwaysOpenAnimationAssetsInNewTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bShowGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHighlightOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bMuteAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseAudioAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ShowMeshStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultLocalAxesSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneDrawSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DefaultBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SelectedBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AffectedBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_DisabledBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_ParentOfSelectedBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_VirtualBoneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_SectionTimingNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NotifyTimingNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_BranchingPointTimingNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bPauseAnimationOnCameraMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseInlineSocketEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bFlattenSkeletonHierarchyWhenFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bHideParentsWhenFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bExpandTreeOnSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToSelectFromDifferentSkeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowPreviewMeshCollectionsToUseCustomAnimBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowMeshSectionSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_NumFolderFiltersInAssetBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AssetEditorOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_CurveEditorSnapInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineScrubSnapValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineDisplayFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayFormatSecondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bTimelineDisplayCurveKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_TimelineEnabledSnaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bAllowIncompatibleSkeletonSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_bUseTreeViewForAnimationCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaOptions_Statics::NewProp_AnimationCurveGroupingDelimiters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaOptions_Statics::ClassParams = {
		&UPersonaOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaOptions()
	{
		if (!Z_Registration_Info_UClass_UPersonaOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaOptions.OuterSingleton, Z_Construct_UClass_UPersonaOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPersonaOptions>()
	{
		return UPersonaOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaOptions);
	UPersonaOptions::~UPersonaOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::EnumInfo[] = {
		{ EAnimationViewportCameraFollowMode_StaticEnum, TEXT("EAnimationViewportCameraFollowMode"), &Z_Registration_Info_UEnum_EAnimationViewportCameraFollowMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1769404155U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ScriptStructInfo[] = {
		{ FViewportConfigOptions::StaticStruct, Z_Construct_UScriptStruct_FViewportConfigOptions_Statics::NewStructOps, TEXT("ViewportConfigOptions"), &Z_Registration_Info_UScriptStruct_ViewportConfigOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportConfigOptions), 1881362836U) },
		{ FAssetEditorOptions::StaticStruct, Z_Construct_UScriptStruct_FAssetEditorOptions_Statics::NewStructOps, TEXT("AssetEditorOptions"), &Z_Registration_Info_UScriptStruct_AssetEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetEditorOptions), 204084638U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaOptions, UPersonaOptions::StaticClass, TEXT("UPersonaOptions"), &Z_Registration_Info_UClass_UPersonaOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaOptions), 658154224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_3811717321(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
