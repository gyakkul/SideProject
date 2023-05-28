// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVirtualCameraController.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "LiveLinkRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVirtualCameraController() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraController();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraController_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraOptions_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingOffset();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraTransform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualCameraFocusMethod;
	static UEnum* EVirtualCameraFocusMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("EVirtualCameraFocusMethod"));
		}
		return Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<EVirtualCameraFocusMethod>()
	{
		return EVirtualCameraFocusMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enumerators[] = {
		{ "EVirtualCameraFocusMethod::None", (int64)EVirtualCameraFocusMethod::None },
		{ "EVirtualCameraFocusMethod::Manual", (int64)EVirtualCameraFocusMethod::Manual },
		{ "EVirtualCameraFocusMethod::Tracking", (int64)EVirtualCameraFocusMethod::Tracking },
		{ "EVirtualCameraFocusMethod::Auto", (int64)EVirtualCameraFocusMethod::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/* Focus distance automatically changes to focus on actors in a specific screen location */" },
		{ "Auto.Name", "EVirtualCameraFocusMethod::Auto" },
		{ "Auto.ToolTip", "Focus distance automatically changes to focus on actors in a specific screen location" },
		{ "BlueprintType", "true" },
		{ "Manual.Comment", "/* User controls focus distance directly */" },
		{ "Manual.Name", "EVirtualCameraFocusMethod::Manual" },
		{ "Manual.ToolTip", "User controls focus distance directly" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "None.Comment", "/* Depth of Field disabled entirely */" },
		{ "None.Name", "EVirtualCameraFocusMethod::None" },
		{ "None.ToolTip", "Depth of Field disabled entirely" },
		{ "Tracking.Comment", "/* Focus distance is locked onto a specific point in relation to an actor */" },
		{ "Tracking.Name", "EVirtualCameraFocusMethod::Tracking" },
		{ "Tracking.ToolTip", "Focus distance is locked onto a specific point in relation to an actor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"EVirtualCameraFocusMethod",
		"EVirtualCameraFocusMethod",
		Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod()
	{
		if (!Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.InnerSingleton, Z_Construct_UEnum_VirtualCamera_EVirtualCameraFocusMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVirtualCameraFocusMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackingOffset;
class UScriptStruct* FTrackingOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackingOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackingOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackingOffset, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("TrackingOffset"));
	}
	return Z_Registration_Info_UScriptStruct_TrackingOffset.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FTrackingOffset>()
{
	return FTrackingOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackingOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackingOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackingOffset, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackingOffset, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackingOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackingOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"TrackingOffset",
		sizeof(FTrackingOffset),
		alignof(FTrackingOffset),
		Z_Construct_UScriptStruct_FTrackingOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackingOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackingOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackingOffset.InnerSingleton, Z_Construct_UScriptStruct_FTrackingOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackingOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraTransform;
class UScriptStruct* FVirtualCameraTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraTransform, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraTransform"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraTransform.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraTransform>()
{
	return FVirtualCameraTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraTransform",
		sizeof(FVirtualCameraTransform),
		alignof(FVirtualCameraTransform),
		Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraTransform.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraTransform.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms
		{
			FVirtualCameraTransform CameraTransform;
			FVirtualCameraTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms, CameraTransform), Z_Construct_UScriptStruct_FVirtualCameraTransform, METADATA_PARAMS(nullptr, 0) }; // 338018543
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVirtualCameraTransform, METADATA_PARAMS(nullptr, 0) }; // 338018543
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::NewProp_CameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "PreSetVirtualCameraTransform__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::_Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms), Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
FVirtualCameraTransform FPreSetVirtualCameraTransform_DelegateWrapper(const FScriptDelegate& PreSetVirtualCameraTransform, FVirtualCameraTransform CameraTransform)
{
	struct _Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms
	{
		FVirtualCameraTransform CameraTransform;
		FVirtualCameraTransform ReturnValue;
	};
	_Script_VirtualCamera_eventPreSetVirtualCameraTransform_Parms Parms;
	Parms.CameraTransform=CameraTransform;
	PreSetVirtualCameraTransform.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventOnActorClickedDelegate_Parms
		{
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventOnActorClickedDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "OnActorClickedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::_Script_VirtualCamera_eventOnActorClickedDelegate_Parms), Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActorClickedDelegate_DelegateWrapper(const FScriptDelegate& OnActorClickedDelegate, FHitResult HitResult)
{
	struct _Script_VirtualCamera_eventOnActorClickedDelegate_Parms
	{
		FHitResult HitResult;
	};
	_Script_VirtualCamera_eventOnActorClickedDelegate_Parms Parms;
	Parms.HitResult=HitResult;
	OnActorClickedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventVirtualCameraTickDelegateGroup_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventVirtualCameraTickDelegateGroup_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "VirtualCameraTickDelegateGroup__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::_Script_VirtualCamera_eventVirtualCameraTickDelegateGroup_Parms), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVirtualCameraTickDelegateGroup_DelegateWrapper(const FMulticastScriptDelegate& VirtualCameraTickDelegateGroup, float DeltaTime)
{
	struct _Script_VirtualCamera_eventVirtualCameraTickDelegateGroup_Parms
	{
		float DeltaTime;
	};
	_Script_VirtualCamera_eventVirtualCameraTickDelegateGroup_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	VirtualCameraTickDelegateGroup.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics
	{
		struct _Script_VirtualCamera_eventVirtualCameraTickDelegate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VirtualCamera_eventVirtualCameraTickDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "VirtualCameraTickDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::_Script_VirtualCamera_eventVirtualCameraTickDelegate_Parms), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVirtualCameraTickDelegate_DelegateWrapper(const FScriptDelegate& VirtualCameraTickDelegate, float DeltaTime)
{
	struct _Script_VirtualCamera_eventVirtualCameraTickDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_VirtualCamera_eventVirtualCameraTickDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	VirtualCameraTickDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(IVirtualCameraController::execRemoveOnVirtualCameraUpdatedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execAddOnVirtualCameraUpdatedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetOnActorClickedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnActorClickedDelegate_Implementation(FOnActorClickedDelegate(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetBeforeSetVirtualCameraTransformDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeforeSetVirtualCameraTransformDelegate_Implementation(FPreSetVirtualCameraTransform(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetFocusVisualization)
	{
		P_GET_UBOOL(Z_Param_bInShowFocusVisualization);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusVisualization_Implementation(Z_Param_bInShowFocusVisualization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetTrackedActorForFocus)
	{
		P_GET_OBJECT(AActor,Z_Param_InActorToTrack);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TrackingPointOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackedActorForFocus_Implementation(Z_Param_InActorToTrack,Z_Param_Out_TrackingPointOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execAddBlendableToCamera)
	{
		P_GET_TINTERFACE_REF(IBlendableInterface,Z_Param_Out_InBlendableToAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBlendableToCamera_Implementation(Z_Param_Out_InBlendableToAdd,Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRelativeTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetSaveSettingsOnStopStreaming)
	{
		P_GET_UBOOL(Z_Param_bShouldSettingsSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaveSettingsOnStopStreaming_Implementation(Z_Param_bShouldSettingsSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execShouldSaveSettingsOnStopStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldSaveSettingsOnStopStreaming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execIsStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStreaming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execSetLiveLinkRepresentation)
	{
		P_GET_STRUCT_REF(FLiveLinkSubjectRepresentation,Z_Param_Out_InLiveLinkRepresenation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLiveLinkRepresentation_Implementation(Z_Param_Out_InLiveLinkRepresenation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetLiveLinkRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLiveLinkSubjectRepresentation*)Z_Param__Result=P_THIS->GetLiveLinkRepresentation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IVirtualCameraOptions>*)Z_Param__Result=P_THIS->GetOptions_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetPresetContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IVirtualCameraPresetContainer>*)Z_Param__Result=P_THIS->GetPresetContainer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetSequenceController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequencePlaybackController**)Z_Param__Result=P_THIS->GetSequenceController_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetSceneCaptureComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneCaptureComponent2D**)Z_Param__Result=P_THIS->GetSceneCaptureComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraController::execGetStreamedCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineCameraComponent**)Z_Param__Result=P_THIS->GetStreamedCameraComponent_Implementation();
		P_NATIVE_END;
	}
	struct VirtualCameraController_eventAddBlendableToCamera_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableToAdd;
		float InWeight;
	};
	struct VirtualCameraController_eventAddOnVirtualCameraUpdatedDelegate_Parms
	{
		FVirtualCameraTickDelegate InDelegate;
	};
	struct VirtualCameraController_eventGetLiveLinkRepresentation_Parms
	{
		FLiveLinkSubjectRepresentation ReturnValue;
	};
	struct VirtualCameraController_eventGetOptions_Parms
	{
		TScriptInterface<IVirtualCameraOptions> ReturnValue;
	};
	struct VirtualCameraController_eventGetPresetContainer_Parms
	{
		TScriptInterface<IVirtualCameraPresetContainer> ReturnValue;
	};
	struct VirtualCameraController_eventGetRelativeTransform_Parms
	{
		FTransform ReturnValue;
	};
	struct VirtualCameraController_eventGetSceneCaptureComponent_Parms
	{
		USceneCaptureComponent2D* ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraController_eventGetSceneCaptureComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct VirtualCameraController_eventGetSequenceController_Parms
	{
		ULevelSequencePlaybackController* ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraController_eventGetSequenceController_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct VirtualCameraController_eventGetStreamedCameraComponent_Parms
	{
		UCineCameraComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraController_eventGetStreamedCameraComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct VirtualCameraController_eventIsStreaming_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraController_eventIsStreaming_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VirtualCameraController_eventRemoveOnVirtualCameraUpdatedDelegate_Parms
	{
		FVirtualCameraTickDelegate InDelegate;
	};
	struct VirtualCameraController_eventSetBeforeSetVirtualCameraTransformDelegate_Parms
	{
		FPreSetVirtualCameraTransform InDelegate;
	};
	struct VirtualCameraController_eventSetFocusVisualization_Parms
	{
		bool bInShowFocusVisualization;
	};
	struct VirtualCameraController_eventSetLiveLinkRepresentation_Parms
	{
		FLiveLinkSubjectRepresentation InLiveLinkRepresenation;
	};
	struct VirtualCameraController_eventSetOnActorClickedDelegate_Parms
	{
		FOnActorClickedDelegate InDelegate;
	};
	struct VirtualCameraController_eventSetSaveSettingsOnStopStreaming_Parms
	{
		bool bShouldSettingsSave;
	};
	struct VirtualCameraController_eventSetTrackedActorForFocus_Parms
	{
		AActor* InActorToTrack;
		FVector TrackingPointOffset;
	};
	struct VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms()
			: ReturnValue(false)
		{
		}
	};
	void IVirtualCameraController::AddBlendableToCamera(TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddBlendableToCamera instead.");
	}
	void IVirtualCameraController::AddOnVirtualCameraUpdatedDelegate(FVirtualCameraTickDelegate const& InDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddOnVirtualCameraUpdatedDelegate instead.");
	}
	FLiveLinkSubjectRepresentation IVirtualCameraController::GetLiveLinkRepresentation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLiveLinkRepresentation instead.");
		VirtualCameraController_eventGetLiveLinkRepresentation_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IVirtualCameraOptions> IVirtualCameraController::GetOptions()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOptions instead.");
		VirtualCameraController_eventGetOptions_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IVirtualCameraPresetContainer> IVirtualCameraController::GetPresetContainer()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPresetContainer instead.");
		VirtualCameraController_eventGetPresetContainer_Parms Parms;
		return Parms.ReturnValue;
	}
	FTransform IVirtualCameraController::GetRelativeTransform() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRelativeTransform instead.");
		VirtualCameraController_eventGetRelativeTransform_Parms Parms;
		return Parms.ReturnValue;
	}
	USceneCaptureComponent2D* IVirtualCameraController::GetSceneCaptureComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSceneCaptureComponent instead.");
		VirtualCameraController_eventGetSceneCaptureComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	ULevelSequencePlaybackController* IVirtualCameraController::GetSequenceController() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSequenceController instead.");
		VirtualCameraController_eventGetSequenceController_Parms Parms;
		return Parms.ReturnValue;
	}
	UCineCameraComponent* IVirtualCameraController::GetStreamedCameraComponent() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStreamedCameraComponent instead.");
		VirtualCameraController_eventGetStreamedCameraComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVirtualCameraController::IsStreaming() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsStreaming instead.");
		VirtualCameraController_eventIsStreaming_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVirtualCameraController::RemoveOnVirtualCameraUpdatedDelegate(FVirtualCameraTickDelegate const& InDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveOnVirtualCameraUpdatedDelegate instead.");
	}
	void IVirtualCameraController::SetBeforeSetVirtualCameraTransformDelegate(FPreSetVirtualCameraTransform const& InDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetBeforeSetVirtualCameraTransformDelegate instead.");
	}
	void IVirtualCameraController::SetFocusVisualization(bool bInShowFocusVisualization)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFocusVisualization instead.");
	}
	void IVirtualCameraController::SetLiveLinkRepresentation(FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetLiveLinkRepresentation instead.");
	}
	void IVirtualCameraController::SetOnActorClickedDelegate(FOnActorClickedDelegate const& InDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetOnActorClickedDelegate instead.");
	}
	void IVirtualCameraController::SetSaveSettingsOnStopStreaming(bool bShouldSettingsSave)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSaveSettingsOnStopStreaming instead.");
	}
	void IVirtualCameraController::SetTrackedActorForFocus(AActor* InActorToTrack, FVector const& TrackingPointOffset)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTrackedActorForFocus instead.");
	}
	bool IVirtualCameraController::ShouldSaveSettingsOnStopStreaming() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldSaveSettingsOnStopStreaming instead.");
		VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVirtualCameraController::StaticRegisterNativesUVirtualCameraController()
	{
		UClass* Class = UVirtualCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlendableToCamera", &IVirtualCameraController::execAddBlendableToCamera },
			{ "AddOnVirtualCameraUpdatedDelegate", &IVirtualCameraController::execAddOnVirtualCameraUpdatedDelegate },
			{ "GetLiveLinkRepresentation", &IVirtualCameraController::execGetLiveLinkRepresentation },
			{ "GetOptions", &IVirtualCameraController::execGetOptions },
			{ "GetPresetContainer", &IVirtualCameraController::execGetPresetContainer },
			{ "GetRelativeTransform", &IVirtualCameraController::execGetRelativeTransform },
			{ "GetSceneCaptureComponent", &IVirtualCameraController::execGetSceneCaptureComponent },
			{ "GetSequenceController", &IVirtualCameraController::execGetSequenceController },
			{ "GetStreamedCameraComponent", &IVirtualCameraController::execGetStreamedCameraComponent },
			{ "IsStreaming", &IVirtualCameraController::execIsStreaming },
			{ "RemoveOnVirtualCameraUpdatedDelegate", &IVirtualCameraController::execRemoveOnVirtualCameraUpdatedDelegate },
			{ "SetBeforeSetVirtualCameraTransformDelegate", &IVirtualCameraController::execSetBeforeSetVirtualCameraTransformDelegate },
			{ "SetFocusVisualization", &IVirtualCameraController::execSetFocusVisualization },
			{ "SetLiveLinkRepresentation", &IVirtualCameraController::execSetLiveLinkRepresentation },
			{ "SetOnActorClickedDelegate", &IVirtualCameraController::execSetOnActorClickedDelegate },
			{ "SetSaveSettingsOnStopStreaming", &IVirtualCameraController::execSetSaveSettingsOnStopStreaming },
			{ "SetTrackedActorForFocus", &IVirtualCameraController::execSetTrackedActorForFocus },
			{ "ShouldSaveSettingsOnStopStreaming", &IVirtualCameraController::execShouldSaveSettingsOnStopStreaming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendableToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableToAdd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InBlendableToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InBlendableToAdd = { "InBlendableToAdd", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventAddBlendableToCamera_Parms, InBlendableToAdd), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InBlendableToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InBlendableToAdd_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventAddBlendableToCamera_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InBlendableToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "AddBlendableToCamera", nullptr, nullptr, sizeof(VirtualCameraController_eventAddBlendableToCamera_Parms), Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventAddOnVirtualCameraUpdatedDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 2943429842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Adds a delegate that will be executed every tick while streaming. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Adds a delegate that will be executed every tick while streaming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "AddOnVirtualCameraUpdatedDelegate", nullptr, nullptr, sizeof(VirtualCameraController_eventAddOnVirtualCameraUpdatedDelegate_Parms), Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetLiveLinkRepresentation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(nullptr, 0) }; // 4150041114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetLiveLinkRepresentation", nullptr, nullptr, sizeof(VirtualCameraController_eventGetLiveLinkRepresentation_Parms), Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics
	{
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetOptions_Parms, ReturnValue), Z_Construct_UClass_UVirtualCameraOptions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Options" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetOptions", nullptr, nullptr, sizeof(VirtualCameraController_eventGetOptions_Parms), Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics
	{
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetPresetContainer_Parms, ReturnValue), Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Presets" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetPresetContainer", nullptr, nullptr, sizeof(VirtualCameraController_eventGetPresetContainer_Parms), Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetRelativeTransform", nullptr, nullptr, sizeof(VirtualCameraController_eventGetRelativeTransform_Parms), Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetSceneCaptureComponent_Parms, ReturnValue), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Component" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetSceneCaptureComponent", nullptr, nullptr, sizeof(VirtualCameraController_eventGetSceneCaptureComponent_Parms), Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetSequenceController_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlaybackController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Sequencer" },
		{ "Comment", "/** Returns the VirtualCamera's Sequence Controller. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Returns the VirtualCamera's Sequence Controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetSequenceController", nullptr, nullptr, sizeof(VirtualCameraController_eventGetSequenceController_Parms), Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetSequenceController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetSequenceController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventGetStreamedCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Component" },
		{ "Comment", "/** Returns the target camera that is used to create the streamed view. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Returns the target camera that is used to create the streamed view." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "GetStreamedCameraComponent", nullptr, nullptr, sizeof(VirtualCameraController_eventGetStreamedCameraComponent_Parms), Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraController_eventIsStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraController_eventIsStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "IsStreaming", nullptr, nullptr, sizeof(VirtualCameraController_eventIsStreaming_Parms), Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_IsStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_IsStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventRemoveOnVirtualCameraUpdatedDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 2943429842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Remove delegate that is executed every tick while streaming. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Remove delegate that is executed every tick while streaming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "RemoveOnVirtualCameraUpdatedDelegate", nullptr, nullptr, sizeof(VirtualCameraController_eventRemoveOnVirtualCameraUpdatedDelegate_Parms), Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventSetBeforeSetVirtualCameraTransformDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 718134135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "Comment", "/** Delegate will be executed before transform is set onto VirtualCamera. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Delegate will be executed before transform is set onto VirtualCamera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetBeforeSetVirtualCameraTransformDelegate", nullptr, nullptr, sizeof(VirtualCameraController_eventSetBeforeSetVirtualCameraTransformDelegate_Parms), Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics
	{
		static void NewProp_bInShowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShowFocusVisualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::NewProp_bInShowFocusVisualization_SetBit(void* Obj)
	{
		((VirtualCameraController_eventSetFocusVisualization_Parms*)Obj)->bInShowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::NewProp_bInShowFocusVisualization = { "bInShowFocusVisualization", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraController_eventSetFocusVisualization_Parms), &Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::NewProp_bInShowFocusVisualization_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::NewProp_bInShowFocusVisualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Focus" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetFocusVisualization", nullptr, nullptr, sizeof(VirtualCameraController_eventSetFocusVisualization_Parms), Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLiveLinkRepresenation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLiveLinkRepresenation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::NewProp_InLiveLinkRepresenation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::NewProp_InLiveLinkRepresenation = { "InLiveLinkRepresenation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventSetLiveLinkRepresentation_Parms, InLiveLinkRepresenation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::NewProp_InLiveLinkRepresenation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::NewProp_InLiveLinkRepresenation_MetaData)) }; // 4150041114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::NewProp_InLiveLinkRepresenation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetLiveLinkRepresentation", nullptr, nullptr, sizeof(VirtualCameraController_eventSetLiveLinkRepresentation_Parms), Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventSetOnActorClickedDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 327141094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Focus" },
		{ "Comment", "/** Delegate will be executed when an actor in the scene was clicked/touched. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Delegate will be executed when an actor in the scene was clicked/touched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetOnActorClickedDelegate", nullptr, nullptr, sizeof(VirtualCameraController_eventSetOnActorClickedDelegate_Parms), Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics
	{
		static void NewProp_bShouldSettingsSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSettingsSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::NewProp_bShouldSettingsSave_SetBit(void* Obj)
	{
		((VirtualCameraController_eventSetSaveSettingsOnStopStreaming_Parms*)Obj)->bShouldSettingsSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::NewProp_bShouldSettingsSave = { "bShouldSettingsSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraController_eventSetSaveSettingsOnStopStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::NewProp_bShouldSettingsSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::NewProp_bShouldSettingsSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Settings" },
		{ "Comment", "/** Sets whether settings should be saved when stream is stopped. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Sets whether settings should be saved when stream is stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetSaveSettingsOnStopStreaming", nullptr, nullptr, sizeof(VirtualCameraController_eventSetSaveSettingsOnStopStreaming_Parms), Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingPointOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingPointOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_InActorToTrack = { "InActorToTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventSetTrackedActorForFocus_Parms, InActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_TrackingPointOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_TrackingPointOffset = { "TrackingPointOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraController_eventSetTrackedActorForFocus_Parms, TrackingPointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_TrackingPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_TrackingPointOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_InActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::NewProp_TrackingPointOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Focus" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "SetTrackedActorForFocus", nullptr, nullptr, sizeof(VirtualCameraController_eventSetTrackedActorForFocus_Parms), Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms), &Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Settings" },
		{ "Comment", "/** Check whether settings should save when stream is stopped. */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
		{ "ToolTip", "Check whether settings should save when stream is stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraController, nullptr, "ShouldSaveSettingsOnStopStreaming", nullptr, nullptr, sizeof(VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms), Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraController);
	UClass* Z_Construct_UClass_UVirtualCameraController_NoRegister()
	{
		return UVirtualCameraController::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraController_AddBlendableToCamera, "AddBlendableToCamera" }, // 1860779462
		{ &Z_Construct_UFunction_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate, "AddOnVirtualCameraUpdatedDelegate" }, // 3000827478
		{ &Z_Construct_UFunction_UVirtualCameraController_GetLiveLinkRepresentation, "GetLiveLinkRepresentation" }, // 1167243674
		{ &Z_Construct_UFunction_UVirtualCameraController_GetOptions, "GetOptions" }, // 3283635457
		{ &Z_Construct_UFunction_UVirtualCameraController_GetPresetContainer, "GetPresetContainer" }, // 1793469323
		{ &Z_Construct_UFunction_UVirtualCameraController_GetRelativeTransform, "GetRelativeTransform" }, // 3774373945
		{ &Z_Construct_UFunction_UVirtualCameraController_GetSceneCaptureComponent, "GetSceneCaptureComponent" }, // 322229291
		{ &Z_Construct_UFunction_UVirtualCameraController_GetSequenceController, "GetSequenceController" }, // 1622681138
		{ &Z_Construct_UFunction_UVirtualCameraController_GetStreamedCameraComponent, "GetStreamedCameraComponent" }, // 2412415694
		{ &Z_Construct_UFunction_UVirtualCameraController_IsStreaming, "IsStreaming" }, // 3698576854
		{ &Z_Construct_UFunction_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate, "RemoveOnVirtualCameraUpdatedDelegate" }, // 899745072
		{ &Z_Construct_UFunction_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate, "SetBeforeSetVirtualCameraTransformDelegate" }, // 946894317
		{ &Z_Construct_UFunction_UVirtualCameraController_SetFocusVisualization, "SetFocusVisualization" }, // 3090553307
		{ &Z_Construct_UFunction_UVirtualCameraController_SetLiveLinkRepresentation, "SetLiveLinkRepresentation" }, // 2524554063
		{ &Z_Construct_UFunction_UVirtualCameraController_SetOnActorClickedDelegate, "SetOnActorClickedDelegate" }, // 61595005
		{ &Z_Construct_UFunction_UVirtualCameraController_SetSaveSettingsOnStopStreaming, "SetSaveSettingsOnStopStreaming" }, // 450769865
		{ &Z_Construct_UFunction_UVirtualCameraController_SetTrackedActorForFocus, "SetTrackedActorForFocus" }, // 2577110923
		{ &Z_Construct_UFunction_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming, "ShouldSaveSettingsOnStopStreaming" }, // 1315428562
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IVirtualCameraController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVirtualCameraController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraController_Statics::ClassParams = {
		&UVirtualCameraController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraController()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraController.OuterSingleton, Z_Construct_UClass_UVirtualCameraController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraController.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraController>()
	{
		return UVirtualCameraController::StaticClass();
	}
	UVirtualCameraController::UVirtualCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraController);
	UVirtualCameraController::~UVirtualCameraController() {}
	static FName NAME_UVirtualCameraController_AddBlendableToCamera = FName(TEXT("AddBlendableToCamera"));
	void IVirtualCameraController::Execute_AddBlendableToCamera(UObject* O, TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventAddBlendableToCamera_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_AddBlendableToCamera);
		if (Func)
		{
			Parms.InBlendableToAdd=InBlendableToAdd;
			Parms.InWeight=InWeight;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->AddBlendableToCamera_Implementation(InBlendableToAdd,InWeight);
		}
	}
	static FName NAME_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate = FName(TEXT("AddOnVirtualCameraUpdatedDelegate"));
	void IVirtualCameraController::Execute_AddOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventAddOnVirtualCameraUpdatedDelegate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_AddOnVirtualCameraUpdatedDelegate);
		if (Func)
		{
			Parms.InDelegate=InDelegate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->AddOnVirtualCameraUpdatedDelegate_Implementation(InDelegate);
		}
	}
	static FName NAME_UVirtualCameraController_GetLiveLinkRepresentation = FName(TEXT("GetLiveLinkRepresentation"));
	FLiveLinkSubjectRepresentation IVirtualCameraController::Execute_GetLiveLinkRepresentation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetLiveLinkRepresentation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetLiveLinkRepresentation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetLiveLinkRepresentation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetOptions = FName(TEXT("GetOptions"));
	TScriptInterface<IVirtualCameraOptions> IVirtualCameraController::Execute_GetOptions(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetOptions_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetOptions);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetOptions_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetPresetContainer = FName(TEXT("GetPresetContainer"));
	TScriptInterface<IVirtualCameraPresetContainer> IVirtualCameraController::Execute_GetPresetContainer(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetPresetContainer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetPresetContainer);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetPresetContainer_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetRelativeTransform = FName(TEXT("GetRelativeTransform"));
	FTransform IVirtualCameraController::Execute_GetRelativeTransform(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetRelativeTransform_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetRelativeTransform);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetRelativeTransform_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetSceneCaptureComponent = FName(TEXT("GetSceneCaptureComponent"));
	USceneCaptureComponent2D* IVirtualCameraController::Execute_GetSceneCaptureComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetSceneCaptureComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetSceneCaptureComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetSceneCaptureComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetSequenceController = FName(TEXT("GetSequenceController"));
	ULevelSequencePlaybackController* IVirtualCameraController::Execute_GetSequenceController(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetSequenceController_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetSequenceController);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetSequenceController_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_GetStreamedCameraComponent = FName(TEXT("GetStreamedCameraComponent"));
	UCineCameraComponent* IVirtualCameraController::Execute_GetStreamedCameraComponent(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventGetStreamedCameraComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_GetStreamedCameraComponent);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->GetStreamedCameraComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_IsStreaming = FName(TEXT("IsStreaming"));
	bool IVirtualCameraController::Execute_IsStreaming(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventIsStreaming_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_IsStreaming);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->IsStreaming_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate = FName(TEXT("RemoveOnVirtualCameraUpdatedDelegate"));
	void IVirtualCameraController::Execute_RemoveOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventRemoveOnVirtualCameraUpdatedDelegate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_RemoveOnVirtualCameraUpdatedDelegate);
		if (Func)
		{
			Parms.InDelegate=InDelegate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->RemoveOnVirtualCameraUpdatedDelegate_Implementation(InDelegate);
		}
	}
	static FName NAME_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate = FName(TEXT("SetBeforeSetVirtualCameraTransformDelegate"));
	void IVirtualCameraController::Execute_SetBeforeSetVirtualCameraTransformDelegate(UObject* O, FPreSetVirtualCameraTransform const& InDelegate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetBeforeSetVirtualCameraTransformDelegate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetBeforeSetVirtualCameraTransformDelegate);
		if (Func)
		{
			Parms.InDelegate=InDelegate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetBeforeSetVirtualCameraTransformDelegate_Implementation(InDelegate);
		}
	}
	static FName NAME_UVirtualCameraController_SetFocusVisualization = FName(TEXT("SetFocusVisualization"));
	void IVirtualCameraController::Execute_SetFocusVisualization(UObject* O, bool bInShowFocusVisualization)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetFocusVisualization_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetFocusVisualization);
		if (Func)
		{
			Parms.bInShowFocusVisualization=bInShowFocusVisualization;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetFocusVisualization_Implementation(bInShowFocusVisualization);
		}
	}
	static FName NAME_UVirtualCameraController_SetLiveLinkRepresentation = FName(TEXT("SetLiveLinkRepresentation"));
	void IVirtualCameraController::Execute_SetLiveLinkRepresentation(UObject* O, FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetLiveLinkRepresentation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetLiveLinkRepresentation);
		if (Func)
		{
			Parms.InLiveLinkRepresenation=InLiveLinkRepresenation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetLiveLinkRepresentation_Implementation(InLiveLinkRepresenation);
		}
	}
	static FName NAME_UVirtualCameraController_SetOnActorClickedDelegate = FName(TEXT("SetOnActorClickedDelegate"));
	void IVirtualCameraController::Execute_SetOnActorClickedDelegate(UObject* O, FOnActorClickedDelegate const& InDelegate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetOnActorClickedDelegate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetOnActorClickedDelegate);
		if (Func)
		{
			Parms.InDelegate=InDelegate;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetOnActorClickedDelegate_Implementation(InDelegate);
		}
	}
	static FName NAME_UVirtualCameraController_SetSaveSettingsOnStopStreaming = FName(TEXT("SetSaveSettingsOnStopStreaming"));
	void IVirtualCameraController::Execute_SetSaveSettingsOnStopStreaming(UObject* O, bool bShouldSettingsSave)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetSaveSettingsOnStopStreaming_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetSaveSettingsOnStopStreaming);
		if (Func)
		{
			Parms.bShouldSettingsSave=bShouldSettingsSave;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetSaveSettingsOnStopStreaming_Implementation(bShouldSettingsSave);
		}
	}
	static FName NAME_UVirtualCameraController_SetTrackedActorForFocus = FName(TEXT("SetTrackedActorForFocus"));
	void IVirtualCameraController::Execute_SetTrackedActorForFocus(UObject* O, AActor* InActorToTrack, FVector const& TrackingPointOffset)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventSetTrackedActorForFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_SetTrackedActorForFocus);
		if (Func)
		{
			Parms.InActorToTrack=InActorToTrack;
			Parms.TrackingPointOffset=TrackingPointOffset;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			I->SetTrackedActorForFocus_Implementation(InActorToTrack,TrackingPointOffset);
		}
	}
	static FName NAME_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming = FName(TEXT("ShouldSaveSettingsOnStopStreaming"));
	bool IVirtualCameraController::Execute_ShouldSaveSettingsOnStopStreaming(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraController::StaticClass()));
		VirtualCameraController_eventShouldSaveSettingsOnStopStreaming_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraController_ShouldSaveSettingsOnStopStreaming);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVirtualCameraController*)(O->GetNativeInterfaceAddress(UVirtualCameraController::StaticClass())))
		{
			Parms.ReturnValue = I->ShouldSaveSettingsOnStopStreaming_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::EnumInfo[] = {
		{ EVirtualCameraFocusMethod_StaticEnum, TEXT("EVirtualCameraFocusMethod"), &Z_Registration_Info_UEnum_EVirtualCameraFocusMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3704608848U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ScriptStructInfo[] = {
		{ FTrackingOffset::StaticStruct, Z_Construct_UScriptStruct_FTrackingOffset_Statics::NewStructOps, TEXT("TrackingOffset"), &Z_Registration_Info_UScriptStruct_TrackingOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackingOffset), 3579961433U) },
		{ FVirtualCameraTransform::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics::NewStructOps, TEXT("VirtualCameraTransform"), &Z_Registration_Info_UScriptStruct_VirtualCameraTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraTransform), 338018543U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraController, UVirtualCameraController::StaticClass, TEXT("UVirtualCameraController"), &Z_Registration_Info_UClass_UVirtualCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraController), 154999263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_3203951825(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
