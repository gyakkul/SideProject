// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/VREditorInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorInteractor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EControllerType();
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_ETouchSwipeDirection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerType;
	static UEnum* EControllerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EControllerType, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("EControllerType"));
		}
		return Z_Registration_Info_UEnum_EControllerType.OuterSingleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EControllerType>()
	{
		return EControllerType_StaticEnum();
	}
	struct Z_Construct_UEnum_VREditor_EControllerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VREditor_EControllerType_Statics::Enumerators[] = {
		{ "EControllerType::Laser", (int64)EControllerType::Laser },
		{ "EControllerType::AssistingLaser", (int64)EControllerType::AssistingLaser },
		{ "EControllerType::UI", (int64)EControllerType::UI },
		{ "EControllerType::Navigation", (int64)EControllerType::Navigation },
		{ "EControllerType::Unknown", (int64)EControllerType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VREditor_EControllerType_Statics::Enum_MetaDataParams[] = {
		{ "AssistingLaser.Name", "EControllerType::AssistingLaser" },
		{ "BlueprintType", "true" },
		{ "Laser.Name", "EControllerType::Laser" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "Navigation.Name", "EControllerType::Navigation" },
		{ "UI.Name", "EControllerType::UI" },
		{ "Unknown.Name", "EControllerType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VREditor_EControllerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		"EControllerType",
		"EControllerType",
		Z_Construct_UEnum_VREditor_EControllerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EControllerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VREditor_EControllerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EControllerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VREditor_EControllerType()
	{
		if (!Z_Registration_Info_UEnum_EControllerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerType.InnerSingleton, Z_Construct_UEnum_VREditor_EControllerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchSwipeDirection;
	static UEnum* ETouchSwipeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETouchSwipeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETouchSwipeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VREditor_ETouchSwipeDirection, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("ETouchSwipeDirection"));
		}
		return Z_Registration_Info_UEnum_ETouchSwipeDirection.OuterSingleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<ETouchSwipeDirection>()
	{
		return ETouchSwipeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enumerators[] = {
		{ "ETouchSwipeDirection::None", (int64)ETouchSwipeDirection::None },
		{ "ETouchSwipeDirection::Left", (int64)ETouchSwipeDirection::Left },
		{ "ETouchSwipeDirection::Right", (int64)ETouchSwipeDirection::Right },
		{ "ETouchSwipeDirection::Up", (int64)ETouchSwipeDirection::Up },
		{ "ETouchSwipeDirection::Down", (int64)ETouchSwipeDirection::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Directions the trackpad can be swiped to */" },
		{ "Down.Name", "ETouchSwipeDirection::Down" },
		{ "Left.Name", "ETouchSwipeDirection::Left" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "None.Name", "ETouchSwipeDirection::None" },
		{ "Right.Name", "ETouchSwipeDirection::Right" },
		{ "ToolTip", "Directions the trackpad can be swiped to" },
		{ "Up.Name", "ETouchSwipeDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		"ETouchSwipeDirection",
		"ETouchSwipeDirection",
		Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VREditor_ETouchSwipeDirection()
	{
		if (!Z_Registration_Info_UEnum_ETouchSwipeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchSwipeDirection.InnerSingleton, Z_Construct_UEnum_VREditor_ETouchSwipeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETouchSwipeDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execUpdateHandMeshRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHandMeshRelativeTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execReplaceHandMeshComponent)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_GET_STRUCT(FVector,Z_Param_MeshScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceHandMeshComponent(Z_Param_NewMesh,Z_Param_MeshScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetSelectAndMoveTriggerValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSelectAndMoveTriggerValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execIsClickingOnUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClickingOnUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execIsHoveringOverUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execTryOverrideControllerType)
	{
		P_GET_ENUM(EControllerType,Z_Param_InControllerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryOverrideControllerType(EControllerType(Z_Param_InControllerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execSetControllerType)
	{
		P_GET_ENUM(EControllerType,Z_Param_InControllerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerType(EControllerType(Z_Param_InControllerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetControllerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerType*)Z_Param__Result=P_THIS->GetControllerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetControllerSide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetControllerSide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetTeleportActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVREditorTeleporter**)Z_Param__Result=P_THIS->GetTeleportActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execSetForceLaserColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceLaserColor(Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetLaserEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLaserEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetLaserStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLaserStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetLastTrackpadPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetLastTrackpadPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetTrackpadPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetTrackpadPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execIsTouchingTrackpad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTouchingTrackpad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execSetForceShowLaser)
	{
		P_GET_UBOOL(Z_Param_bInForceShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceShowLaser(Z_Param_bInForceShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetSlideDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetControllerHandSide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetControllerHandSide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execSetControllerHandSide)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InControllerHandSide);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerHandSide(Z_Param_InControllerHandSide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetMotionControllerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionControllerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execGetHMDDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetHMDDeviceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execSetupComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupComponent_Implementation(Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorInteractor::execInit)
	{
		P_GET_OBJECT(UVREditorMode,Z_Param_InVRMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_InVRMode);
		P_NATIVE_END;
	}
	struct VREditorInteractor_eventGetSlideDelta_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		VREditorInteractor_eventGetSlideDelta_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct VREditorInteractor_eventInit_Parms
	{
		UVREditorMode* InVRMode;
	};
	struct VREditorInteractor_eventSetupComponent_Parms
	{
		AActor* OwningActor;
	};
	static FName NAME_UVREditorInteractor_GetSlideDelta = FName(TEXT("GetSlideDelta"));
	float UVREditorInteractor::GetSlideDelta() const
	{
		VREditorInteractor_eventGetSlideDelta_Parms Parms;
		const_cast<UVREditorInteractor*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_GetSlideDelta),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVREditorInteractor_Init = FName(TEXT("Init"));
	void UVREditorInteractor::Init(UVREditorMode* InVRMode)
	{
		VREditorInteractor_eventInit_Parms Parms;
		Parms.InVRMode=InVRMode;
		ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_Init),&Parms);
	}
	static FName NAME_UVREditorInteractor_SetupComponent = FName(TEXT("SetupComponent"));
	void UVREditorInteractor::SetupComponent(AActor* OwningActor)
	{
		VREditorInteractor_eventSetupComponent_Parms Parms;
		Parms.OwningActor=OwningActor;
		ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_SetupComponent),&Parms);
	}
	static FName NAME_UVREditorInteractor_UpdateHandMeshRelativeTransform = FName(TEXT("UpdateHandMeshRelativeTransform"));
	void UVREditorInteractor::UpdateHandMeshRelativeTransform()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVREditorInteractor_UpdateHandMeshRelativeTransform),NULL);
	}
	void UVREditorInteractor::StaticRegisterNativesUVREditorInteractor()
	{
		UClass* Class = UVREditorInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerHandSide", &UVREditorInteractor::execGetControllerHandSide },
			{ "GetControllerSide", &UVREditorInteractor::execGetControllerSide },
			{ "GetControllerType", &UVREditorInteractor::execGetControllerType },
			{ "GetHMDDeviceType", &UVREditorInteractor::execGetHMDDeviceType },
			{ "GetLaserEnd", &UVREditorInteractor::execGetLaserEnd },
			{ "GetLaserStart", &UVREditorInteractor::execGetLaserStart },
			{ "GetLastTrackpadPosition", &UVREditorInteractor::execGetLastTrackpadPosition },
			{ "GetMotionControllerComponent", &UVREditorInteractor::execGetMotionControllerComponent },
			{ "GetSelectAndMoveTriggerValue", &UVREditorInteractor::execGetSelectAndMoveTriggerValue },
			{ "GetSlideDelta", &UVREditorInteractor::execGetSlideDelta },
			{ "GetTeleportActor", &UVREditorInteractor::execGetTeleportActor },
			{ "GetTrackpadPosition", &UVREditorInteractor::execGetTrackpadPosition },
			{ "Init", &UVREditorInteractor::execInit },
			{ "IsClickingOnUI", &UVREditorInteractor::execIsClickingOnUI },
			{ "IsHoveringOverUI", &UVREditorInteractor::execIsHoveringOverUI },
			{ "IsTouchingTrackpad", &UVREditorInteractor::execIsTouchingTrackpad },
			{ "ReplaceHandMeshComponent", &UVREditorInteractor::execReplaceHandMeshComponent },
			{ "SetControllerHandSide", &UVREditorInteractor::execSetControllerHandSide },
			{ "SetControllerType", &UVREditorInteractor::execSetControllerType },
			{ "SetForceLaserColor", &UVREditorInteractor::execSetForceLaserColor },
			{ "SetForceShowLaser", &UVREditorInteractor::execSetForceShowLaser },
			{ "SetupComponent", &UVREditorInteractor::execSetupComponent },
			{ "TryOverrideControllerType", &UVREditorInteractor::execTryOverrideControllerType },
			{ "UpdateHandMeshRelativeTransform", &UVREditorInteractor::execUpdateHandMeshRelativeTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics
	{
		struct VREditorInteractor_eventGetControllerHandSide_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetControllerHandSide_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Sets the EControllerHand for this motioncontroller */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Sets the EControllerHand for this motioncontroller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetControllerHandSide", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::VREditorInteractor_eventGetControllerHandSide_Parms), Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics
	{
		struct VREditorInteractor_eventGetControllerSide_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetControllerSide_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Get the side of the controller */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the side of the controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetControllerSide", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::VREditorInteractor_eventGetControllerSide_Parms), Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetControllerSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics
	{
		struct VREditorInteractor_eventGetControllerType_Parms
		{
			EControllerType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetControllerType_Parms, ReturnValue), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(nullptr, 0) }; // 1739814961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Returns what controller type this is for asymmetric control schemes */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Returns what controller type this is for asymmetric control schemes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetControllerType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::VREditorInteractor_eventGetControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics
	{
		struct VREditorInteractor_eventGetHMDDeviceType_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetHMDDeviceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** @return Returns the type of HMD we're dealing with */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "@return Returns the type of HMD we're dealing with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetHMDDeviceType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::VREditorInteractor_eventGetHMDDeviceType_Parms), Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics
	{
		struct VREditorInteractor_eventGetLaserEnd_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetLaserEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLaserEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::VREditorInteractor_eventGetLaserEnd_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics
	{
		struct VREditorInteractor_eventGetLaserStart_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetLaserStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "//\n// Getters and setters\n//\n" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Getters and setters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLaserStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::VREditorInteractor_eventGetLaserStart_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLaserStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLaserStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics
	{
		struct VREditorInteractor_eventGetLastTrackpadPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetLastTrackpadPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Get the last position of the trackpad or analog stick */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the last position of the trackpad or analog stick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetLastTrackpadPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::VREditorInteractor_eventGetLastTrackpadPosition_Parms), Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics
	{
		struct VREditorInteractor_eventGetMotionControllerComponent_Parms
		{
			UMotionControllerComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetMotionControllerComponent_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Get the motioncontroller component of this interactor */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the motioncontroller component of this interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetMotionControllerComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::VREditorInteractor_eventGetMotionControllerComponent_Parms), Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics
	{
		struct VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Gets the trigger value */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets the trigger value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetSelectAndMoveTriggerValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::VREditorInteractor_eventGetSelectAndMoveTriggerValue_Parms), Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetSlideDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Returns the slide delta for pushing and pulling objects. Needs to be implemented by derived classes (e.g. touchpad for vive controller or scrollweel for mouse ) */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Returns the slide delta for pushing and pulling objects. Needs to be implemented by derived classes (e.g. touchpad for vive controller or scrollweel for mouse )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetSlideDelta", nullptr, nullptr, sizeof(VREditorInteractor_eventGetSlideDelta_Parms), Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics
	{
		struct VREditorInteractor_eventGetTeleportActor_Parms
		{
			AVREditorTeleporter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetTeleportActor_Parms, ReturnValue), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetTeleportActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::VREditorInteractor_eventGetTeleportActor_Parms), Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics
	{
		struct VREditorInteractor_eventGetTrackpadPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventGetTrackpadPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Get the current position of the trackpad or analog stick */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Get the current position of the trackpad or analog stick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "GetTrackpadPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::VREditorInteractor_eventGetTrackpadPosition_Parms), Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_Init_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVRMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_Init_Statics::NewProp_InVRMode = { "InVRMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventInit_Parms, InVRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_Init_Statics::NewProp_InVRMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Initialize default values */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Initialize default values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "Init", nullptr, nullptr, sizeof(VREditorInteractor_eventInit_Parms), Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics
	{
		struct VREditorInteractor_eventIsClickingOnUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsClickingOnUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorInteractor_eventIsClickingOnUI_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Gets if the interactor is clicking on any UI */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets if the interactor is clicking on any UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsClickingOnUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::VREditorInteractor_eventIsClickingOnUI_Parms), Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics
	{
		struct VREditorInteractor_eventIsHoveringOverUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsHoveringOverUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorInteractor_eventIsHoveringOverUI_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Gets if this interactor is hovering over UI */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Gets if this interactor is hovering over UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsHoveringOverUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::VREditorInteractor_eventIsHoveringOverUI_Parms), Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics
	{
		struct VREditorInteractor_eventIsTouchingTrackpad_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventIsTouchingTrackpad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorInteractor_eventIsTouchingTrackpad_Parms), &Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Check if the touchpad is currently touched */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Check if the touchpad is currently touched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "IsTouchingTrackpad", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::VREditorInteractor_eventIsTouchingTrackpad_Parms), Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics
	{
		struct VREditorInteractor_eventReplaceHandMeshComponent_Parms
		{
			UStaticMesh* NewMesh;
			FVector MeshScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventReplaceHandMeshComponent_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventReplaceHandMeshComponent_Parms, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::NewProp_NewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::NewProp_MeshScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Replace the default VR controller mesh with a custom one. */" },
		{ "CPP_Default_MeshScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Replace the default VR controller mesh with a custom one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "ReplaceHandMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::VREditorInteractor_eventReplaceHandMeshComponent_Parms), Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics
	{
		struct VREditorInteractor_eventSetControllerHandSide_Parms
		{
			FName InControllerHandSide;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllerHandSide_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControllerHandSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide = { "InControllerHandSide", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventSetControllerHandSide_Parms, InControllerHandSide), METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::NewProp_InControllerHandSide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Sets the EControllerHand for this motioncontroller */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Sets the EControllerHand for this motioncontroller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetControllerHandSide", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::VREditorInteractor_eventSetControllerHandSide_Parms), Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics
	{
		struct VREditorInteractor_eventSetControllerType_Parms
		{
			EControllerType InControllerType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InControllerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InControllerType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType = { "InControllerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventSetControllerType_Parms, InControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_MetaData)) }; // 1739814961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::NewProp_InControllerType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Set what controller type this is for asymmetric control schemes */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Set what controller type this is for asymmetric control schemes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetControllerType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::VREditorInteractor_eventSetControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics
	{
		struct VREditorInteractor_eventSetForceLaserColor_Parms
		{
			FLinearColor InColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventSetForceLaserColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Next frame this will be used as color for the laser */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Next frame this will be used as color for the laser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetForceLaserColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::VREditorInteractor_eventSetForceLaserColor_Parms), Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics
	{
		struct VREditorInteractor_eventSetForceShowLaser_Parms
		{
			bool bInForceShow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInForceShow_MetaData[];
#endif
		static void NewProp_bInForceShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInForceShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_SetBit(void* Obj)
	{
		((VREditorInteractor_eventSetForceShowLaser_Parms*)Obj)->bInForceShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow = { "bInForceShow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorInteractor_eventSetForceShowLaser_Parms), &Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::NewProp_bInForceShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Set if we want to force to show the laser*/" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Set if we want to force to show the laser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetForceShowLaser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::VREditorInteractor_eventSetForceShowLaser_Parms), Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventSetupComponent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVREditorInteractor" },
		{ "Comment", "/** Sets up all components */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Sets up all components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "SetupComponent", nullptr, nullptr, sizeof(VREditorInteractor_eventSetupComponent_Parms), Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_SetupComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_SetupComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics
	{
		struct VREditorInteractor_eventTryOverrideControllerType_Parms
		{
			EControllerType InControllerType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InControllerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InControllerType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType = { "InControllerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorInteractor_eventTryOverrideControllerType_Parms, InControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_MetaData)) }; // 1739814961
	void Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorInteractor_eventTryOverrideControllerType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorInteractor_eventTryOverrideControllerType_Parms), &Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_InControllerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/**\n\x09 * Temporary set what controller type this is for asymmetric control schemes.\n\x09 * You can't override the controller type when there's already an override.\n\x09 * Remove the temporary controller type with EControllerType::Unknown\n\x09 * @return true if the controller type was changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Temporary set what controller type this is for asymmetric control schemes.\nYou can't override the controller type when there's already an override.\nRemove the temporary controller type with EControllerType::Unknown\n@return true if the controller type was changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "TryOverrideControllerType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::VREditorInteractor_eventTryOverrideControllerType_Parms), Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorInteractor, nullptr, "UpdateHandMeshRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorInteractor);
	UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister()
	{
		return UVREditorInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUndoRedoSwipeEnabled_MetaData[];
#endif
		static void NewProp_bIsUndoRedoSwipeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUndoRedoSwipeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MotionControllerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMotionControllerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserMotionControllerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserSplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserSplineComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserSplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaserSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserPointerMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserPointerMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentLaserPointerMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentLaserPointerMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverPointLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverPointLightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandMeshMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningAvatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningAvatar;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideControllerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideControllerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideControllerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMotionSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerMotionSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREditorInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREditorInteractor_GetControllerHandSide, "GetControllerHandSide" }, // 3411548736
		{ &Z_Construct_UFunction_UVREditorInteractor_GetControllerSide, "GetControllerSide" }, // 1066157017
		{ &Z_Construct_UFunction_UVREditorInteractor_GetControllerType, "GetControllerType" }, // 51750661
		{ &Z_Construct_UFunction_UVREditorInteractor_GetHMDDeviceType, "GetHMDDeviceType" }, // 2167126819
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLaserEnd, "GetLaserEnd" }, // 167328285
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLaserStart, "GetLaserStart" }, // 2821226966
		{ &Z_Construct_UFunction_UVREditorInteractor_GetLastTrackpadPosition, "GetLastTrackpadPosition" }, // 871359314
		{ &Z_Construct_UFunction_UVREditorInteractor_GetMotionControllerComponent, "GetMotionControllerComponent" }, // 1232001784
		{ &Z_Construct_UFunction_UVREditorInteractor_GetSelectAndMoveTriggerValue, "GetSelectAndMoveTriggerValue" }, // 2323324639
		{ &Z_Construct_UFunction_UVREditorInteractor_GetSlideDelta, "GetSlideDelta" }, // 2937213594
		{ &Z_Construct_UFunction_UVREditorInteractor_GetTeleportActor, "GetTeleportActor" }, // 827812735
		{ &Z_Construct_UFunction_UVREditorInteractor_GetTrackpadPosition, "GetTrackpadPosition" }, // 2577061162
		{ &Z_Construct_UFunction_UVREditorInteractor_Init, "Init" }, // 4246043992
		{ &Z_Construct_UFunction_UVREditorInteractor_IsClickingOnUI, "IsClickingOnUI" }, // 819763894
		{ &Z_Construct_UFunction_UVREditorInteractor_IsHoveringOverUI, "IsHoveringOverUI" }, // 1559957215
		{ &Z_Construct_UFunction_UVREditorInteractor_IsTouchingTrackpad, "IsTouchingTrackpad" }, // 1066162273
		{ &Z_Construct_UFunction_UVREditorInteractor_ReplaceHandMeshComponent, "ReplaceHandMeshComponent" }, // 1666023311
		{ &Z_Construct_UFunction_UVREditorInteractor_SetControllerHandSide, "SetControllerHandSide" }, // 1400113234
		{ &Z_Construct_UFunction_UVREditorInteractor_SetControllerType, "SetControllerType" }, // 4130326374
		{ &Z_Construct_UFunction_UVREditorInteractor_SetForceLaserColor, "SetForceLaserColor" }, // 946495082
		{ &Z_Construct_UFunction_UVREditorInteractor_SetForceShowLaser, "SetForceShowLaser" }, // 14796992
		{ &Z_Construct_UFunction_UVREditorInteractor_SetupComponent, "SetupComponent" }, // 3527116372
		{ &Z_Construct_UFunction_UVREditorInteractor_TryOverrideControllerType, "TryOverrideControllerType" }, // 3479471494
		{ &Z_Construct_UFunction_UVREditorInteractor_UpdateHandMeshRelativeTransform, "UpdateHandMeshRelativeTransform" }, // 807289590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * VREditor default interactor\n */" },
		{ "IncludePath", "VREditorInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "VREditor default interactor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled_MetaData[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Whether swiping left/right on touchpad/joystick triggers undo/redo  */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Whether swiping left/right on touchpad/joystick triggers undo/redo" },
	};
#endif
	void Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled_SetBit(void* Obj)
	{
		((UVREditorInteractor*)Obj)->bIsUndoRedoSwipeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled = { "bIsUndoRedoSwipeEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVREditorInteractor), &Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "Comment", "/** Motion controller component which handles late-frame transform updates of all parented sub-components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Motion controller component which handles late-frame transform updates of all parented sub-components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserMotionControllerComponent_MetaData[] = {
		{ "Comment", "/** Separate motion controller component set to the \"aim\" pose motion source, used for the laser pointer. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Separate motion controller component set to the \"aim\" pose motion source, used for the laser pointer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserMotionControllerComponent = { "LaserMotionControllerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, LaserMotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserMotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserMotionControllerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData[] = {
		{ "Category", "VREditorInteractor" },
		{ "Comment", "/** Access to the current handmesh. Use ReplaceHandMeshComponent() to update the entire StaticMeshComponent. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Access to the current handmesh. Use ReplaceHandMeshComponent() to update the entire StaticMeshComponent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent = { "HandMeshComponent", nullptr, (EPropertyFlags)0x002408000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, HandMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData[] = {
		{ "Comment", "/** Spline for this hand's laser pointer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Spline for this hand's laser pointer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent = { "LaserSplineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, LaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_Inner = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData[] = {
		{ "Comment", "/** Spline meshes for curved laser */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Spline meshes for curved laser" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, LaserSplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData[] = {
		{ "Comment", "/** MID for laser pointer material (opaque parts) */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for laser pointer material (opaque parts)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID = { "LaserPointerMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, LaserPointerMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData[] = {
		{ "Comment", "/** MID for laser pointer material (translucent parts) */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for laser pointer material (translucent parts)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID = { "TranslucentLaserPointerMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, TranslucentLaserPointerMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData[] = {
		{ "Comment", "/** Hover impact indicator mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Hover impact indicator mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent = { "HoverMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, HoverMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData[] = {
		{ "Comment", "/** Hover point light */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Hover point light" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent = { "HoverPointLightComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, HoverPointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData[] = {
		{ "Comment", "/** MID for hand mesh */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "MID for hand mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID = { "HandMeshMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, HandMeshMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OwningAvatar_MetaData[] = {
		{ "Comment", "/** Avatar actor that we're attached to. Cached so that we can change the HandMeshComponent via BP at runtime. */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Avatar actor that we're attached to. Cached so that we can change the HandMeshComponent via BP at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OwningAvatar = { "OwningAvatar", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, OwningAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OwningAvatar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OwningAvatar_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData[] = {
		{ "Comment", "/** For asymmetrical systems - what type of controller this is */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "For asymmetrical systems - what type of controller this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, ControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_MetaData)) }; // 1739814961
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData[] = {
		{ "Comment", "/** What was our previous controller type */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "What was our previous controller type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType = { "OverrideControllerType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, OverrideControllerType), Z_Construct_UEnum_VREditor_EControllerType, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_MetaData)) }; // 1739814961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData[] = {
		{ "Comment", "/** Right or left hand */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "Right or left hand" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource = { "ControllerMotionSource", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, ControllerMotionSource), METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** The mode that owns this interactor */" },
		{ "ModuleRelativePath", "Public/VREditorInteractor.h" },
		{ "ToolTip", "The mode that owns this interactor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorInteractor, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_bIsUndoRedoSwipeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_MotionControllerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserMotionControllerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_LaserPointerMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_TranslucentLaserPointerMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HoverPointLightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_HandMeshMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OwningAvatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_OverrideControllerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_ControllerMotionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorInteractor_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorInteractor_Statics::ClassParams = {
		&UVREditorInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorInteractor()
	{
		if (!Z_Registration_Info_UClass_UVREditorInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorInteractor.OuterSingleton, Z_Construct_UClass_UVREditorInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorInteractor.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorInteractor>()
	{
		return UVREditorInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorInteractor);
	UVREditorInteractor::~UVREditorInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::EnumInfo[] = {
		{ EControllerType_StaticEnum, TEXT("EControllerType"), &Z_Registration_Info_UEnum_EControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1739814961U) },
		{ ETouchSwipeDirection_StaticEnum, TEXT("ETouchSwipeDirection"), &Z_Registration_Info_UEnum_ETouchSwipeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2085525532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorInteractor, UVREditorInteractor::StaticClass, TEXT("UVREditorInteractor"), &Z_Registration_Info_UClass_UVREditorInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorInteractor), 1836780780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_3014183268(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
