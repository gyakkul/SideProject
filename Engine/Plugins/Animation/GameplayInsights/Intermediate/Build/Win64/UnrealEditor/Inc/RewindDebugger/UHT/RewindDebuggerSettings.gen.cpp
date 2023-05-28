// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RewindDebuggerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewindDebuggerSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	REWINDDEBUGGER_API UClass* Z_Construct_UClass_URewindDebuggerSettings();
	REWINDDEBUGGER_API UClass* Z_Construct_UClass_URewindDebuggerSettings_NoRegister();
	REWINDDEBUGGER_API UEnum* Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode();
	UPackage* Z_Construct_UPackage__Script_RewindDebugger();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERewindDebuggerCameraMode;
	static UEnum* ERewindDebuggerCameraMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode, (UObject*)Z_Construct_UPackage__Script_RewindDebugger(), TEXT("ERewindDebuggerCameraMode"));
		}
		return Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.OuterSingleton;
	}
	template<> REWINDDEBUGGER_API UEnum* StaticEnum<ERewindDebuggerCameraMode>()
	{
		return ERewindDebuggerCameraMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enumerators[] = {
		{ "ERewindDebuggerCameraMode::Replay", (int64)ERewindDebuggerCameraMode::Replay },
		{ "ERewindDebuggerCameraMode::FollowTargetActor", (int64)ERewindDebuggerCameraMode::FollowTargetActor },
		{ "ERewindDebuggerCameraMode::Disabled", (int64)ERewindDebuggerCameraMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Name", "ERewindDebuggerCameraMode::Disabled" },
		{ "Disabled.Tooltip", "Disable Camera On Playback" },
		{ "FollowTargetActor.Name", "ERewindDebuggerCameraMode::FollowTargetActor" },
		{ "FollowTargetActor.Tooltip", "Follow Target Actor" },
		{ "ModuleRelativePath", "Private/RewindDebuggerSettings.h" },
		{ "Replay.Name", "ERewindDebuggerCameraMode::Replay" },
		{ "Replay.Tooltip", "Replay Recorded Camera" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RewindDebugger,
		nullptr,
		"ERewindDebuggerCameraMode",
		"ERewindDebuggerCameraMode",
		Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode()
	{
		if (!Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.InnerSingleton, Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERewindDebuggerCameraMode.InnerSingleton;
	}
	void URewindDebuggerSettings::StaticRegisterNativesURewindDebuggerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URewindDebuggerSettings);
	UClass* Z_Construct_UClass_URewindDebuggerSettings_NoRegister()
	{
		return URewindDebuggerSettings::StaticClass();
	}
	struct Z_Construct_UClass_URewindDebuggerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoRecordOnPIE_MetaData[];
#endif
		static void NewProp_bShouldAutoRecordOnPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoRecordOnPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEmptyObjectTracks_MetaData[];
#endif
		static void NewProp_bShowEmptyObjectTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEmptyObjectTracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URewindDebuggerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RewindDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindDebuggerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Rewind Debugger.\n */" },
		{ "DisplayName", "Rewind Debugger" },
		{ "IncludePath", "RewindDebuggerSettings.h" },
		{ "ModuleRelativePath", "Private/RewindDebuggerSettings.h" },
		{ "ToolTip", "Implements the settings for the Rewind Debugger." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Rewind Debugger Playback Camera Mode */" },
		{ "ModuleRelativePath", "Private/RewindDebuggerSettings.h" },
		{ "ToolTip", "Rewind Debugger Playback Camera Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URewindDebuggerSettings, CameraMode), Z_Construct_UEnum_RewindDebugger_ERewindDebuggerCameraMode, METADATA_PARAMS(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode_MetaData)) }; // 2979381024
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE_MetaData[] = {
		{ "Category", "Other" },
		{ "Comment", "/** If enabled, start recording information at the start of PIE */" },
		{ "ModuleRelativePath", "Private/RewindDebuggerSettings.h" },
		{ "ToolTip", "If enabled, start recording information at the start of PIE" },
	};
#endif
	void Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE_SetBit(void* Obj)
	{
		((URewindDebuggerSettings*)Obj)->bShouldAutoRecordOnPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE = { "bShouldAutoRecordOnPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URewindDebuggerSettings), &Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** If enabled, show empty tracks on Rewind Debugger Timeline*/" },
		{ "ModuleRelativePath", "Private/RewindDebuggerSettings.h" },
		{ "ToolTip", "If enabled, show empty tracks on Rewind Debugger Timeline" },
	};
#endif
	void Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks_SetBit(void* Obj)
	{
		((URewindDebuggerSettings*)Obj)->bShowEmptyObjectTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks = { "bShowEmptyObjectTracks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URewindDebuggerSettings), &Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URewindDebuggerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_CameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShouldAutoRecordOnPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindDebuggerSettings_Statics::NewProp_bShowEmptyObjectTracks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URewindDebuggerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewindDebuggerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URewindDebuggerSettings_Statics::ClassParams = {
		&URewindDebuggerSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URewindDebuggerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URewindDebuggerSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URewindDebuggerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URewindDebuggerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URewindDebuggerSettings()
	{
		if (!Z_Registration_Info_UClass_URewindDebuggerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URewindDebuggerSettings.OuterSingleton, Z_Construct_UClass_URewindDebuggerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URewindDebuggerSettings.OuterSingleton;
	}
	template<> REWINDDEBUGGER_API UClass* StaticClass<URewindDebuggerSettings>()
	{
		return URewindDebuggerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URewindDebuggerSettings);
	URewindDebuggerSettings::~URewindDebuggerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::EnumInfo[] = {
		{ ERewindDebuggerCameraMode_StaticEnum, TEXT("ERewindDebuggerCameraMode"), &Z_Registration_Info_UEnum_ERewindDebuggerCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2979381024U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URewindDebuggerSettings, URewindDebuggerSettings::StaticClass, TEXT("URewindDebuggerSettings"), &Z_Registration_Info_UClass_URewindDebuggerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URewindDebuggerSettings), 2255318745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_2394306891(TEXT("/Script/RewindDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebugger_Private_RewindDebuggerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
