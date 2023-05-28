// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/LevelEditorPlaySettings.h"
#include "../../../Editor/UnrealEd/Classes/Settings/LevelEditorPlayNetworkEmulationSettings.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorPlaySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
	UNREALED_API UClass* Z_Construct_UClass_UCommonResolutionMenuContext();
	UNREALED_API UClass* Z_Construct_UClass_UCommonResolutionMenuContext_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorPlaySettings();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELabelAnchorMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELaunchModeType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeLocations();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayNetMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPlayScreenResolution();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELabelAnchorMode;
	static UEnum* ELabelAnchorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELabelAnchorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELabelAnchorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELabelAnchorMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELabelAnchorMode"));
		}
		return Z_Registration_Info_UEnum_ELabelAnchorMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELabelAnchorMode>()
	{
		return ELabelAnchorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enumerators[] = {
		{ "LabelAnchorMode_TopLeft", (int64)LabelAnchorMode_TopLeft },
		{ "LabelAnchorMode_TopCenter", (int64)LabelAnchorMode_TopCenter },
		{ "LabelAnchorMode_TopRight", (int64)LabelAnchorMode_TopRight },
		{ "LabelAnchorMode_CenterLeft", (int64)LabelAnchorMode_CenterLeft },
		{ "LabelAnchorMode_Centered", (int64)LabelAnchorMode_Centered },
		{ "LabelAnchorMode_CenterRight", (int64)LabelAnchorMode_CenterRight },
		{ "LabelAnchorMode_BottomLeft", (int64)LabelAnchorMode_BottomLeft },
		{ "LabelAnchorMode_BottomCenter", (int64)LabelAnchorMode_BottomCenter },
		{ "LabelAnchorMode_BottomRight", (int64)LabelAnchorMode_BottomRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates label anchor modes.\n */" },
		{ "LabelAnchorMode_BottomCenter.DisplayName", "Bottom Center" },
		{ "LabelAnchorMode_BottomCenter.Name", "LabelAnchorMode_BottomCenter" },
		{ "LabelAnchorMode_BottomLeft.DisplayName", "Bottom Left" },
		{ "LabelAnchorMode_BottomLeft.Name", "LabelAnchorMode_BottomLeft" },
		{ "LabelAnchorMode_BottomRight.DisplayName", "Bottom Right" },
		{ "LabelAnchorMode_BottomRight.Name", "LabelAnchorMode_BottomRight" },
		{ "LabelAnchorMode_Centered.DisplayName", "Centered" },
		{ "LabelAnchorMode_Centered.Name", "LabelAnchorMode_Centered" },
		{ "LabelAnchorMode_CenterLeft.DisplayName", "Center Left" },
		{ "LabelAnchorMode_CenterLeft.Name", "LabelAnchorMode_CenterLeft" },
		{ "LabelAnchorMode_CenterRight.DisplayName", "Center Right" },
		{ "LabelAnchorMode_CenterRight.Name", "LabelAnchorMode_CenterRight" },
		{ "LabelAnchorMode_TopCenter.DisplayName", "Top Center" },
		{ "LabelAnchorMode_TopCenter.Name", "LabelAnchorMode_TopCenter" },
		{ "LabelAnchorMode_TopLeft.DisplayName", "Top Left" },
		{ "LabelAnchorMode_TopLeft.Name", "LabelAnchorMode_TopLeft" },
		{ "LabelAnchorMode_TopRight.DisplayName", "Top Right" },
		{ "LabelAnchorMode_TopRight.Name", "LabelAnchorMode_TopRight" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Enumerates label anchor modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELabelAnchorMode",
		"ELabelAnchorMode",
		Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELabelAnchorMode()
	{
		if (!Z_Registration_Info_UEnum_ELabelAnchorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELabelAnchorMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELabelAnchorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELabelAnchorMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELaunchModeType;
	static UEnum* ELaunchModeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELaunchModeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELaunchModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELaunchModeType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELaunchModeType"));
		}
		return Z_Registration_Info_UEnum_ELaunchModeType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELaunchModeType>()
	{
		return ELaunchModeType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enumerators[] = {
		{ "LaunchMode_OnDevice", (int64)LaunchMode_OnDevice },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enum_MetaDataParams[] = {
		{ "LaunchMode_OnDevice.Comment", "/** Runs the map on a specified device. */" },
		{ "LaunchMode_OnDevice.Name", "LaunchMode_OnDevice" },
		{ "LaunchMode_OnDevice.ToolTip", "Runs the map on a specified device." },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELaunchModeType",
		"ELaunchModeType",
		Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELaunchModeType()
	{
		if (!Z_Registration_Info_UEnum_ELaunchModeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELaunchModeType.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELaunchModeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELaunchModeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayModeLocations;
	static UEnum* EPlayModeLocations_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayModeLocations.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayModeLocations.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayModeLocations, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayModeLocations"));
		}
		return Z_Registration_Info_UEnum_EPlayModeLocations.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayModeLocations>()
	{
		return EPlayModeLocations_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enumerators[] = {
		{ "PlayLocation_CurrentCameraLocation", (int64)PlayLocation_CurrentCameraLocation },
		{ "PlayLocation_DefaultPlayerStart", (int64)PlayLocation_DefaultPlayerStart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "PlayLocation_CurrentCameraLocation.Comment", "/** Spawns the player at the current camera location. */" },
		{ "PlayLocation_CurrentCameraLocation.Name", "PlayLocation_CurrentCameraLocation" },
		{ "PlayLocation_CurrentCameraLocation.ToolTip", "Spawns the player at the current camera location." },
		{ "PlayLocation_DefaultPlayerStart.Comment", "/** Spawns the player from the default player start. */" },
		{ "PlayLocation_DefaultPlayerStart.Name", "PlayLocation_DefaultPlayerStart" },
		{ "PlayLocation_DefaultPlayerStart.ToolTip", "Spawns the player from the default player start." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayModeLocations",
		"EPlayModeLocations",
		Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeLocations()
	{
		if (!Z_Registration_Info_UEnum_EPlayModeLocations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayModeLocations.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayModeLocations_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayModeLocations.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayModeType;
	static UEnum* EPlayModeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayModeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayModeType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayModeType"));
		}
		return Z_Registration_Info_UEnum_EPlayModeType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayModeType>()
	{
		return EPlayModeType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enumerators[] = {
		{ "PlayMode_InViewPort", (int64)PlayMode_InViewPort },
		{ "PlayMode_InEditorFloating", (int64)PlayMode_InEditorFloating },
		{ "PlayMode_InMobilePreview", (int64)PlayMode_InMobilePreview },
		{ "PlayMode_InTargetedMobilePreview", (int64)PlayMode_InTargetedMobilePreview },
		{ "PlayMode_InVulkanPreview", (int64)PlayMode_InVulkanPreview },
		{ "PlayMode_InNewProcess", (int64)PlayMode_InNewProcess },
		{ "PlayMode_InVR", (int64)PlayMode_InVR },
		{ "PlayMode_Simulate", (int64)PlayMode_Simulate },
		{ "PlayMode_QuickLaunch", (int64)PlayMode_QuickLaunch },
		{ "PlayMode_Count", (int64)PlayMode_Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "PlayMode_Count.Comment", "/** The number of different Play Modes. */" },
		{ "PlayMode_Count.Name", "PlayMode_Count" },
		{ "PlayMode_Count.ToolTip", "The number of different Play Modes." },
		{ "PlayMode_InEditorFloating.Comment", "/** Runs in a new window. */" },
		{ "PlayMode_InEditorFloating.Name", "PlayMode_InEditorFloating" },
		{ "PlayMode_InEditorFloating.ToolTip", "Runs in a new window." },
		{ "PlayMode_InMobilePreview.Comment", "/** Runs a mobile preview in a new process. */" },
		{ "PlayMode_InMobilePreview.Name", "PlayMode_InMobilePreview" },
		{ "PlayMode_InMobilePreview.ToolTip", "Runs a mobile preview in a new process." },
		{ "PlayMode_InNewProcess.Comment", "/** Runs in a new process. */" },
		{ "PlayMode_InNewProcess.Name", "PlayMode_InNewProcess" },
		{ "PlayMode_InNewProcess.ToolTip", "Runs in a new process." },
		{ "PlayMode_InTargetedMobilePreview.Comment", "/** Runs a mobile preview targeted to a particular device in a new process. */" },
		{ "PlayMode_InTargetedMobilePreview.Name", "PlayMode_InTargetedMobilePreview" },
		{ "PlayMode_InTargetedMobilePreview.ToolTip", "Runs a mobile preview targeted to a particular device in a new process." },
		{ "PlayMode_InViewPort.Comment", "/** Runs from within the editor. */" },
		{ "PlayMode_InViewPort.Name", "PlayMode_InViewPort" },
		{ "PlayMode_InViewPort.ToolTip", "Runs from within the editor." },
		{ "PlayMode_InVR.Comment", "/** Runs in VR. */" },
		{ "PlayMode_InVR.Name", "PlayMode_InVR" },
		{ "PlayMode_InVR.ToolTip", "Runs in VR." },
		{ "PlayMode_InVulkanPreview.Comment", "/** Runs a vulkan preview in a new process. */" },
		{ "PlayMode_InVulkanPreview.Name", "PlayMode_InVulkanPreview" },
		{ "PlayMode_InVulkanPreview.ToolTip", "Runs a vulkan preview in a new process." },
		{ "PlayMode_QuickLaunch.Comment", "/** Runs the last launched device (from Platforms menu) */" },
		{ "PlayMode_QuickLaunch.Name", "PlayMode_QuickLaunch" },
		{ "PlayMode_QuickLaunch.ToolTip", "Runs the last launched device (from Platforms menu)" },
		{ "PlayMode_Simulate.Comment", "/** Simulates in viewport without possessing the player. */" },
		{ "PlayMode_Simulate.Name", "PlayMode_Simulate" },
		{ "PlayMode_Simulate.ToolTip", "Simulates in viewport without possessing the player." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayModeType",
		"EPlayModeType",
		Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayModeType()
	{
		if (!Z_Registration_Info_UEnum_EPlayModeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayModeType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayModeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayModeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayNetMode;
	static UEnum* EPlayNetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayNetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayNetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayNetMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayNetMode"));
		}
		return Z_Registration_Info_UEnum_EPlayNetMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayNetMode>()
	{
		return EPlayNetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enumerators[] = {
		{ "PIE_Standalone", (int64)PIE_Standalone },
		{ "PIE_ListenServer", (int64)PIE_ListenServer },
		{ "PIE_Client", (int64)PIE_Client },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "PIE_Client.Comment", "/** The editor will act as a Client. A server will be started for you behind the scenes to connect to. */" },
		{ "PIE_Client.DisplayName", "Play As Client" },
		{ "PIE_Client.Name", "PIE_Client" },
		{ "PIE_Client.ToolTip", "The editor will act as a Client. A server will be started for you behind the scenes to connect to." },
		{ "PIE_ListenServer.Comment", "/** The editor will act as both a Server and a Client. Additional instances may be opened beyond that depending on the number of clients. */" },
		{ "PIE_ListenServer.DisplayName", "Play As Listen Server" },
		{ "PIE_ListenServer.Name", "PIE_ListenServer" },
		{ "PIE_ListenServer.ToolTip", "The editor will act as both a Server and a Client. Additional instances may be opened beyond that depending on the number of clients." },
		{ "PIE_Standalone.Comment", "/** A standalone game will be started. This will not create a dedicated server, nor automatically connect to one. A server can be launched by enabling bLaunchSeparateServer if you need to test offline -> server connection flow for your game. */" },
		{ "PIE_Standalone.DisplayName", "Play Standalone" },
		{ "PIE_Standalone.Name", "PIE_Standalone" },
		{ "PIE_Standalone.ToolTip", "A standalone game will be started. This will not create a dedicated server, nor automatically connect to one. A server can be launched by enabling bLaunchSeparateServer if you need to test offline -> server connection flow for your game." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayNetMode",
		"EPlayNetMode",
		Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayNetMode()
	{
		if (!Z_Registration_Info_UEnum_EPlayNetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayNetMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayNetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayNetMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayOnBuildMode;
	static UEnum* EPlayOnBuildMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnBuildMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayOnBuildMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayOnBuildMode"));
		}
		return Z_Registration_Info_UEnum_EPlayOnBuildMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayOnBuildMode>()
	{
		return EPlayOnBuildMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enumerators[] = {
		{ "PlayOnBuild_Always", (int64)PlayOnBuild_Always },
		{ "PlayOnBuild_Never", (int64)PlayOnBuild_Never },
		{ "PlayOnBuild_Default", (int64)PlayOnBuild_Default },
		{ "PlayOnBuild_IfEditorBuiltLocally", (int64)PlayOnBuild_IfEditorBuiltLocally },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Determines whether to build the executable when launching on device. Note the equivalence between these settings and EProjectPackagingBuild.\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "PlayOnBuild_Always.Comment", "/** Always build. */" },
		{ "PlayOnBuild_Always.DisplayName", "Always" },
		{ "PlayOnBuild_Always.Name", "PlayOnBuild_Always" },
		{ "PlayOnBuild_Always.ToolTip", "Always build." },
		{ "PlayOnBuild_Default.Comment", "/** Build based on project type. */" },
		{ "PlayOnBuild_Default.DisplayName", "If project has code, or running a locally built editor" },
		{ "PlayOnBuild_Default.Name", "PlayOnBuild_Default" },
		{ "PlayOnBuild_Default.ToolTip", "Build based on project type." },
		{ "PlayOnBuild_IfEditorBuiltLocally.Comment", "/** Build if we're using a locally built (ie. non-promoted) editor. */" },
		{ "PlayOnBuild_IfEditorBuiltLocally.DisplayName", "If running a locally built editor" },
		{ "PlayOnBuild_IfEditorBuiltLocally.Name", "PlayOnBuild_IfEditorBuiltLocally" },
		{ "PlayOnBuild_IfEditorBuiltLocally.ToolTip", "Build if we're using a locally built (ie. non-promoted) editor." },
		{ "PlayOnBuild_Never.Comment", "/** Never build. */" },
		{ "PlayOnBuild_Never.DisplayName", "Never" },
		{ "PlayOnBuild_Never.Name", "PlayOnBuild_Never" },
		{ "PlayOnBuild_Never.ToolTip", "Never build." },
		{ "ToolTip", "Determines whether to build the executable when launching on device. Note the equivalence between these settings and EProjectPackagingBuild." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayOnBuildMode",
		"EPlayOnBuildMode",
		Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnBuildMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayOnBuildMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayOnBuildMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration;
	static UEnum* EPlayOnLaunchConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayOnLaunchConfiguration"));
		}
		return Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayOnLaunchConfiguration>()
	{
		return EPlayOnLaunchConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enumerators[] = {
		{ "LaunchConfig_Default", (int64)LaunchConfig_Default },
		{ "LaunchConfig_Debug", (int64)LaunchConfig_Debug },
		{ "LaunchConfig_Development", (int64)LaunchConfig_Development },
		{ "LaunchConfig_Test", (int64)LaunchConfig_Test },
		{ "LaunchConfig_Shipping", (int64)LaunchConfig_Shipping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* Configuration to use when launching on device. */" },
		{ "LaunchConfig_Debug.Comment", "/** Launch on device with a Debug build configuration. */" },
		{ "LaunchConfig_Debug.DisplayName", "Debug" },
		{ "LaunchConfig_Debug.Name", "LaunchConfig_Debug" },
		{ "LaunchConfig_Debug.ToolTip", "Launch on device with a Debug build configuration." },
		{ "LaunchConfig_Default.Comment", "/** Launch on device with the same build configuration as the editor. */" },
		{ "LaunchConfig_Default.DisplayName", "Same as Editor" },
		{ "LaunchConfig_Default.Name", "LaunchConfig_Default" },
		{ "LaunchConfig_Default.ToolTip", "Launch on device with the same build configuration as the editor." },
		{ "LaunchConfig_Development.Comment", "/** Launch on device with a Development build configuration. */" },
		{ "LaunchConfig_Development.DisplayName", "Development" },
		{ "LaunchConfig_Development.Name", "LaunchConfig_Development" },
		{ "LaunchConfig_Development.ToolTip", "Launch on device with a Development build configuration." },
		{ "LaunchConfig_Shipping.Comment", "/** Launch on device with a Shipping build configuration. */" },
		{ "LaunchConfig_Shipping.DisplayName", "Shipping" },
		{ "LaunchConfig_Shipping.Name", "LaunchConfig_Shipping" },
		{ "LaunchConfig_Shipping.ToolTip", "Launch on device with a Shipping build configuration." },
		{ "LaunchConfig_Test.Comment", "/** Launch on device with a Test build configuration. */" },
		{ "LaunchConfig_Test.DisplayName", "Test" },
		{ "LaunchConfig_Test.Name", "LaunchConfig_Test" },
		{ "LaunchConfig_Test.ToolTip", "Launch on device with a Test build configuration." },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Configuration to use when launching on device." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayOnLaunchConfiguration",
		"EPlayOnLaunchConfiguration",
		Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayOnPakFileMode;
	static UEnum* EPlayOnPakFileMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnPakFileMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayOnPakFileMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPlayOnPakFileMode"));
		}
		return Z_Registration_Info_UEnum_EPlayOnPakFileMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPlayOnPakFileMode>()
	{
		return EPlayOnPakFileMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enumerators[] = {
		{ "EPlayOnPakFileMode::NoPak", (int64)EPlayOnPakFileMode::NoPak },
		{ "EPlayOnPakFileMode::PakNoCompress", (int64)EPlayOnPakFileMode::PakNoCompress },
		{ "EPlayOnPakFileMode::PakCompress", (int64)EPlayOnPakFileMode::PakCompress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* Whether to content should be stored in pak files when launching on device. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "NoPak.Comment", "/** Do not pack files. */" },
		{ "NoPak.DisplayName", "Use loose files" },
		{ "NoPak.Name", "EPlayOnPakFileMode::NoPak" },
		{ "NoPak.ToolTip", "Do not pack files." },
		{ "PakCompress.Comment", "/** Compress and pack files with UnrealPak. */" },
		{ "PakCompress.DisplayName", "Use compressed pak files" },
		{ "PakCompress.Name", "EPlayOnPakFileMode::PakCompress" },
		{ "PakCompress.ToolTip", "Compress and pack files with UnrealPak." },
		{ "PakNoCompress.Comment", "/** Pack files with UnrealPak. */" },
		{ "PakNoCompress.DisplayName", "Use pak files without compression" },
		{ "PakNoCompress.Name", "EPlayOnPakFileMode::PakNoCompress" },
		{ "PakNoCompress.ToolTip", "Pack files with UnrealPak." },
		{ "ToolTip", "Whether to content should be stored in pak files when launching on device." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPlayOnPakFileMode",
		"EPlayOnPakFileMode",
		Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode()
	{
		if (!Z_Registration_Info_UEnum_EPlayOnPakFileMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayOnPakFileMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayOnPakFileMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayScreenResolution;
class UScriptStruct* FPlayScreenResolution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayScreenResolution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayScreenResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayScreenResolution, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("PlayScreenResolution"));
	}
	return Z_Registration_Info_UScriptStruct_PlayScreenResolution.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPlayScreenResolution>()
{
	return FPlayScreenResolution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayScreenResolution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSwapAspectRatio_MetaData[];
#endif
		static void NewProp_bCanSwapAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSwapAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogicalHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicalWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogicalWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds information about a screen resolution to be used for playing.\n */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Holds information about a screen resolution to be used for playing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayScreenResolution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/*FText*/" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "FText" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData[] = {
		{ "Comment", "/** The screen resolution's width (in pixels). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's width (in pixels)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData[] = {
		{ "Comment", "/** The screen resolution's height (in pixels). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's height (in pixels)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Comment", "/** The screen resolution's aspect ratio (as a string). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The screen resolution's aspect ratio (as a string)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData[] = {
		{ "Comment", "/** Whether or not this device supports both landscape and portrait modes */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not this device supports both landscape and portrait modes" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_SetBit(void* Obj)
	{
		((FPlayScreenResolution*)Obj)->bCanSwapAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio = { "bCanSwapAspectRatio", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlayScreenResolution), &Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Comment", "/** The name of the device profile this links to */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the device profile this links to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalHeight = { "LogicalHeight", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, LogicalHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalWidth = { "LogicalWidth", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayScreenResolution, LogicalWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_bCanSwapAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_ScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewProp_LogicalWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PlayScreenResolution",
		sizeof(FPlayScreenResolution),
		alignof(FPlayScreenResolution),
		Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayScreenResolution()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayScreenResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayScreenResolution.InnerSingleton, Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayScreenResolution.InnerSingleton;
	}
	void UCommonResolutionMenuContext::StaticRegisterNativesUCommonResolutionMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonResolutionMenuContext);
	UClass* Z_Construct_UClass_UCommonResolutionMenuContext_NoRegister()
	{
		return UCommonResolutionMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UCommonResolutionMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonResolutionMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonResolutionMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/LevelEditorPlaySettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonResolutionMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonResolutionMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonResolutionMenuContext_Statics::ClassParams = {
		&UCommonResolutionMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonResolutionMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonResolutionMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonResolutionMenuContext()
	{
		if (!Z_Registration_Info_UClass_UCommonResolutionMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonResolutionMenuContext.OuterSingleton, Z_Construct_UClass_UCommonResolutionMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonResolutionMenuContext.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCommonResolutionMenuContext>()
	{
		return UCommonResolutionMenuContext::StaticClass();
	}
	UCommonResolutionMenuContext::UCommonResolutionMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonResolutionMenuContext);
	UCommonResolutionMenuContext::~UCommonResolutionMenuContext() {}
	void ULevelEditorPlaySettings::StaticRegisterNativesULevelEditorPlaySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorPlaySettings);
	UClass* Z_Construct_UClass_ULevelEditorPlaySettings_NoRegister()
	{
		return ULevelEditorPlaySettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFromHerePlayerStartClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayFromHerePlayerStartClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameGetsMouseControl_MetaData[];
#endif
		static void NewProp_GameGetsMouseControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GameGetsMouseControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMouseForTouch_MetaData[];
#endif
		static void NewProp_UseMouseForTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMouseForTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowMouseControlLabel_MetaData[];
#endif
		static void NewProp_ShowMouseControlLabel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowMouseControlLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseControlLabelPosition_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseControlLabelPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportGetsHMDControl_MetaData[];
#endif
		static void NewProp_ViewportGetsHMDControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ViewportGetsHMDControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMinimizeEditorOnVRPIE_MetaData[];
#endif
		static void NewProp_ShouldMinimizeEditorOnVRPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMinimizeEditorOnVRPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMinimizeEditorOnNonVRPIE_MetaData[];
#endif
		static void NewProp_bShouldMinimizeEditorOnNonVRPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMinimizeEditorOnNonVRPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmulateStereo_MetaData[];
#endif
		static void NewProp_bEmulateStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmulateStereo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoRecompileBlueprints_MetaData[];
#endif
		static void NewProp_AutoRecompileBlueprints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoRecompileBlueprints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGameSound_MetaData[];
#endif
		static void NewProp_EnableGameSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGameSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoloAudioInFirstPIEClient_MetaData[];
#endif
		static void NewProp_SoloAudioInFirstPIEClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SoloAudioInFirstPIEClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnablePIEEnterAndExitSounds_MetaData[];
#endif
		static void NewProp_EnablePIEEnterAndExitSounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePIEEnterAndExitSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayInEditorSoundQualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayInEditorSoundQualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNonRealtimeAudioDevice_MetaData[];
#endif
		static void NewProp_bUseNonRealtimeAudioDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNonRealtimeAudioDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData[];
#endif
		static void NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLoadVisibleLevelsInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferToStreamLevelsInPIE_MetaData[];
#endif
		static void NewProp_bPreferToStreamLevelsInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferToStreamLevelsInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData[];
#endif
		static void NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromoteOutputLogWarningsDuringPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWindowWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewWindowWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWindowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewWindowHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWindowPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewWindowPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterNewWindow_MetaData[];
#endif
		static void NewProp_CenterNewWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CenterNewWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEAlwaysOnTop_MetaData[];
#endif
		static void NewProp_PIEAlwaysOnTop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PIEAlwaysOnTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableStandaloneSound_MetaData[];
#endif
		static void NewProp_DisableStandaloneSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableStandaloneSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalLaunchParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalLaunchParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildGameBeforeLaunch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildGameBeforeLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LaunchConfiguration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackFilesForLaunch_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackFilesForLaunch_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackFilesForLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompileBlueprintsOnLaunch_MetaData[];
#endif
		static void NewProp_bAutoCompileBlueprintsOnLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompileBlueprintsOnLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLaunchSeparateServer_MetaData[];
#endif
		static void NewProp_bLaunchSeparateServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLaunchSeparateServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayNetMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayNetMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunUnderOneProcess_MetaData[];
#endif
		static void NewProp_RunUnderOneProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RunUnderOneProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayNetDedicated_MetaData[];
#endif
		static void NewProp_PlayNetDedicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayNetDedicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayNumberOfClients_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayNumberOfClients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPIEClientIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PrimaryPIEClientIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientWindowWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientWindowWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectToServer_MetaData[];
#endif
		static void NewProp_AutoConnectToServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoConnectToServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RouteGamepadToSecondWindow_MetaData[];
#endif
		static void NewProp_RouteGamepadToSecondWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RouteGamepadToSecondWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateAudioDeviceForEveryPlayer_MetaData[];
#endif
		static void NewProp_CreateAudioDeviceForEveryPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateAudioDeviceForEveryPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientWindowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientWindowHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerMapNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerMapNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalServerGameOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalServerGameOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalLaunchOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalLaunchOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowServerDebugDrawingByDefault_MetaData[];
#endif
		static void NewProp_bShowServerDebugDrawingByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowServerDebugDrawingByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerDebugDrawingColorTintStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerDebugDrawingColorTintStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerDebugDrawingColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerDebugDrawingColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalServerLaunchParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalServerLaunchParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFixedFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFixedFPS;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientFixedFPS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientFixedFPS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientFixedFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkEmulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkEmulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleInstancePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleInstancePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MultipleInstancePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastExecutedLaunchDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastExecutedLaunchName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedLaunchModeType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastExecutedLaunchModeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPlayModeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastExecutedPlayModeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPlayModeType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastExecutedPlayModeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPIEPreviewDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastExecutedPIEPreviewDevice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaptopScreenResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaptopScreenResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaptopScreenResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonitorScreenResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorScreenResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MonitorScreenResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhoneScreenResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhoneScreenResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhoneScreenResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabletScreenResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabletScreenResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TabletScreenResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TelevisionScreenResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TelevisionScreenResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TelevisionScreenResolutions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceToEmulate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceToEmulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIESafeZoneOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PIESafeZoneOverride;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomUnsafeZoneStarts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomUnsafeZoneStarts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomUnsafeZoneStarts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomUnsafeZoneDimensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomUnsafeZoneDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomUnsafeZoneDimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorPlaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's play settings.\n */" },
		{ "IncludePath", "Settings/LevelEditorPlaySettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Implements the Editor's play settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData[] = {
		{ "Comment", "/** The PlayerStart class used when spawning the player at the current camera location. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The PlayerStart class used when spawning the player at the current camera location." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName = { "PlayFromHerePlayerStartClassName", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayFromHerePlayerStartClassName), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Give the game mouse control when PIE starts or require a click in the viewport first" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->GameGetsMouseControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl = { "GameGetsMouseControl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** While using the game viewport, it sends mouse movement and clicks as touch events, instead of as mouse events. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "While using the game viewport, it sends mouse movement and clicks as touch events, instead of as mouse events." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->UseMouseForTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch = { "UseMouseForTouch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** Whether to show a label for mouse control gestures in the PIE view. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to show a label for mouse control gestures in the PIE view." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ShowMouseControlLabel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel = { "ShowMouseControlLabel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** Location on screen to anchor the mouse control label when in PIE mode. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Location on screen to anchor the mouse control label when in PIE mode." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition = { "MouseControlLabelPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, MouseControlLabelPosition), Z_Construct_UEnum_UnrealEd_ELabelAnchorMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition_MetaData)) }; // 240361551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not HMD orientation should be used when playing in viewport" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ViewportGetsHMDControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl = { "ViewportGetsHMDControl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not the editor is minimized on VR PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->ShouldMinimizeEditorOnVRPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE = { "ShouldMinimizeEditorOnVRPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether or not the editor is minimized on non-VR PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bShouldMinimizeEditorOnNonVRPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE = { "bShouldMinimizeEditorOnNonVRPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo_MetaData[] = {
		{ "Category", "PlayInStandaloneGame" },
		{ "Comment", "/** Whether we should emulate stereo (helps checking VR rendering issues). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether we should emulate stereo (helps checking VR rendering issues)." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bEmulateStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo = { "bEmulateStereo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Automatically recompile blueprints used by the current level when initiating a Play In Editor session" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->AutoRecompileBlueprints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints = { "AutoRecompileBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to play sounds when in a Play In Editor session" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->EnableGameSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound = { "EnableGameSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "DisplayName", "Solo Audio in First PIE Client" },
		{ "EditCondition", "EnableGameSound" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to automatically solo audio in first PIE client" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->SoloAudioInFirstPIEClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient = { "SoloAudioInFirstPIEClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** Whether to play a sound when entering and exiting PIE */" },
		{ "DisplayName", "Enable PIE Enter and Exit Sounds" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to play a sound when entering and exiting PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->EnablePIEEnterAndExitSounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds = { "EnablePIEEnterAndExitSounds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** Which quality level to use when playing in editor */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Which quality level to use when playing in editor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel = { "PlayInEditorSoundQualityLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayInEditorSoundQualityLevel), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice_MetaData[] = {
		{ "Comment", "/** Whether to use a non-realtime audio device during PIE */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to use a non-realtime audio device during PIE" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bUseNonRealtimeAudioDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice = { "bUseNonRealtimeAudioDevice", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData[] = {
		{ "Comment", "/** True if Play In Editor should only load currently-visible levels in PIE. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "True if Play In Editor should only load currently-visible levels in PIE." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bOnlyLoadVisibleLevelsInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE = { "bOnlyLoadVisibleLevelsInPIE", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "DisplayName", "Stream Sub-Levels during Play in Editor" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Prefer to stream sub-levels from the disk instead of duplicating editor sub-levels" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bPreferToStreamLevelsInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE = { "bPreferToStreamLevelsInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData[] = {
		{ "Category", "PlayInEditor" },
		{ "Comment", "/** Should warnings and errors in the Output Log during \"Play in Editor\" be promoted to the message log? */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Should warnings and errors in the Output Log during \"Play in Editor\" be promoted to the message log?" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bPromoteOutputLogWarningsDuringPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE = { "bPromoteOutputLogWarningsDuringPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The width of the new view port window in pixels (0 = use the desktop's screen resolution). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The width of the new view port window in pixels (0 = use the desktop's screen resolution)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth = { "NewWindowWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The height of the new view port window in pixels (0 = use the desktop's screen resolution). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The height of the new view port window in pixels (0 = use the desktop's screen resolution)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight = { "NewWindowHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "Comment", "/** The position of the new view port window on the screen in pixels. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The position of the new view port window on the screen in pixels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition = { "NewWindowPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, NewWindowPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "Comment", "/** Whether the new window should be centered on the screen. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether the new window should be centered on the screen." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->CenterNewWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow = { "CenterNewWindow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData[] = {
		{ "Category", "PlayInNewWindow" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Always have the PIE window on top of the parent windows." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->PIEAlwaysOnTop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop = { "PIEAlwaysOnTop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData[] = {
		{ "Category", "PlayInStandaloneGame" },
		{ "Comment", "/** Whether sound should be disabled when playing standalone games. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether sound should be disabled when playing standalone games." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->DisableStandaloneSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound = { "DisableStandaloneSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData[] = {
		{ "Category", "PlayInStandaloneGame" },
		{ "Comment", "/** Extra parameters to be include as part of the command line for the standalone game. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Extra parameters to be include as part of the command line for the standalone game." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters = { "AdditionalLaunchParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalLaunchParameters), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "Comment", "/** Whether to build the game before launching on device. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to build the game before launching on device." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch = { "BuildGameBeforeLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, BuildGameBeforeLaunch), Z_Construct_UEnum_UnrealEd_EPlayOnBuildMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch_MetaData)) }; // 1381756417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "Comment", "/* Which build configuration to use when launching on device. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Which build configuration to use when launching on device." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration = { "LaunchConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LaunchConfiguration), Z_Construct_UEnum_UnrealEd_EPlayOnLaunchConfiguration, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration_MetaData)) }; // 71385493
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "Comment", "// Whether to content should be stored in pak files when launching on device. */\n" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to content should be stored in pak files when launching on device. */" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch = { "PackFilesForLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PackFilesForLaunch), Z_Construct_UEnum_UnrealEd_EPlayOnPakFileMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch_MetaData)) }; // 193190199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData[] = {
		{ "Category", "PlayOnDevice" },
		{ "Comment", "/** Whether to automatically recompile dirty Blueprints before launching */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Whether to automatically recompile dirty Blueprints before launching" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bAutoCompileBlueprintsOnLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch = { "bAutoCompileBlueprintsOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/**\n\x09* This is a rarely used option that will launch a separate server (possibly hidden in-process depending on RunUnderOneProcess) \n\x09* even if the net mode does not require a server (such as Standalone). If the net mode requires a server (such as Client) a \n\x09* server will be launched for you (regardless of this setting). This allows you to test offline -> server workflows by connecting\n\x09* (\"open 127.0.0.1:<ServerPort>\") from the offline game.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "This is a rarely used option that will launch a separate server (possibly hidden in-process depending on RunUnderOneProcess)\neven if the net mode does not require a server (such as Standalone). If the net mode requires a server (such as Client) a\nserver will be launched for you (regardless of this setting). This allows you to test offline -> server workflows by connecting\n(\"open 127.0.0.1:<ServerPort>\") from the offline game." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bLaunchSeparateServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer = { "bLaunchSeparateServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/** NetMode to use for Play In Editor. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "NetMode to use for Play In Editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode = { "PlayNetMode", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNetMode), Z_Construct_UEnum_UnrealEd_EPlayNetMode, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode_MetaData)) }; // 181721639
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/** Spawn multiple player windows in a single instance of UE. This will load much faster, but has potential to have more issues.  */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Spawn multiple player windows in a single instance of UE. This will load much faster, but has potential to have more issues." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->RunUnderOneProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess = { "RunUnderOneProcess", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->PlayNetDedicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated = { "PlayNetDedicated", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of client windows to open. The first one to open will respect the Play In Editor \"Modes\" option (PIE, PINW), additional clients respect the RunUnderOneProcess setting. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The number of client windows to open. The first one to open will respect the Play In Editor \"Modes\" option (PIE, PINW), additional clients respect the RunUnderOneProcess setting." },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients = { "PlayNumberOfClients", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNumberOfClients), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PrimaryPIEClientIndex_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "ClampMin", "-1" },
		{ "DisplayName", "Primary PIE Client Index" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "In multiplayer PIE which client will be the 'primary'. Considered most important and given a larger client window, access to unique hardware like a VirtualReality HMD, etc. Intended to help test issues that affect the second, etc client.  0 is the first client. If the setting is >= than the number of clients the last will be primary. -1 will result in no primary.  Note that this is an index only of PIE instance windows, in netmode 'Play as Client' pie instance zero is a windowless dedicated server, so setting 0 here would make the fist pie window the primary which would be PIEInstance 1, rather than 0 as in other netmodes." },
		{ "UIMax", "64" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PrimaryPIEClientIndex = { "PrimaryPIEClientIndex", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PrimaryPIEClientIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PrimaryPIEClientIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PrimaryPIEClientIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "Multiplayer Options|Server" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "1" },
		{ "Comment", "/** What port used by the server for simple networking */" },
		{ "EditCondition", "PlayNetMode != EPlayNetMode::PIE_Standalone || bLaunchSeparateServer" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "What port used by the server for simple networking" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerPort), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Width to use when spawning additional windows. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Width to use when spawning additional windows." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth = { "ClientWindowWidth", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->AutoConnectToServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer = { "AutoConnectToServer", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "Comment", "/**\n\x09 * When running multiple player windows in a single process, this option determines how the game pad input gets routed.\n\x09 *\n\x09 * If unchecked (default) then the 1st game pad is attached to the 1st window, 2nd to the 2nd window, and so on.\n\x09 *\n\x09 * If it is checked, the 1st game pad goes the 2nd window. The 1st window can then be controlled by keyboard/mouse, which is convenient if two people are testing on the same computer.\n\x09 */" },
		{ "EditCondition", "RunUnderOneProcess" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "When running multiple player windows in a single process, this option determines how the game pad input gets routed.\n\nIf unchecked (default) then the 1st game pad is attached to the 1st window, 2nd to the 2nd window, and so on.\n\nIf it is checked, the 1st game pad goes the 2nd window. The 1st window can then be controlled by keyboard/mouse, which is convenient if two people are testing on the same computer." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->RouteGamepadToSecondWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow = { "RouteGamepadToSecondWindow", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "Comment", "/** \n\x09* If checked, a separate audio device is created for every player. \n\x09\n\x09* If unchecked, a separate audio device is created for only the first two players and uses the main audio device for more than 2 players.\n\x09*\n\x09* Enabling this will allow rendering accurate audio from every player's perspective but will use more CPU. Keep this disabled on lower-perf machines.\n\x09*/" },
		{ "EditCondition", "EnableGameSound && RunUnderOneProcess" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "If checked, a separate audio device is created for every player.\n\nIf unchecked, a separate audio device is created for only the first two players and uses the main audio device for more than 2 players.\n\nEnabling this will allow rendering accurate audio from every player's perspective but will use more CPU. Keep this disabled on lower-perf machines." },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->CreateAudioDeviceForEveryPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer = { "CreateAudioDeviceForEveryPlayer", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Height to use when spawning additional windows. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Height to use when spawning additional windows." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight = { "ClientWindowHeight", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerMapNameOverride_MetaData[] = {
		{ "Category", "Multiplayer Options|Server" },
		{ "Comment", "/** Override the map launched by the dedicated server (currently only used when in PIE_StandaloneWithServer net mode) */" },
		{ "EditCondition", "PlayNetMode != EPlayNetMode::PIE_Standalone || bLaunchSeparateServer" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Override the map launched by the dedicated server (currently only used when in PIE_StandaloneWithServer net mode)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerMapNameOverride = { "ServerMapNameOverride", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerMapNameOverride), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerMapNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerMapNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData[] = {
		{ "Category", "Multiplayer Options|Server" },
		{ "Comment", "/** Additional options that will be passed to the server as URL parameters, in the format ?bIsLanMatch=1?listen - any additional command line switches should be passed in the Additional Server Launch Parameters field below. */" },
		{ "EditCondition", "PlayNetMode != EPlayNetMode::PIE_Standalone || bLaunchSeparateServer" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Additional options that will be passed to the server as URL parameters, in the format ?bIsLanMatch=1?listen - any additional command line switches should be passed in the Additional Server Launch Parameters field below." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions = { "AdditionalServerGameOptions", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalServerGameOptions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions = { "AdditionalLaunchOptions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalLaunchOptions), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/** Controls the default value of the show flag ServerDrawDebug */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Controls the default value of the show flag ServerDrawDebug" },
	};
#endif
	void Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault_SetBit(void* Obj)
	{
		((ULevelEditorPlaySettings*)Obj)->bShowServerDebugDrawingByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault = { "bShowServerDebugDrawingByDefault", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelEditorPlaySettings), &Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTintStrength_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How strongly debug drawing originating from the server will be biased towards the tint color */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "How strongly debug drawing originating from the server will be biased towards the tint color" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTintStrength = { "ServerDebugDrawingColorTintStrength", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerDebugDrawingColorTintStrength), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTintStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTintStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTint_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/** Debug drawing originating from the server will be biased towards this color */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Debug drawing originating from the server will be biased towards this color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTint = { "ServerDebugDrawingColorTint", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerDebugDrawingColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerLaunchParameters_MetaData[] = {
		{ "Category", "Multiplayer Options|Server" },
		{ "Comment", "/** Additional options that will be passed to the server as arguments, for example -debug. Only works with separate process servers. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Additional options that will be passed to the server as arguments, for example -debug. Only works with separate process servers." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerLaunchParameters = { "AdditionalServerLaunchParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalServerLaunchParameters), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerLaunchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerLaunchParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerFixedFPS_MetaData[] = {
		{ "Category", "Multiplayer Options|Server" },
		{ "Comment", "/** If > 0, Tick dedicated server at a fixed frame rate. Does not impact Listen Server (use ClientFixedFPS setting). This is the target frame rate, e.g, \"20\" for 20fps, which will result in 1/20 second tick steps. */" },
		{ "EditCondition", "PlayNetMode == EPlayNetMode::PIE_Client && RunUnderOneProcess" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "If > 0, Tick dedicated server at a fixed frame rate. Does not impact Listen Server (use ClientFixedFPS setting). This is the target frame rate, e.g, \"20\" for 20fps, which will result in 1/20 second tick steps." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerFixedFPS = { "ServerFixedFPS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ServerFixedFPS), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerFixedFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerFixedFPS_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS_Inner = { "ClientFixedFPS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS_MetaData[] = {
		{ "Category", "Multiplayer Options|Client" },
		{ "Comment", "/** If > 0, Tick clients at a fixed frame rate. Each client instance will map to an element in the list, wrapping around if num clients exceeds size of list. Includes Listen Server. This is the target frame rate, e.g, \"20\" for 20fps, which will result in 1/20 second tick steps. */" },
		{ "EditCondition", "PlayNetMode != EPlayNetMode::PIE_Standalone && RunUnderOneProcess" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "If > 0, Tick clients at a fixed frame rate. Each client instance will map to an element in the list, wrapping around if num clients exceeds size of list. Includes Listen Server. This is the target frame rate, e.g, \"20\" for 20fps, which will result in 1/20 second tick steps." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS = { "ClientFixedFPS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, ClientFixedFPS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NetworkEmulationSettings_MetaData[] = {
		{ "Category", "Multiplayer Options" },
		{ "Comment", "/**\n\x09 * Customizable settings allowing to emulate latency and packetloss for game network transmissions\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Customizable settings allowing to emulate latency and packetloss for game network transmissions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NetworkEmulationSettings = { "NetworkEmulationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, NetworkEmulationSettings), Z_Construct_UScriptStruct_FLevelEditorPlayNetworkEmulationSettings, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NetworkEmulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NetworkEmulationSettings_MetaData)) }; // 365664605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastSize_MetaData[] = {
		{ "Comment", "/** The last known screen size for the first instance window (in pixels). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last known screen size for the first instance window (in pixels)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastSize = { "LastSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_Inner = { "MultipleInstancePositions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData[] = {
		{ "Comment", "/** The last known screen positions of multiple instance windows (in pixels). */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last known screen positions of multiple instance windows (in pixels)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions = { "MultipleInstancePositions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, MultipleInstancePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData[] = {
		{ "Comment", "/** The name of the last platform that the user ran a play session on. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last platform that the user ran a play session on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice = { "LastExecutedLaunchDevice", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchDevice), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData[] = {
		{ "Comment", "/** The name of the last device that the user ran a play session on. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last device that the user ran a play session on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName = { "LastExecutedLaunchName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchName), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData[] = {
		{ "Comment", "/** The last type of play-on session the user ran. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play-on session the user ran." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType = { "LastExecutedLaunchModeType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedLaunchModeType), Z_Construct_UEnum_UnrealEd_ELaunchModeType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType_MetaData)) }; // 458039919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData[] = {
		{ "Comment", "/** The last type of play location the user ran. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play location the user ran." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation = { "LastExecutedPlayModeLocation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPlayModeLocation), Z_Construct_UEnum_UnrealEd_EPlayModeLocations, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation_MetaData)) }; // 1898809344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData[] = {
		{ "Comment", "/** The last type of play session the user ran. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The last type of play session the user ran." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType = { "LastExecutedPlayModeType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPlayModeType), Z_Construct_UEnum_UnrealEd_EPlayModeType, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType_MetaData)) }; // 1870171551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData[] = {
		{ "Comment", "/** The name of the last device that the user ran a play session on. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "The name of the last device that the user ran a play session on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice = { "LastExecutedPIEPreviewDevice", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LastExecutedPIEPreviewDevice), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_Inner = { "LaptopScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData[] = {
		{ "Comment", "/** Collection of common screen resolutions on mobile phones. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on mobile phones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions = { "LaptopScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, LaptopScreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_MetaData)) }; // 2428752547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_Inner = { "MonitorScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData[] = {
		{ "Comment", "/** Collection of common screen resolutions on desktop monitors. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on desktop monitors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions = { "MonitorScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, MonitorScreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_MetaData)) }; // 2428752547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_Inner = { "PhoneScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData[] = {
		{ "Comment", "/** Collection of common screen resolutions on mobile phones. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on mobile phones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions = { "PhoneScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PhoneScreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_MetaData)) }; // 2428752547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_Inner = { "TabletScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData[] = {
		{ "Comment", "/** Collection of common screen resolutions on tablet devices. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on tablet devices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions = { "TabletScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, TabletScreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_MetaData)) }; // 2428752547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_Inner = { "TelevisionScreenResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlayScreenResolution, METADATA_PARAMS(nullptr, 0) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData[] = {
		{ "Comment", "/** Collection of common screen resolutions on television screens. */" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
		{ "ToolTip", "Collection of common screen resolutions on television screens." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions = { "TelevisionScreenResolutions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, TelevisionScreenResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_MetaData)) }; // 2428752547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData[] = {
		{ "Category", "GameViewportSettings" },
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate = { "DeviceToEmulate", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, DeviceToEmulate), METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride = { "PIESafeZoneOverride", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, PIESafeZoneOverride), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride_MetaData)) }; // 2014822612
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_Inner = { "CustomUnsafeZoneStarts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts = { "CustomUnsafeZoneStarts", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, CustomUnsafeZoneStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_Inner = { "CustomUnsafeZoneDimensions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/LevelEditorPlaySettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions = { "CustomUnsafeZoneDimensions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorPlaySettings, CustomUnsafeZoneDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayFromHerePlayerStartClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_GameGetsMouseControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_UseMouseForTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShowMouseControlLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MouseControlLabelPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ViewportGetsHMDControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ShouldMinimizeEditorOnVRPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShouldMinimizeEditorOnNonVRPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bEmulateStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoRecompileBlueprints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnableGameSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_SoloAudioInFirstPIEClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_EnablePIEEnterAndExitSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayInEditorSoundQualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bUseNonRealtimeAudioDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bOnlyLoadVisibleLevelsInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPreferToStreamLevelsInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bPromoteOutputLogWarningsDuringPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NewWindowPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CenterNewWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIEAlwaysOnTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DisableStandaloneSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_BuildGameBeforeLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaunchConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PackFilesForLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bAutoCompileBlueprintsOnLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bLaunchSeparateServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RunUnderOneProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNetDedicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PlayNumberOfClients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PrimaryPIEClientIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AutoConnectToServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_RouteGamepadToSecondWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CreateAudioDeviceForEveryPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientWindowHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerMapNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerGameOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalLaunchOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_bShowServerDebugDrawingByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTintStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerDebugDrawingColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_AdditionalServerLaunchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ServerFixedFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_ClientFixedFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_NetworkEmulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MultipleInstancePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedLaunchModeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPlayModeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LastExecutedPIEPreviewDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_LaptopScreenResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_MonitorScreenResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PhoneScreenResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TabletScreenResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_TelevisionScreenResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_DeviceToEmulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_PIESafeZoneOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorPlaySettings_Statics::NewProp_CustomUnsafeZoneDimensions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorPlaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorPlaySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorPlaySettings_Statics::ClassParams = {
		&ULevelEditorPlaySettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorPlaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorPlaySettings()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorPlaySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorPlaySettings.OuterSingleton, Z_Construct_UClass_ULevelEditorPlaySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorPlaySettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelEditorPlaySettings>()
	{
		return ULevelEditorPlaySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorPlaySettings);
	ULevelEditorPlaySettings::~ULevelEditorPlaySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::EnumInfo[] = {
		{ ELabelAnchorMode_StaticEnum, TEXT("ELabelAnchorMode"), &Z_Registration_Info_UEnum_ELabelAnchorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 240361551U) },
		{ ELaunchModeType_StaticEnum, TEXT("ELaunchModeType"), &Z_Registration_Info_UEnum_ELaunchModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 458039919U) },
		{ EPlayModeLocations_StaticEnum, TEXT("EPlayModeLocations"), &Z_Registration_Info_UEnum_EPlayModeLocations, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1898809344U) },
		{ EPlayModeType_StaticEnum, TEXT("EPlayModeType"), &Z_Registration_Info_UEnum_EPlayModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1870171551U) },
		{ EPlayNetMode_StaticEnum, TEXT("EPlayNetMode"), &Z_Registration_Info_UEnum_EPlayNetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 181721639U) },
		{ EPlayOnBuildMode_StaticEnum, TEXT("EPlayOnBuildMode"), &Z_Registration_Info_UEnum_EPlayOnBuildMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1381756417U) },
		{ EPlayOnLaunchConfiguration_StaticEnum, TEXT("EPlayOnLaunchConfiguration"), &Z_Registration_Info_UEnum_EPlayOnLaunchConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 71385493U) },
		{ EPlayOnPakFileMode_StaticEnum, TEXT("EPlayOnPakFileMode"), &Z_Registration_Info_UEnum_EPlayOnPakFileMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 193190199U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ScriptStructInfo[] = {
		{ FPlayScreenResolution::StaticStruct, Z_Construct_UScriptStruct_FPlayScreenResolution_Statics::NewStructOps, TEXT("PlayScreenResolution"), &Z_Registration_Info_UScriptStruct_PlayScreenResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayScreenResolution), 2428752547U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonResolutionMenuContext, UCommonResolutionMenuContext::StaticClass, TEXT("UCommonResolutionMenuContext"), &Z_Registration_Info_UClass_UCommonResolutionMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonResolutionMenuContext), 2762432988U) },
		{ Z_Construct_UClass_ULevelEditorPlaySettings, ULevelEditorPlaySettings::StaticClass, TEXT("ULevelEditorPlaySettings"), &Z_Registration_Info_UClass_ULevelEditorPlaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorPlaySettings), 4208802468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_645084562(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
