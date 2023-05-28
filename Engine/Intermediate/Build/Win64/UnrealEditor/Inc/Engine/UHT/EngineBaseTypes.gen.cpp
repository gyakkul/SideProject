// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineBaseTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UViewModeUtils();
	ENGINE_API UClass* Z_Construct_UClass_UViewModeUtils_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkLagState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputEvent;
	static UEnum* EInputEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInputEvent"));
		}
		return Z_Registration_Info_UEnum_EInputEvent.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInputEvent>()
	{
		return EInputEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInputEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInputEvent_Statics::Enumerators[] = {
		{ "IE_Pressed", (int64)IE_Pressed },
		{ "IE_Released", (int64)IE_Released },
		{ "IE_Repeat", (int64)IE_Repeat },
		{ "IE_DoubleClick", (int64)IE_DoubleClick },
		{ "IE_Axis", (int64)IE_Axis },
		{ "IE_MAX", (int64)IE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInputEvent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n//\x09""EInputEvent\n//\n" },
		{ "IE_Axis.Name", "IE_Axis" },
		{ "IE_DoubleClick.Name", "IE_DoubleClick" },
		{ "IE_MAX.Name", "IE_MAX" },
		{ "IE_Pressed.Name", "IE_Pressed" },
		{ "IE_Released.Name", "IE_Released" },
		{ "IE_Repeat.Name", "IE_Repeat" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ScriptName", "InputEventType" },
		{ "ToolTip", "EInputEvent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInputEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInputEvent",
		"EInputEvent",
		Z_Construct_UEnum_Engine_EInputEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInputEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInputEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInputEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInputEvent()
	{
		if (!Z_Registration_Info_UEnum_EInputEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputEvent.InnerSingleton, Z_Construct_UEnum_Engine_EInputEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMouseCaptureMode;
	static UEnum* EMouseCaptureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMouseCaptureMode"));
		}
		return Z_Registration_Info_UEnum_EMouseCaptureMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseCaptureMode>()
	{
		return EMouseCaptureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enumerators[] = {
		{ "EMouseCaptureMode::NoCapture", (int64)EMouseCaptureMode::NoCapture },
		{ "EMouseCaptureMode::CapturePermanently", (int64)EMouseCaptureMode::CapturePermanently },
		{ "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown", (int64)EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown },
		{ "EMouseCaptureMode::CaptureDuringMouseDown", (int64)EMouseCaptureMode::CaptureDuringMouseDown },
		{ "EMouseCaptureMode::CaptureDuringRightMouseDown", (int64)EMouseCaptureMode::CaptureDuringRightMouseDown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enum_MetaDataParams[] = {
		{ "CaptureDuringMouseDown.Comment", "/** Capture the mouse during a mouse down, releases on mouse up */" },
		{ "CaptureDuringMouseDown.Name", "EMouseCaptureMode::CaptureDuringMouseDown" },
		{ "CaptureDuringMouseDown.ToolTip", "Capture the mouse during a mouse down, releases on mouse up" },
		{ "CaptureDuringRightMouseDown.Comment", "/** Capture only when the right mouse button is down, not any of the other mouse buttons */" },
		{ "CaptureDuringRightMouseDown.Name", "EMouseCaptureMode::CaptureDuringRightMouseDown" },
		{ "CaptureDuringRightMouseDown.ToolTip", "Capture only when the right mouse button is down, not any of the other mouse buttons" },
		{ "CapturePermanently.Comment", "/** Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input */" },
		{ "CapturePermanently.Name", "EMouseCaptureMode::CapturePermanently" },
		{ "CapturePermanently.ToolTip", "Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input" },
		{ "CapturePermanently_IncludingInitialMouseDown.Comment", "/** Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture */" },
		{ "CapturePermanently_IncludingInitialMouseDown.Name", "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown" },
		{ "CapturePermanently_IncludingInitialMouseDown.ToolTip", "Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "NoCapture.Comment", "/** Do not capture the mouse at all */" },
		{ "NoCapture.Name", "EMouseCaptureMode::NoCapture" },
		{ "NoCapture.ToolTip", "Do not capture the mouse at all" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMouseCaptureMode",
		"EMouseCaptureMode",
		Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode()
	{
		if (!Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton, Z_Construct_UEnum_Engine_EMouseCaptureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMouseCaptureMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMouseLockMode;
	static UEnum* EMouseLockMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMouseLockMode"));
		}
		return Z_Registration_Info_UEnum_EMouseLockMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseLockMode>()
	{
		return EMouseLockMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMouseLockMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enumerators[] = {
		{ "EMouseLockMode::DoNotLock", (int64)EMouseLockMode::DoNotLock },
		{ "EMouseLockMode::LockOnCapture", (int64)EMouseLockMode::LockOnCapture },
		{ "EMouseLockMode::LockAlways", (int64)EMouseLockMode::LockAlways },
		{ "EMouseLockMode::LockInFullscreen", (int64)EMouseLockMode::LockInFullscreen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enum_MetaDataParams[] = {
		{ "DoNotLock.Comment", "/** Do not lock the mouse cursor to the viewport */" },
		{ "DoNotLock.Name", "EMouseLockMode::DoNotLock" },
		{ "DoNotLock.ToolTip", "Do not lock the mouse cursor to the viewport" },
		{ "LockAlways.Comment", "/** Always lock the mouse cursor to the viewport */" },
		{ "LockAlways.Name", "EMouseLockMode::LockAlways" },
		{ "LockAlways.ToolTip", "Always lock the mouse cursor to the viewport" },
		{ "LockInFullscreen.Comment", "/** Lock the cursor if we're in fullscreen */" },
		{ "LockInFullscreen.Name", "EMouseLockMode::LockInFullscreen" },
		{ "LockInFullscreen.ToolTip", "Lock the cursor if we're in fullscreen" },
		{ "LockOnCapture.Comment", "/** Only lock the mouse cursor to the viewport when the mouse is captured */" },
		{ "LockOnCapture.Name", "EMouseLockMode::LockOnCapture" },
		{ "LockOnCapture.ToolTip", "Only lock the mouse cursor to the viewport when the mouse is captured" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMouseLockMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMouseLockMode",
		"EMouseLockMode",
		Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMouseLockMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMouseLockMode()
	{
		if (!Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton, Z_Construct_UEnum_Engine_EMouseLockMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMouseLockMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETickingGroup;
	static UEnum* ETickingGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETickingGroup"));
		}
		return Z_Registration_Info_UEnum_ETickingGroup.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETickingGroup>()
	{
		return ETickingGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETickingGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enumerators[] = {
		{ "TG_PrePhysics", (int64)TG_PrePhysics },
		{ "TG_StartPhysics", (int64)TG_StartPhysics },
		{ "TG_DuringPhysics", (int64)TG_DuringPhysics },
		{ "TG_EndPhysics", (int64)TG_EndPhysics },
		{ "TG_PostPhysics", (int64)TG_PostPhysics },
		{ "TG_PostUpdateWork", (int64)TG_PostUpdateWork },
		{ "TG_LastDemotable", (int64)TG_LastDemotable },
		{ "TG_NewlySpawned", (int64)TG_NewlySpawned },
		{ "TG_MAX", (int64)TG_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Determines which ticking group a tick function belongs to. */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "TG_DuringPhysics.Comment", "/** Any item that can be run in parallel with our physics simulation work. */" },
		{ "TG_DuringPhysics.DisplayName", "During Physics" },
		{ "TG_DuringPhysics.Name", "TG_DuringPhysics" },
		{ "TG_DuringPhysics.ToolTip", "Any item that can be run in parallel with our physics simulation work." },
		{ "TG_EndPhysics.Comment", "/** Special tick group that ends physics simulation. */" },
		{ "TG_EndPhysics.DisplayName", "End Physics" },
		{ "TG_EndPhysics.Hidden", "" },
		{ "TG_EndPhysics.Name", "TG_EndPhysics" },
		{ "TG_EndPhysics.ToolTip", "Special tick group that ends physics simulation." },
		{ "TG_LastDemotable.Comment", "/** Catchall for anything demoted to the end. */" },
		{ "TG_LastDemotable.DisplayName", "Last Demotable" },
		{ "TG_LastDemotable.Hidden", "" },
		{ "TG_LastDemotable.Name", "TG_LastDemotable" },
		{ "TG_LastDemotable.ToolTip", "Catchall for anything demoted to the end." },
		{ "TG_MAX.Name", "TG_MAX" },
		{ "TG_NewlySpawned.Comment", "/** Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run. */" },
		{ "TG_NewlySpawned.DisplayName", "Newly Spawned" },
		{ "TG_NewlySpawned.Hidden", "" },
		{ "TG_NewlySpawned.Name", "TG_NewlySpawned" },
		{ "TG_NewlySpawned.ToolTip", "Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run." },
		{ "TG_PostPhysics.Comment", "/** Any item that needs rigid body and cloth simulation to be complete before being executed. */" },
		{ "TG_PostPhysics.DisplayName", "Post Physics" },
		{ "TG_PostPhysics.Name", "TG_PostPhysics" },
		{ "TG_PostPhysics.ToolTip", "Any item that needs rigid body and cloth simulation to be complete before being executed." },
		{ "TG_PostUpdateWork.Comment", "/** Any item that needs the update work to be done before being ticked. */" },
		{ "TG_PostUpdateWork.DisplayName", "Post Update Work" },
		{ "TG_PostUpdateWork.Name", "TG_PostUpdateWork" },
		{ "TG_PostUpdateWork.ToolTip", "Any item that needs the update work to be done before being ticked." },
		{ "TG_PrePhysics.Comment", "/** Any item that needs to be executed before physics simulation starts. */" },
		{ "TG_PrePhysics.DisplayName", "Pre Physics" },
		{ "TG_PrePhysics.Name", "TG_PrePhysics" },
		{ "TG_PrePhysics.ToolTip", "Any item that needs to be executed before physics simulation starts." },
		{ "TG_StartPhysics.Comment", "/** Special tick group that starts physics simulation. */" },
		{ "TG_StartPhysics.DisplayName", "Start Physics" },
		{ "TG_StartPhysics.Hidden", "" },
		{ "TG_StartPhysics.Name", "TG_StartPhysics" },
		{ "TG_StartPhysics.ToolTip", "Special tick group that starts physics simulation." },
		{ "ToolTip", "Determines which ticking group a tick function belongs to." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETickingGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETickingGroup",
		"ETickingGroup",
		Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETickingGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETickingGroup()
	{
		if (!Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton, Z_Construct_UEnum_Engine_ETickingGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETickingGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TickPrerequisite;
class UScriptStruct* FTickPrerequisite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TickPrerequisite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TickPrerequisite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickPrerequisite, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TickPrerequisite"));
	}
	return Z_Registration_Info_UScriptStruct_TickPrerequisite.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickPrerequisite>()
{
	return FTickPrerequisite::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTickPrerequisite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is small structure to hold prerequisite tick functions\n */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "This is small structure to hold prerequisite tick functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickPrerequisite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickPrerequisite>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickPrerequisite",
		sizeof(FTickPrerequisite),
		alignof(FTickPrerequisite),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite()
	{
		if (!Z_Registration_Info_UScriptStruct_TickPrerequisite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TickPrerequisite.InnerSingleton, Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TickPrerequisite.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TickFunction;
class UScriptStruct* FTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_TickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickFunction>()
{
	return FTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTickGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndTickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickEvenWhenPaused_MetaData[];
#endif
		static void NewProp_bTickEvenWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickEvenWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartWithTickEnabled_MetaData[];
#endif
		static void NewProp_bStartWithTickEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWithTickEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTickOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTickOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Abstract Base class for all tick functions.\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Abstract Base class for all tick functions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\n\x09 * Given prerequisites, the tick may be delayed.\n\x09 *\n\x09 * @see ETickingGroup \n\x09 * @see FTickFunction::AddPrerequisite()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\nGiven prerequisites, the tick may be delayed.\n\n@see ETickingGroup\n@see FTickFunction::AddPrerequisite()" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTickFunction, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData)) }; // 4250878082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/**\n\x09 * Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\x09 *\n\x09 * @see ETickingGroup \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\n@see ETickingGroup" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup = { "EndTickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTickFunction, EndTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData)) }; // 4250878082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. **/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bTickEvenWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused = { "bTickEvenWhenPaused", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "Comment", "/** If false, this tick function will never be registered and will never tick. Only settable in defaults. */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If false, this tick function will never be registered and will never tick. Only settable in defaults." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bCanEverTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** If true, this tick function will start enabled, but can be disabled later on. */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If true, this tick function will start enabled, but can be disabled later on." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bStartWithTickEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled = { "bStartWithTickEnabled", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** If we allow this tick to run on a dedicated server */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If we allow this tick to run on a dedicated server" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bAllowTickOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer = { "bAllowTickOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/** The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame */" },
		{ "DisplayName", "Tick Interval (secs)" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTickFunction, TickInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickFunction",
		sizeof(FTickFunction),
		alignof(FTickFunction),
		Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_TickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TickFunction.InnerSingleton, Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TickFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActorTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FActorTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorTickFunction;
class UScriptStruct* FActorTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ActorTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorTickFunction>()
{
	return FActorTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that calls AActor::TickActor\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls AActor::TickActor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorTickFunction",
		sizeof(FActorTickFunction),
		alignof(FActorTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorTickFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActorComponentTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FActorComponentTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorComponentTickFunction;
class UScriptStruct* FActorComponentTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentTickFunction>()
{
	return FActorComponentTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* Tick function that calls UActorComponent::ConditionalTick\n**/" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls UActorComponent::ConditionalTick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorComponentTickFunction",
		sizeof(FActorComponentTickFunction),
		alignof(FActorComponentTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorComponentTickFunction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkLagState;
	static UEnum* ENetworkLagState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkLagState"));
		}
		return Z_Registration_Info_UEnum_ENetworkLagState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENetworkLagState::Type>()
	{
		return ENetworkLagState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENetworkLagState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enumerators[] = {
		{ "ENetworkLagState::NotLagging", (int64)ENetworkLagState::NotLagging },
		{ "ENetworkLagState::Lagging", (int64)ENetworkLagState::Lagging },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enum_MetaDataParams[] = {
		{ "Lagging.Comment", "/** The net driver is in the process of timing out all of the client connections */" },
		{ "Lagging.Name", "ENetworkLagState::Lagging" },
		{ "Lagging.ToolTip", "The net driver is in the process of timing out all of the client connections" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "NotLagging.Comment", "/** The net driver is operating normally or it is not possible to tell if it is lagging */" },
		{ "NotLagging.Name", "ENetworkLagState::NotLagging" },
		{ "NotLagging.ToolTip", "The net driver is operating normally or it is not possible to tell if it is lagging" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENetworkLagState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENetworkLagState",
		"ENetworkLagState::Type",
		Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENetworkLagState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENetworkLagState()
	{
		if (!Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton, Z_Construct_UEnum_Engine_ENetworkLagState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkLagState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETravelFailure;
	static UEnum* ETravelFailure_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETravelFailure"));
		}
		return Z_Registration_Info_UEnum_ETravelFailure.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelFailure::Type>()
	{
		return ETravelFailure_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETravelFailure_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enumerators[] = {
		{ "ETravelFailure::NoLevel", (int64)ETravelFailure::NoLevel },
		{ "ETravelFailure::LoadMapFailure", (int64)ETravelFailure::LoadMapFailure },
		{ "ETravelFailure::InvalidURL", (int64)ETravelFailure::InvalidURL },
		{ "ETravelFailure::PackageMissing", (int64)ETravelFailure::PackageMissing },
		{ "ETravelFailure::PackageVersion", (int64)ETravelFailure::PackageVersion },
		{ "ETravelFailure::NoDownload", (int64)ETravelFailure::NoDownload },
		{ "ETravelFailure::TravelFailure", (int64)ETravelFailure::TravelFailure },
		{ "ETravelFailure::CheatCommands", (int64)ETravelFailure::CheatCommands },
		{ "ETravelFailure::PendingNetGameCreateFailure", (int64)ETravelFailure::PendingNetGameCreateFailure },
		{ "ETravelFailure::CloudSaveFailure", (int64)ETravelFailure::CloudSaveFailure },
		{ "ETravelFailure::ServerTravelFailure", (int64)ETravelFailure::ServerTravelFailure },
		{ "ETravelFailure::ClientTravelFailure", (int64)ETravelFailure::ClientTravelFailure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CheatCommands.Comment", "/** Cheat commands have been used disabling travel */" },
		{ "CheatCommands.Name", "ETravelFailure::CheatCommands" },
		{ "CheatCommands.ToolTip", "Cheat commands have been used disabling travel" },
		{ "ClientTravelFailure.Comment", "/** There was an error during a client travel to a new map */" },
		{ "ClientTravelFailure.Name", "ETravelFailure::ClientTravelFailure" },
		{ "ClientTravelFailure.ToolTip", "There was an error during a client travel to a new map" },
		{ "CloudSaveFailure.Comment", "/** Failed to save before travel */" },
		{ "CloudSaveFailure.Name", "ETravelFailure::CloudSaveFailure" },
		{ "CloudSaveFailure.ToolTip", "Failed to save before travel" },
		{ "Comment", "/** Types of server travel failures broadcast by the engine */" },
		{ "InvalidURL.Comment", "/** Invalid URL specified */" },
		{ "InvalidURL.Name", "ETravelFailure::InvalidURL" },
		{ "InvalidURL.ToolTip", "Invalid URL specified" },
		{ "LoadMapFailure.Comment", "/** LoadMap failed on travel (about to Browse to default map) */" },
		{ "LoadMapFailure.Name", "ETravelFailure::LoadMapFailure" },
		{ "LoadMapFailure.ToolTip", "LoadMap failed on travel (about to Browse to default map)" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "NoDownload.Comment", "/** A package is missing and the client is unable to download the file */" },
		{ "NoDownload.Name", "ETravelFailure::NoDownload" },
		{ "NoDownload.ToolTip", "A package is missing and the client is unable to download the file" },
		{ "NoLevel.Comment", "/** No level found in the loaded package */" },
		{ "NoLevel.Name", "ETravelFailure::NoLevel" },
		{ "NoLevel.ToolTip", "No level found in the loaded package" },
		{ "PackageMissing.Comment", "/** A package is missing on the client */" },
		{ "PackageMissing.Name", "ETravelFailure::PackageMissing" },
		{ "PackageMissing.ToolTip", "A package is missing on the client" },
		{ "PackageVersion.Comment", "/** A package version mismatch has occurred between client and server */" },
		{ "PackageVersion.Name", "ETravelFailure::PackageVersion" },
		{ "PackageVersion.ToolTip", "A package version mismatch has occurred between client and server" },
		{ "PendingNetGameCreateFailure.Comment", "/** Failed to create the pending net game for travel */" },
		{ "PendingNetGameCreateFailure.Name", "ETravelFailure::PendingNetGameCreateFailure" },
		{ "PendingNetGameCreateFailure.ToolTip", "Failed to create the pending net game for travel" },
		{ "ServerTravelFailure.Comment", "/** There was an error during a server travel to a new map */" },
		{ "ServerTravelFailure.Name", "ETravelFailure::ServerTravelFailure" },
		{ "ServerTravelFailure.ToolTip", "There was an error during a server travel to a new map" },
		{ "ToolTip", "Types of server travel failures broadcast by the engine" },
		{ "TravelFailure.Comment", "/** General travel failure */" },
		{ "TravelFailure.Name", "ETravelFailure::TravelFailure" },
		{ "TravelFailure.ToolTip", "General travel failure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETravelFailure_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETravelFailure",
		"ETravelFailure::Type",
		Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETravelFailure_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETravelFailure()
	{
		if (!Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton, Z_Construct_UEnum_Engine_ETravelFailure_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETravelFailure.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETravelType;
	static UEnum* ETravelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETravelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETravelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETravelType"));
		}
		return Z_Registration_Info_UEnum_ETravelType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelType>()
	{
		return ETravelType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETravelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETravelType_Statics::Enumerators[] = {
		{ "TRAVEL_Absolute", (int64)TRAVEL_Absolute },
		{ "TRAVEL_Partial", (int64)TRAVEL_Partial },
		{ "TRAVEL_Relative", (int64)TRAVEL_Relative },
		{ "TRAVEL_MAX", (int64)TRAVEL_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETravelType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Traveling from server to server.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Traveling from server to server." },
		{ "TRAVEL_Absolute.Comment", "/** Absolute URL. */" },
		{ "TRAVEL_Absolute.Name", "TRAVEL_Absolute" },
		{ "TRAVEL_Absolute.ToolTip", "Absolute URL." },
		{ "TRAVEL_MAX.Name", "TRAVEL_MAX" },
		{ "TRAVEL_Partial.Comment", "/** Partial (carry name, reset server). */" },
		{ "TRAVEL_Partial.Name", "TRAVEL_Partial" },
		{ "TRAVEL_Partial.ToolTip", "Partial (carry name, reset server)." },
		{ "TRAVEL_Relative.Comment", "/** Relative URL. */" },
		{ "TRAVEL_Relative.Name", "TRAVEL_Relative" },
		{ "TRAVEL_Relative.ToolTip", "Relative URL." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETravelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETravelType",
		"ETravelType",
		Z_Construct_UEnum_Engine_ETravelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETravelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETravelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETravelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETravelType()
	{
		if (!Z_Registration_Info_UEnum_ETravelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETravelType.InnerSingleton, Z_Construct_UEnum_Engine_ETravelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETravelType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDemoPlayFailure;
	static UEnum* EDemoPlayFailure_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDemoPlayFailure"));
		}
		return Z_Registration_Info_UEnum_EDemoPlayFailure.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDemoPlayFailure::Type>()
	{
		return EDemoPlayFailure_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enumerators[] = {
		{ "EDemoPlayFailure::Generic", (int64)EDemoPlayFailure::Generic },
		{ "EDemoPlayFailure::DemoNotFound", (int64)EDemoPlayFailure::DemoNotFound },
		{ "EDemoPlayFailure::Corrupt", (int64)EDemoPlayFailure::Corrupt },
		{ "EDemoPlayFailure::InvalidVersion", (int64)EDemoPlayFailure::InvalidVersion },
		{ "EDemoPlayFailure::InitBase", (int64)EDemoPlayFailure::InitBase },
		{ "EDemoPlayFailure::GameSpecificHeader", (int64)EDemoPlayFailure::GameSpecificHeader },
		{ "EDemoPlayFailure::ReplayStreamerInternal", (int64)EDemoPlayFailure::ReplayStreamerInternal },
		{ "EDemoPlayFailure::LoadMap", (int64)EDemoPlayFailure::LoadMap },
		{ "EDemoPlayFailure::Serialization", (int64)EDemoPlayFailure::Serialization },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Types of demo play failures broadcast from the engine */" },
		{ "Corrupt.Comment", "/** Demo is corrupt. */" },
		{ "Corrupt.Name", "EDemoPlayFailure::Corrupt" },
		{ "Corrupt.ToolTip", "Demo is corrupt." },
		{ "DemoNotFound.Comment", "/** Demo was not found. */" },
		{ "DemoNotFound.Name", "EDemoPlayFailure::DemoNotFound" },
		{ "DemoNotFound.ToolTip", "Demo was not found." },
		{ "GameSpecificHeader.Comment", "/** Failed to process game specific header. */" },
		{ "GameSpecificHeader.Name", "EDemoPlayFailure::GameSpecificHeader" },
		{ "GameSpecificHeader.ToolTip", "Failed to process game specific header." },
		{ "Generic.Comment", "/** A Generic failure. */" },
		{ "Generic.Name", "EDemoPlayFailure::Generic" },
		{ "Generic.ToolTip", "A Generic failure." },
		{ "InitBase.Comment", "/** InitBase failed. */" },
		{ "InitBase.Name", "EDemoPlayFailure::InitBase" },
		{ "InitBase.ToolTip", "InitBase failed." },
		{ "InvalidVersion.Comment", "/** Invalid version. */" },
		{ "InvalidVersion.Name", "EDemoPlayFailure::InvalidVersion" },
		{ "InvalidVersion.ToolTip", "Invalid version." },
		{ "LoadMap.Comment", "/** LoadMap failed. */" },
		{ "LoadMap.Name", "EDemoPlayFailure::LoadMap" },
		{ "LoadMap.ToolTip", "LoadMap failed." },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ReplayStreamerInternal.Comment", "/** Replay streamer had an internal error. */" },
		{ "ReplayStreamerInternal.Name", "EDemoPlayFailure::ReplayStreamerInternal" },
		{ "ReplayStreamerInternal.ToolTip", "Replay streamer had an internal error." },
		{ "Serialization.Comment", "/** Error serializing data stream. */" },
		{ "Serialization.Name", "EDemoPlayFailure::Serialization" },
		{ "Serialization.ToolTip", "Error serializing data stream." },
		{ "ToolTip", "Types of demo play failures broadcast from the engine" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDemoPlayFailure",
		"EDemoPlayFailure::Type",
		Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure()
	{
		if (!Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton, Z_Construct_UEnum_Engine_EDemoPlayFailure_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDemoPlayFailure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_URL;
class UScriptStruct* FURL::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_URL.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_URL.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FURL, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("URL"));
	}
	return Z_Registration_Info_UScriptStruct_URL.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FURL>()
{
	return FURL::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FURL_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Op_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Op;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Portal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//URL structure.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "URL structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FURL>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData[] = {
		{ "Comment", "// Protocol, i.e. \"unreal\" or \"http\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Protocol, i.e. \"unreal\" or \"http\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData[] = {
		{ "Comment", "// Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData[] = {
		{ "Comment", "// Optional host port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional host port." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Valid), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData[] = {
		{ "Comment", "// Map name, i.e. \"SkyCity\", default is \"Entry\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Map name, i.e. \"SkyCity\", default is \"Entry\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "Comment", "// Optional place to download Map if client does not possess it\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional place to download Map if client does not possess it" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, RedirectURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner = { "Op", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData[] = {
		{ "Comment", "// Options.\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Options." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Op), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData[] = {
		{ "Comment", "// Portal to enter through, default is \"\".\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Portal to enter through, default is \"\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FURL, Portal), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"URL",
		sizeof(FURL),
		alignof(FURL),
		Z_Construct_UScriptStruct_FURL_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FURL()
	{
		if (!Z_Registration_Info_UScriptStruct_URL.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_URL.InnerSingleton, Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_URL.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewModeIndex;
	static UEnum* EViewModeIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EViewModeIndex"));
		}
		return Z_Registration_Info_UEnum_EViewModeIndex.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EViewModeIndex>()
	{
		return EViewModeIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EViewModeIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enumerators[] = {
		{ "VMI_BrushWireframe", (int64)VMI_BrushWireframe },
		{ "VMI_Wireframe", (int64)VMI_Wireframe },
		{ "VMI_Unlit", (int64)VMI_Unlit },
		{ "VMI_Lit", (int64)VMI_Lit },
		{ "VMI_Lit_DetailLighting", (int64)VMI_Lit_DetailLighting },
		{ "VMI_LightingOnly", (int64)VMI_LightingOnly },
		{ "VMI_LightComplexity", (int64)VMI_LightComplexity },
		{ "VMI_ShaderComplexity", (int64)VMI_ShaderComplexity },
		{ "VMI_LightmapDensity", (int64)VMI_LightmapDensity },
		{ "VMI_LitLightmapDensity", (int64)VMI_LitLightmapDensity },
		{ "VMI_ReflectionOverride", (int64)VMI_ReflectionOverride },
		{ "VMI_VisualizeBuffer", (int64)VMI_VisualizeBuffer },
		{ "VMI_StationaryLightOverlap", (int64)VMI_StationaryLightOverlap },
		{ "VMI_CollisionPawn", (int64)VMI_CollisionPawn },
		{ "VMI_CollisionVisibility", (int64)VMI_CollisionVisibility },
		{ "VMI_LODColoration", (int64)VMI_LODColoration },
		{ "VMI_QuadOverdraw", (int64)VMI_QuadOverdraw },
		{ "VMI_PrimitiveDistanceAccuracy", (int64)VMI_PrimitiveDistanceAccuracy },
		{ "VMI_MeshUVDensityAccuracy", (int64)VMI_MeshUVDensityAccuracy },
		{ "VMI_ShaderComplexityWithQuadOverdraw", (int64)VMI_ShaderComplexityWithQuadOverdraw },
		{ "VMI_HLODColoration", (int64)VMI_HLODColoration },
		{ "VMI_GroupLODColoration", (int64)VMI_GroupLODColoration },
		{ "VMI_MaterialTextureScaleAccuracy", (int64)VMI_MaterialTextureScaleAccuracy },
		{ "VMI_RequiredTextureResolution", (int64)VMI_RequiredTextureResolution },
		{ "VMI_PathTracing", (int64)VMI_PathTracing },
		{ "VMI_RayTracingDebug", (int64)VMI_RayTracingDebug },
		{ "VMI_VisualizeNanite", (int64)VMI_VisualizeNanite },
		{ "VMI_VirtualTexturePendingMips", (int64)VMI_VirtualTexturePendingMips },
		{ "VMI_VisualizeLumen", (int64)VMI_VisualizeLumen },
		{ "VMI_VisualizeVirtualShadowMap", (int64)VMI_VisualizeVirtualShadowMap },
		{ "VMI_VisualizeGPUSkinCache", (int64)VMI_VisualizeGPUSkinCache },
		{ "VMI_VisualizeSubstrate", (int64)VMI_VisualizeSubstrate },
		{ "VMI_VisualizeGroom", (int64)VMI_VisualizeGroom },
		{ "VMI_Max", (int64)VMI_Max },
		{ "VMI_Unknown", (int64)VMI_Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Define view modes to get specific show flag settings (some on, some off and some are not altered)\n * Don't change the order, the ID is serialized with the editor\n */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Define view modes to get specific show flag settings (some on, some off and some are not altered)\nDon't change the order, the ID is serialized with the editor" },
		{ "VMI_BrushWireframe.Comment", "/** Wireframe w/ brushes. */" },
		{ "VMI_BrushWireframe.DisplayName", "Wireframe" },
		{ "VMI_BrushWireframe.Name", "VMI_BrushWireframe" },
		{ "VMI_BrushWireframe.ToolTip", "Wireframe w/ brushes." },
		{ "VMI_CollisionPawn.DisplayName", "Player Collision" },
		{ "VMI_CollisionPawn.Name", "VMI_CollisionPawn" },
		{ "VMI_CollisionVisibility.DisplayName", "Visibility Collision" },
		{ "VMI_CollisionVisibility.Name", "VMI_CollisionVisibility" },
		{ "VMI_GroupLODColoration.Comment", "/** Group item for LOD and HLOD coloration*/" },
		{ "VMI_GroupLODColoration.DisplayName", "Group LOD Coloration" },
		{ "VMI_GroupLODColoration.Name", "VMI_GroupLODColoration" },
		{ "VMI_GroupLODColoration.ToolTip", "Group item for LOD and HLOD coloration" },
		{ "VMI_HLODColoration.Comment", "/** Colored according to the current HLOD index. */" },
		{ "VMI_HLODColoration.DisplayName", "Hierarchical LOD Coloration" },
		{ "VMI_HLODColoration.Name", "VMI_HLODColoration" },
		{ "VMI_HLODColoration.ToolTip", "Colored according to the current HLOD index." },
		{ "VMI_LightComplexity.Comment", "/** Colored according to light count. */" },
		{ "VMI_LightComplexity.DisplayName", "Light Complexity" },
		{ "VMI_LightComplexity.Name", "VMI_LightComplexity" },
		{ "VMI_LightComplexity.ToolTip", "Colored according to light count." },
		{ "VMI_LightingOnly.Comment", "/** Lit wo/ materials. */" },
		{ "VMI_LightingOnly.DisplayName", "Lighting Only" },
		{ "VMI_LightingOnly.Name", "VMI_LightingOnly" },
		{ "VMI_LightingOnly.ToolTip", "Lit wo/ materials." },
		{ "VMI_LightmapDensity.Comment", "/** Colored according to world-space LightMap texture density. */" },
		{ "VMI_LightmapDensity.DisplayName", "Lightmap Density" },
		{ "VMI_LightmapDensity.Name", "VMI_LightmapDensity" },
		{ "VMI_LightmapDensity.ToolTip", "Colored according to world-space LightMap texture density." },
		{ "VMI_Lit.Comment", "/** Lit. */" },
		{ "VMI_Lit.DisplayName", "Lit" },
		{ "VMI_Lit.Name", "VMI_Lit" },
		{ "VMI_Lit.ToolTip", "Lit." },
		{ "VMI_Lit_DetailLighting.DisplayName", "Detail Lighting" },
		{ "VMI_Lit_DetailLighting.Name", "VMI_Lit_DetailLighting" },
		{ "VMI_LitLightmapDensity.Comment", "/** Colored according to light count - showing lightmap texel density on texture mapped objects. */" },
		{ "VMI_LitLightmapDensity.DisplayName", "Lit Lightmap Density" },
		{ "VMI_LitLightmapDensity.Name", "VMI_LitLightmapDensity" },
		{ "VMI_LitLightmapDensity.ToolTip", "Colored according to light count - showing lightmap texel density on texture mapped objects." },
		{ "VMI_LODColoration.Comment", "/** Colored according to the current LOD index. */" },
		{ "VMI_LODColoration.DisplayName", "Mesh LOD Coloration" },
		{ "VMI_LODColoration.Name", "VMI_LODColoration" },
		{ "VMI_LODColoration.ToolTip", "Colored according to the current LOD index." },
		{ "VMI_MaterialTextureScaleAccuracy.Comment", "/** Visualize the accuracy of the material texture scales used for texture streaming. */" },
		{ "VMI_MaterialTextureScaleAccuracy.DisplayName", "Material Texture Scales" },
		{ "VMI_MaterialTextureScaleAccuracy.Name", "VMI_MaterialTextureScaleAccuracy" },
		{ "VMI_MaterialTextureScaleAccuracy.ToolTip", "Visualize the accuracy of the material texture scales used for texture streaming." },
		{ "VMI_Max.Hidden", "" },
		{ "VMI_Max.Name", "VMI_Max" },
		{ "VMI_MeshUVDensityAccuracy.Comment", "/** Visualize the accuracy of the mesh UV densities computed for texture streaming. */" },
		{ "VMI_MeshUVDensityAccuracy.DisplayName", "Mesh UV Density" },
		{ "VMI_MeshUVDensityAccuracy.Name", "VMI_MeshUVDensityAccuracy" },
		{ "VMI_MeshUVDensityAccuracy.ToolTip", "Visualize the accuracy of the mesh UV densities computed for texture streaming." },
		{ "VMI_PathTracing.Comment", "/** Run path tracing pipeline */" },
		{ "VMI_PathTracing.DisplayName", "Path Tracing" },
		{ "VMI_PathTracing.Name", "VMI_PathTracing" },
		{ "VMI_PathTracing.ToolTip", "Run path tracing pipeline" },
		{ "VMI_PrimitiveDistanceAccuracy.Comment", "/** Visualize the accuracy of the primitive distance computed for texture streaming. */" },
		{ "VMI_PrimitiveDistanceAccuracy.DisplayName", "Primitive Distance" },
		{ "VMI_PrimitiveDistanceAccuracy.Name", "VMI_PrimitiveDistanceAccuracy" },
		{ "VMI_PrimitiveDistanceAccuracy.ToolTip", "Visualize the accuracy of the primitive distance computed for texture streaming." },
		{ "VMI_QuadOverdraw.Comment", "/** Colored according to the quad coverage. */" },
		{ "VMI_QuadOverdraw.DisplayName", "Quad Overdraw" },
		{ "VMI_QuadOverdraw.Name", "VMI_QuadOverdraw" },
		{ "VMI_QuadOverdraw.ToolTip", "Colored according to the quad coverage." },
		{ "VMI_RayTracingDebug.Comment", "/** Run ray tracing debug pipeline */" },
		{ "VMI_RayTracingDebug.DisplayName", "Ray Tracing Debug" },
		{ "VMI_RayTracingDebug.Name", "VMI_RayTracingDebug" },
		{ "VMI_RayTracingDebug.ToolTip", "Run ray tracing debug pipeline" },
		{ "VMI_ReflectionOverride.DisplayName", "Reflections" },
		{ "VMI_ReflectionOverride.Name", "VMI_ReflectionOverride" },
		{ "VMI_RequiredTextureResolution.Comment", "/** Compare the required texture resolution to the actual resolution. */" },
		{ "VMI_RequiredTextureResolution.DisplayName", "Required Texture Resolution" },
		{ "VMI_RequiredTextureResolution.Name", "VMI_RequiredTextureResolution" },
		{ "VMI_RequiredTextureResolution.ToolTip", "Compare the required texture resolution to the actual resolution." },
		{ "VMI_ShaderComplexity.Comment", "/** Colored according to shader complexity. */" },
		{ "VMI_ShaderComplexity.DisplayName", "Shader Complexity" },
		{ "VMI_ShaderComplexity.Name", "VMI_ShaderComplexity" },
		{ "VMI_ShaderComplexity.ToolTip", "Colored according to shader complexity." },
		{ "VMI_ShaderComplexityWithQuadOverdraw.Comment", "/** Colored according to shader complexity, including quad overdraw. */" },
		{ "VMI_ShaderComplexityWithQuadOverdraw.DisplayName", "Shader Complexity & Quads" },
		{ "VMI_ShaderComplexityWithQuadOverdraw.Name", "VMI_ShaderComplexityWithQuadOverdraw" },
		{ "VMI_ShaderComplexityWithQuadOverdraw.ToolTip", "Colored according to shader complexity, including quad overdraw." },
		{ "VMI_StationaryLightOverlap.Comment", "/** Colored according to stationary light overlap. */" },
		{ "VMI_StationaryLightOverlap.DisplayName", "Stationary Light Overlap" },
		{ "VMI_StationaryLightOverlap.Name", "VMI_StationaryLightOverlap" },
		{ "VMI_StationaryLightOverlap.ToolTip", "Colored according to stationary light overlap." },
		{ "VMI_Unknown.Comment", "// VMI_Unknown - The value assigned to VMI_Unknown must be the highest possible of any member of EViewModeIndex, or GetViewModeName might seg-fault\n" },
		{ "VMI_Unknown.DisplayName", "Unknown" },
		{ "VMI_Unknown.Name", "VMI_Unknown" },
		{ "VMI_Unknown.ToolTip", "VMI_Unknown - The value assigned to VMI_Unknown must be the highest possible of any member of EViewModeIndex, or GetViewModeName might seg-fault" },
		{ "VMI_Unlit.Comment", "/** Unlit. */" },
		{ "VMI_Unlit.DisplayName", "Unlit" },
		{ "VMI_Unlit.Name", "VMI_Unlit" },
		{ "VMI_Unlit.ToolTip", "Unlit." },
		{ "VMI_VirtualTexturePendingMips.Comment", "/** Compare the required texture resolution to the actual resolution. */" },
		{ "VMI_VirtualTexturePendingMips.DisplayName", "Virtual Texture Pending Mips" },
		{ "VMI_VirtualTexturePendingMips.Name", "VMI_VirtualTexturePendingMips" },
		{ "VMI_VirtualTexturePendingMips.ToolTip", "Compare the required texture resolution to the actual resolution." },
		{ "VMI_VisualizeBuffer.DisplayName", "Buffer Visualization" },
		{ "VMI_VisualizeBuffer.Name", "VMI_VisualizeBuffer" },
		{ "VMI_VisualizeGPUSkinCache.Comment", "/** Visualize Skin Cache. */" },
		{ "VMI_VisualizeGPUSkinCache.DisplayName", "GPU Skin Cache Visualization" },
		{ "VMI_VisualizeGPUSkinCache.Name", "VMI_VisualizeGPUSkinCache" },
		{ "VMI_VisualizeGPUSkinCache.ToolTip", "Visualize Skin Cache." },
		{ "VMI_VisualizeGroom.Comment", "/** Visualize Groom debug views */" },
		{ "VMI_VisualizeGroom.DisplayName", "Groom Visualization" },
		{ "VMI_VisualizeGroom.Name", "VMI_VisualizeGroom" },
		{ "VMI_VisualizeGroom.ToolTip", "Visualize Groom debug views" },
		{ "VMI_VisualizeLumen.Comment", "/** Visualize Lumen debug views */" },
		{ "VMI_VisualizeLumen.DisplayName", "Lumen Visualization" },
		{ "VMI_VisualizeLumen.Name", "VMI_VisualizeLumen" },
		{ "VMI_VisualizeLumen.ToolTip", "Visualize Lumen debug views" },
		{ "VMI_VisualizeNanite.Comment", "/** Visualize various aspects of Nanite */" },
		{ "VMI_VisualizeNanite.DisplayName", "Nanite Visualization" },
		{ "VMI_VisualizeNanite.Name", "VMI_VisualizeNanite" },
		{ "VMI_VisualizeNanite.ToolTip", "Visualize various aspects of Nanite" },
		{ "VMI_VisualizeSubstrate.Comment", "/** Visualize Substrate debug views */" },
		{ "VMI_VisualizeSubstrate.DisplayName", "Substrate Visualization" },
		{ "VMI_VisualizeSubstrate.Name", "VMI_VisualizeSubstrate" },
		{ "VMI_VisualizeSubstrate.ToolTip", "Visualize Substrate debug views" },
		{ "VMI_VisualizeVirtualShadowMap.Comment", "/** Visualize virtual shadow map */" },
		{ "VMI_VisualizeVirtualShadowMap.DisplayName", "Virtual Shadow Map Visualization" },
		{ "VMI_VisualizeVirtualShadowMap.Name", "VMI_VisualizeVirtualShadowMap" },
		{ "VMI_VisualizeVirtualShadowMap.ToolTip", "Visualize virtual shadow map" },
		{ "VMI_Wireframe.Comment", "/** Wireframe w/ BSP. */" },
		{ "VMI_Wireframe.DisplayName", "CSG Wireframe" },
		{ "VMI_Wireframe.Name", "VMI_Wireframe" },
		{ "VMI_Wireframe.ToolTip", "Wireframe w/ BSP." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EViewModeIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EViewModeIndex",
		"EViewModeIndex",
		Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewModeIndex_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EViewModeIndex()
	{
		if (!Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton, Z_Construct_UEnum_Engine_EViewModeIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewModeIndex.InnerSingleton;
	}
	void UViewModeUtils::StaticRegisterNativesUViewModeUtils()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModeUtils);
	UClass* Z_Construct_UClass_UViewModeUtils_NoRegister()
	{
		return UViewModeUtils::StaticClass();
	}
	struct Z_Construct_UClass_UViewModeUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewModeUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class containing a static util function to help with EViewModeIndex\n */" },
		{ "IncludePath", "Engine/EngineBaseTypes.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Class containing a static util function to help with EViewModeIndex" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewModeUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModeUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModeUtils_Statics::ClassParams = {
		&UViewModeUtils::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewModeUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewModeUtils()
	{
		if (!Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton, Z_Construct_UClass_UViewModeUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewModeUtils.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UViewModeUtils>()
	{
		return UViewModeUtils::StaticClass();
	}
	UViewModeUtils::UViewModeUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModeUtils);
	UViewModeUtils::~UViewModeUtils() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposureSettings;
class UScriptStruct* FExposureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposureSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExposureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ExposureSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposureSettings>()
{
	return FExposureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExposureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedEV100_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedEV100;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixed_MetaData[];
#endif
		static void NewProp_bFixed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings to allow designers to override the automatic expose */" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Settings to allow designers to override the automatic expose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData[] = {
		{ "Comment", "// EV100 settings for fixed mode\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "EV100 settings for fixed mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100 = { "FixedEV100", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposureSettings, FixedEV100), METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData[] = {
		{ "Comment", "// true: fixed exposure using the LogOffset value, false: automatic eye adaptation\n" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "true: fixed exposure using the LogOffset value, false: automatic eye adaptation" },
	};
#endif
	void Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit(void* Obj)
	{
		((FExposureSettings*)Obj)->bFixed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed = { "bFixed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FExposureSettings), &Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExposureSettings",
		sizeof(FExposureSettings),
		alignof(FExposureSettings),
		Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ExposureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposureSettings.InnerSingleton, Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExposureSettings.InnerSingleton;
	}
	void UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineBaseTypes);
	UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister()
	{
		return UEngineBaseTypes::StaticClass();
	}
	struct Z_Construct_UClass_UEngineBaseTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineBaseTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/EngineBaseTypes.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineBaseTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineBaseTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams = {
		&UEngineBaseTypes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineBaseTypes()
	{
		if (!Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton, Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineBaseTypes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineBaseTypes>()
	{
		return UEngineBaseTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineBaseTypes);
	UEngineBaseTypes::~UEngineBaseTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::EnumInfo[] = {
		{ EInputEvent_StaticEnum, TEXT("EInputEvent"), &Z_Registration_Info_UEnum_EInputEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1054153585U) },
		{ EMouseCaptureMode_StaticEnum, TEXT("EMouseCaptureMode"), &Z_Registration_Info_UEnum_EMouseCaptureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1275285483U) },
		{ EMouseLockMode_StaticEnum, TEXT("EMouseLockMode"), &Z_Registration_Info_UEnum_EMouseLockMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2802207277U) },
		{ ETickingGroup_StaticEnum, TEXT("ETickingGroup"), &Z_Registration_Info_UEnum_ETickingGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4250878082U) },
		{ ENetworkLagState_StaticEnum, TEXT("ENetworkLagState"), &Z_Registration_Info_UEnum_ENetworkLagState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1637101023U) },
		{ ETravelFailure_StaticEnum, TEXT("ETravelFailure"), &Z_Registration_Info_UEnum_ETravelFailure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3427391582U) },
		{ ETravelType_StaticEnum, TEXT("ETravelType"), &Z_Registration_Info_UEnum_ETravelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2356538094U) },
		{ EDemoPlayFailure_StaticEnum, TEXT("EDemoPlayFailure"), &Z_Registration_Info_UEnum_EDemoPlayFailure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1497963185U) },
		{ EViewModeIndex_StaticEnum, TEXT("EViewModeIndex"), &Z_Registration_Info_UEnum_EViewModeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1054163023U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ScriptStructInfo[] = {
		{ FTickPrerequisite::StaticStruct, Z_Construct_UScriptStruct_FTickPrerequisite_Statics::NewStructOps, TEXT("TickPrerequisite"), &Z_Registration_Info_UScriptStruct_TickPrerequisite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTickPrerequisite), 984470411U) },
		{ FTickFunction::StaticStruct, Z_Construct_UScriptStruct_FTickFunction_Statics::NewStructOps, TEXT("TickFunction"), &Z_Registration_Info_UScriptStruct_TickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTickFunction), 2234098452U) },
		{ FActorTickFunction::StaticStruct, Z_Construct_UScriptStruct_FActorTickFunction_Statics::NewStructOps, TEXT("ActorTickFunction"), &Z_Registration_Info_UScriptStruct_ActorTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorTickFunction), 1052777591U) },
		{ FActorComponentTickFunction::StaticStruct, Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::NewStructOps, TEXT("ActorComponentTickFunction"), &Z_Registration_Info_UScriptStruct_ActorComponentTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorComponentTickFunction), 1546393060U) },
		{ FURL::StaticStruct, Z_Construct_UScriptStruct_FURL_Statics::NewStructOps, TEXT("URL"), &Z_Registration_Info_UScriptStruct_URL, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FURL), 3857677191U) },
		{ FExposureSettings::StaticStruct, Z_Construct_UScriptStruct_FExposureSettings_Statics::NewStructOps, TEXT("ExposureSettings"), &Z_Registration_Info_UScriptStruct_ExposureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposureSettings), 1667589982U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewModeUtils, UViewModeUtils::StaticClass, TEXT("UViewModeUtils"), &Z_Registration_Info_UClass_UViewModeUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModeUtils), 2848604709U) },
		{ Z_Construct_UClass_UEngineBaseTypes, UEngineBaseTypes::StaticClass, TEXT("UEngineBaseTypes"), &Z_Registration_Info_UClass_UEngineBaseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineBaseTypes), 2060142677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_3352454472(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
