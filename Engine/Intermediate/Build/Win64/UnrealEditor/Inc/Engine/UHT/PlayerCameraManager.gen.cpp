// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraCacheEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTViewTarget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAudioFadeChangeSignature_Parms
		{
			bool bFadeOut;
			float FadeTime;
		};
		static void NewProp_bFadeOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeOut;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_bFadeOut_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnAudioFadeChangeSignature_Parms*)Obj)->bFadeOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_bFadeOut = { "bFadeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventOnAudioFadeChangeSignature_Parms), &Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_bFadeOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAudioFadeChangeSignature_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_bFadeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::NewProp_FadeTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAudioFadeChangeSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::_Script_Engine_eventOnAudioFadeChangeSignature_Parms), Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioFadeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFadeChangeSignature, bool bFadeOut, float FadeTime)
{
	struct _Script_Engine_eventOnAudioFadeChangeSignature_Parms
	{
		bool bFadeOut;
		float FadeTime;
	};
	_Script_Engine_eventOnAudioFadeChangeSignature_Parms Parms;
	Parms.bFadeOut=bFadeOut ? true : false;
	Parms.FadeTime=FadeTime;
	OnAudioFadeChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewTargetBlendFunction;
	static UEnum* EViewTargetBlendFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewTargetBlendFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewTargetBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewTargetBlendFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EViewTargetBlendFunction"));
		}
		return Z_Registration_Info_UEnum_EViewTargetBlendFunction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EViewTargetBlendFunction>()
	{
		return EViewTargetBlendFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enumerators[] = {
		{ "VTBlend_Linear", (int64)VTBlend_Linear },
		{ "VTBlend_Cubic", (int64)VTBlend_Cubic },
		{ "VTBlend_EaseIn", (int64)VTBlend_EaseIn },
		{ "VTBlend_EaseOut", (int64)VTBlend_EaseOut },
		{ "VTBlend_EaseInOut", (int64)VTBlend_EaseInOut },
		{ "VTBlend_PreBlended", (int64)VTBlend_PreBlended },
		{ "VTBlend_MAX", (int64)VTBlend_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * Options that define how to blend when changing view targets. \n * @see FViewTargetTransitionParams, SetViewTarget \n */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Options that define how to blend when changing view targets.\n@see FViewTargetTransitionParams, SetViewTarget" },
		{ "VTBlend_Cubic.Comment", "/** Camera has a slight ease in and ease out, but amount of ease cannot be tweaked. */" },
		{ "VTBlend_Cubic.Name", "VTBlend_Cubic" },
		{ "VTBlend_Cubic.ToolTip", "Camera has a slight ease in and ease out, but amount of ease cannot be tweaked." },
		{ "VTBlend_EaseIn.Comment", "/** Camera immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseIn.Name", "VTBlend_EaseIn" },
		{ "VTBlend_EaseIn.ToolTip", "Camera immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by BlendExp." },
		{ "VTBlend_EaseInOut.Comment", "/** Camera smoothly accelerates and decelerates.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseInOut.Name", "VTBlend_EaseInOut" },
		{ "VTBlend_EaseInOut.ToolTip", "Camera smoothly accelerates and decelerates.  Ease amount controlled by BlendExp." },
		{ "VTBlend_EaseOut.Comment", "/** Camera smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by BlendExp. */" },
		{ "VTBlend_EaseOut.Name", "VTBlend_EaseOut" },
		{ "VTBlend_EaseOut.ToolTip", "Camera smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by BlendExp." },
		{ "VTBlend_Linear.Comment", "/** Camera does a simple linear interpolation. */" },
		{ "VTBlend_Linear.Name", "VTBlend_Linear" },
		{ "VTBlend_Linear.ToolTip", "Camera does a simple linear interpolation." },
		{ "VTBlend_MAX.Name", "VTBlend_MAX" },
		{ "VTBlend_PreBlended.Comment", "/** The game's camera system has already performed the blending. Engine should not blend at all */" },
		{ "VTBlend_PreBlended.Name", "VTBlend_PreBlended" },
		{ "VTBlend_PreBlended.ToolTip", "The game's camera system has already performed the blending. Engine should not blend at all" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EViewTargetBlendFunction",
		"EViewTargetBlendFunction",
		Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction()
	{
		if (!Z_Registration_Info_UEnum_EViewTargetBlendFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewTargetBlendFunction.InnerSingleton, Z_Construct_UEnum_Engine_EViewTargetBlendFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewTargetBlendFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraCacheEntry;
class UScriptStruct* FCameraCacheEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraCacheEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraCacheEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraCacheEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraCacheEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CameraCacheEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraCacheEntry>()
{
	return FCameraCacheEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraCacheEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Cached camera POV info, stored as optimization so we only\n * need to do a full camera update once per tick.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Cached camera POV info, stored as optimization so we only\nneed to do a full camera update once per tick." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraCacheEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Comment", "/** World time this entry was created. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "World time this entry was created." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraCacheEntry, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_POV_MetaData[] = {
		{ "Comment", "/** Camera POV to cache. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Camera POV to cache." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraCacheEntry, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_POV_MetaData)) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewProp_POV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraCacheEntry",
		sizeof(FCameraCacheEntry),
		alignof(FCameraCacheEntry),
		Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraCacheEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraCacheEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraCacheEntry.InnerSingleton, Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraCacheEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TViewTarget;
class UScriptStruct* FTViewTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TViewTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TViewTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTViewTarget, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TViewTarget"));
	}
	return Z_Registration_Info_UScriptStruct_TViewTarget.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTViewTarget>()
{
	return FTViewTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTViewTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTViewTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A ViewTarget is the primary actor the camera is associated with. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "A ViewTarget is the primary actor the camera is associated with." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTViewTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTViewTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "TViewTarget" },
		{ "Comment", "/** Target Actor used to compute POV */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Target Actor used to compute POV" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTViewTarget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_POV_MetaData[] = {
		{ "Category", "TViewTarget" },
		{ "Comment", "/** Computed point of view */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Computed point of view" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTViewTarget, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_POV_MetaData)) }; // 1056960465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "TViewTarget" },
		{ "Comment", "/** PlayerState (used to follow same player through pawn transitions, etc., when spectating) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "PlayerState (used to follow same player through pawn transitions, etc., when spectating)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTViewTarget, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_PlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_POV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTViewTarget_Statics::NewProp_PlayerState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTViewTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TViewTarget",
		sizeof(FTViewTarget),
		alignof(FTViewTarget),
		Z_Construct_UScriptStruct_FTViewTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTViewTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTViewTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTViewTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTViewTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_TViewTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TViewTarget.InnerSingleton, Z_Construct_UScriptStruct_FTViewTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TViewTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams;
class UScriptStruct* FViewTargetTransitionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewTargetTransitionParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ViewTargetTransitionParams"));
	}
	return Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FViewTargetTransitionParams>()
{
	return FViewTargetTransitionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendExp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockOutgoing_MetaData[];
#endif
		static void NewProp_bLockOutgoing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of parameters to describe how to transition between view targets. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "A set of parameters to describe how to transition between view targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewTargetTransitionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "ViewTargetTransitionParams" },
		{ "Comment", "/** Total duration of blend to pending view target. 0 means no blending. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Total duration of blend to pending view target. 0 means no blending." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendFunction_MetaData[] = {
		{ "Category", "ViewTargetTransitionParams" },
		{ "Comment", "/** Function to apply to the blend parameter. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Function to apply to the blend parameter." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendFunction), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendFunction_MetaData)) }; // 3430533364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendExp_MetaData[] = {
		{ "Category", "ViewTargetTransitionParams" },
		{ "Comment", "/** Exponent, used by certain blend functions to control the shape of the curve. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Exponent, used by certain blend functions to control the shape of the curve." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewTargetTransitionParams, BlendExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendExp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing_MetaData[] = {
		{ "Category", "ViewTargetTransitionParams" },
		{ "Comment", "/** \n\x09 * If true, lock outgoing viewtarget to last frame's camera POV for the remainder of the blend.\n\x09 * This is useful if you plan to teleport the old viewtarget, but don't want to affect the blend. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "If true, lock outgoing viewtarget to last frame's camera POV for the remainder of the blend.\nThis is useful if you plan to teleport the old viewtarget, but don't want to affect the blend." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing_SetBit(void* Obj)
	{
		((FViewTargetTransitionParams*)Obj)->bLockOutgoing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing = { "bLockOutgoing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FViewTargetTransitionParams), &Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_BlendExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewProp_bLockOutgoing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ViewTargetTransitionParams",
		sizeof(FViewTargetTransitionParams),
		alignof(FViewTargetTransitionParams),
		Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.InnerSingleton, Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execSwapPendingViewTargetWhenUsingClientSideCameraUpdates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapPendingViewTargetWhenUsingClientSideCameraUpdates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execSetGameCameraCutThisFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameCameraCutThisFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execSetManualCameraFade)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFadeAmount);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bInFadeAudio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManualCameraFade(Z_Param_InFadeAmount,Z_Param_Color,Z_Param_bInFadeAudio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopCameraFade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCameraFade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStartCameraFade)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FromAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ToAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bShouldFadeAudio);
		P_GET_UBOOL(Z_Param_bHoldWhenFinished);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCameraFade(Z_Param_FromAlpha,Z_Param_ToAlpha,Z_Param_Duration,Z_Param_Color,Z_Param_bShouldFadeAudio,Z_Param_bHoldWhenFinished);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopAllCameraShakesFromSource)
	{
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakesFromSource(Z_Param_SourceComponent,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopAllInstancesOfCameraShakeFromSource)
	{
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllInstancesOfCameraShakeFromSource(Z_Param_Shake,Z_Param_SourceComponent,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopAllCameraShakes)
	{
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakes(Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopAllInstancesOfCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllInstancesOfCameraShake(Z_Param_Shake,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStopCameraShake)
	{
		P_GET_OBJECT(UCameraShakeBase,Z_Param_ShakeInstance);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCameraShake(Z_Param_ShakeInstance,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStartCameraShakeFromSource)
	{
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakeBase**)Z_Param__Result=P_THIS->StartCameraShakeFromSource(Z_Param_ShakeClass,Z_Param_SourceComponent,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execStartCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakeBase**)Z_Param__Result=P_THIS->StartCameraShake(Z_Param_ShakeClass,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execRemoveCameraLensEffect)
	{
		P_GET_OBJECT(AEmitterCameraLensEffectBase,Z_Param_Emitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCameraLensEffect(Z_Param_Emitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execAddCameraLensEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEmitterCameraLensEffectBase**)Z_Param__Result=P_THIS->AddCameraLensEffect(Z_Param_LensEffectEmitterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execClearCameraLensEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCameraLensEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execRemoveGenericCameraLensEffect)
	{
		P_GET_TINTERFACE(ICameraLensEffectInterface,Z_Param_Emitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGenericCameraLensEffect(Z_Param_Emitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execAddGenericCameraLensEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ICameraLensEffectInterface>*)Z_Param__Result=P_THIS->AddGenericCameraLensEffect(Z_Param_LensEffectEmitterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execGetCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execGetCameraRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCameraRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execGetFOVAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFOVAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execRemoveCameraModifier)
	{
		P_GET_OBJECT(UCameraModifier,Z_Param_ModifierToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCameraModifier(Z_Param_ModifierToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execFindCameraModifierByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ModifierClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraModifier**)Z_Param__Result=P_THIS->FindCameraModifierByClass(Z_Param_ModifierClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execAddNewCameraModifier)
	{
		P_GET_OBJECT(UClass,Z_Param_ModifierClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraModifier**)Z_Param__Result=P_THIS->AddNewCameraModifier(Z_Param_ModifierClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execGetOwningPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execOnPhotographyMultiPartCaptureEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotographyMultiPartCaptureEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execOnPhotographyMultiPartCaptureStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotographyMultiPartCaptureStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execOnPhotographySessionEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotographySessionEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execOnPhotographySessionStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotographySessionStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCameraManager::execPhotographyCameraModify)
	{
		P_GET_STRUCT(FVector,Z_Param_NewCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_PreviousCameraLocation);
		P_GET_STRUCT(FVector,Z_Param_OriginalCameraLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultCameraLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhotographyCameraModify_Implementation(Z_Param_NewCameraLocation,Z_Param_PreviousCameraLocation,Z_Param_OriginalCameraLocation,Z_Param_Out_ResultCameraLocation);
		P_NATIVE_END;
	}
	struct PlayerCameraManager_eventBlueprintUpdateCamera_Parms
	{
		AActor* CameraTarget;
		FVector NewCameraLocation;
		FRotator NewCameraRotation;
		float NewCameraFOV;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCameraManager_eventBlueprintUpdateCamera_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PlayerCameraManager_eventPhotographyCameraModify_Parms
	{
		FVector NewCameraLocation;
		FVector PreviousCameraLocation;
		FVector OriginalCameraLocation;
		FVector ResultCameraLocation;
	};
	static FName NAME_APlayerCameraManager_BlueprintUpdateCamera = FName(TEXT("BlueprintUpdateCamera"));
	bool APlayerCameraManager::BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV)
	{
		PlayerCameraManager_eventBlueprintUpdateCamera_Parms Parms;
		Parms.CameraTarget=CameraTarget;
		Parms.NewCameraLocation=NewCameraLocation;
		Parms.NewCameraRotation=NewCameraRotation;
		Parms.NewCameraFOV=NewCameraFOV;
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_BlueprintUpdateCamera),&Parms);
		NewCameraLocation=Parms.NewCameraLocation;
		NewCameraRotation=Parms.NewCameraRotation;
		NewCameraFOV=Parms.NewCameraFOV;
		return !!Parms.ReturnValue;
	}
	static FName NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd = FName(TEXT("OnPhotographyMultiPartCaptureEnd"));
	void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureStart = FName(TEXT("OnPhotographyMultiPartCaptureStart"));
	void APlayerCameraManager::OnPhotographyMultiPartCaptureStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureStart),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographySessionEnd = FName(TEXT("OnPhotographySessionEnd"));
	void APlayerCameraManager::OnPhotographySessionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographySessionEnd),NULL);
	}
	static FName NAME_APlayerCameraManager_OnPhotographySessionStart = FName(TEXT("OnPhotographySessionStart"));
	void APlayerCameraManager::OnPhotographySessionStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_OnPhotographySessionStart),NULL);
	}
	static FName NAME_APlayerCameraManager_PhotographyCameraModify = FName(TEXT("PhotographyCameraModify"));
	void APlayerCameraManager::PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation)
	{
		PlayerCameraManager_eventPhotographyCameraModify_Parms Parms;
		Parms.NewCameraLocation=NewCameraLocation;
		Parms.PreviousCameraLocation=PreviousCameraLocation;
		Parms.OriginalCameraLocation=OriginalCameraLocation;
		Parms.ResultCameraLocation=ResultCameraLocation;
		ProcessEvent(FindFunctionChecked(NAME_APlayerCameraManager_PhotographyCameraModify),&Parms);
		ResultCameraLocation=Parms.ResultCameraLocation;
	}
	void APlayerCameraManager::StaticRegisterNativesAPlayerCameraManager()
	{
		UClass* Class = APlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraLensEffect", &APlayerCameraManager::execAddCameraLensEffect },
			{ "AddGenericCameraLensEffect", &APlayerCameraManager::execAddGenericCameraLensEffect },
			{ "AddNewCameraModifier", &APlayerCameraManager::execAddNewCameraModifier },
			{ "ClearCameraLensEffects", &APlayerCameraManager::execClearCameraLensEffects },
			{ "FindCameraModifierByClass", &APlayerCameraManager::execFindCameraModifierByClass },
			{ "GetCameraLocation", &APlayerCameraManager::execGetCameraLocation },
			{ "GetCameraRotation", &APlayerCameraManager::execGetCameraRotation },
			{ "GetFOVAngle", &APlayerCameraManager::execGetFOVAngle },
			{ "GetOwningPlayerController", &APlayerCameraManager::execGetOwningPlayerController },
			{ "OnPhotographyMultiPartCaptureEnd", &APlayerCameraManager::execOnPhotographyMultiPartCaptureEnd },
			{ "OnPhotographyMultiPartCaptureStart", &APlayerCameraManager::execOnPhotographyMultiPartCaptureStart },
			{ "OnPhotographySessionEnd", &APlayerCameraManager::execOnPhotographySessionEnd },
			{ "OnPhotographySessionStart", &APlayerCameraManager::execOnPhotographySessionStart },
			{ "PhotographyCameraModify", &APlayerCameraManager::execPhotographyCameraModify },
			{ "RemoveCameraLensEffect", &APlayerCameraManager::execRemoveCameraLensEffect },
			{ "RemoveCameraModifier", &APlayerCameraManager::execRemoveCameraModifier },
			{ "RemoveGenericCameraLensEffect", &APlayerCameraManager::execRemoveGenericCameraLensEffect },
			{ "SetGameCameraCutThisFrame", &APlayerCameraManager::execSetGameCameraCutThisFrame },
			{ "SetManualCameraFade", &APlayerCameraManager::execSetManualCameraFade },
			{ "StartCameraFade", &APlayerCameraManager::execStartCameraFade },
			{ "StartCameraShake", &APlayerCameraManager::execStartCameraShake },
			{ "StartCameraShakeFromSource", &APlayerCameraManager::execStartCameraShakeFromSource },
			{ "StopAllCameraShakes", &APlayerCameraManager::execStopAllCameraShakes },
			{ "StopAllCameraShakesFromSource", &APlayerCameraManager::execStopAllCameraShakesFromSource },
			{ "StopAllInstancesOfCameraShake", &APlayerCameraManager::execStopAllInstancesOfCameraShake },
			{ "StopAllInstancesOfCameraShakeFromSource", &APlayerCameraManager::execStopAllInstancesOfCameraShakeFromSource },
			{ "StopCameraFade", &APlayerCameraManager::execStopCameraFade },
			{ "StopCameraShake", &APlayerCameraManager::execStopCameraShake },
			{ "SwapPendingViewTargetWhenUsingClientSideCameraUpdates", &APlayerCameraManager::execSwapPendingViewTargetWhenUsingClientSideCameraUpdates },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics
	{
		struct PlayerCameraManager_eventAddCameraLensEffect_Parms
		{
			TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass;
			AEmitterCameraLensEffectBase* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::NewProp_LensEffectEmitterClass = { "LensEffectEmitterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddCameraLensEffect_Parms, ReturnValue), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::NewProp_LensEffectEmitterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "APlayerCameraManager::AddGenericCameraLensEffect is favored now, and this function forwards to that one." },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "AddCameraLensEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::PlayerCameraManager_eventAddCameraLensEffect_Parms), Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics
	{
		struct PlayerCameraManager_eventAddGenericCameraLensEffect_Parms
		{
			TSubclassOf<AActor>  LensEffectEmitterClass;
			TScriptInterface<ICameraLensEffectInterface> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensEffectEmitterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass_MetaData[] = {
		{ "MustImplement", "CameraLensEffectInterface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass = { "LensEffectEmitterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddGenericCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddGenericCameraLensEffect_Parms, ReturnValue), Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** \n\x09 * Creates a camera lens effect of the given class on this camera. \n\x09 * @param LensEffectEmitterClass - Class of lens effect emitter to create.\n\x09 * @return Returns the new emitter actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Creates a camera lens effect of the given class on this camera.\n@param LensEffectEmitterClass - Class of lens effect emitter to create.\n@return Returns the new emitter actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "AddGenericCameraLensEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::PlayerCameraManager_eventAddGenericCameraLensEffect_Parms), Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics
	{
		struct PlayerCameraManager_eventAddNewCameraModifier_Parms
		{
			TSubclassOf<UCameraModifier>  ModifierClass;
			UCameraModifier* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddNewCameraModifier_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventAddNewCameraModifier_Parms, ReturnValue), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::NewProp_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** \n\x09 * Creates and initializes a new camera modifier of the specified class. \n\x09 * @param ModifierClass - The class of camera modifier to create.\n\x09 * @return Returns the newly created camera modifier.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Creates and initializes a new camera modifier of the specified class.\n@param ModifierClass - The class of camera modifier to create.\n@return Returns the newly created camera modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "AddNewCameraModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::PlayerCameraManager_eventAddNewCameraModifier_Parms), Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCameraRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCameraFOV;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_CameraTarget = { "CameraTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, CameraTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraLocation = { "NewCameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraRotation = { "NewCameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraFOV = { "NewCameraFOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventBlueprintUpdateCamera_Parms, NewCameraFOV), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventBlueprintUpdateCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventBlueprintUpdateCamera_Parms), &Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_CameraTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_NewCameraFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.\n\x09 * If this function returns true, we will use the given returned values and skip further calculations to determine\n\x09 * final camera POV. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Blueprint hook to allow blueprints to override existing camera behavior or implement custom cameras.\nIf this function returns true, we will use the given returned values and skip further calculations to determine\nfinal camera POV." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "BlueprintUpdateCamera", nullptr, nullptr, sizeof(PlayerCameraManager_eventBlueprintUpdateCamera_Parms), Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Removes all camera lens effects. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Removes all camera lens effects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "ClearCameraLensEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics
	{
		struct PlayerCameraManager_eventFindCameraModifierByClass_Parms
		{
			TSubclassOf<UCameraModifier>  ModifierClass;
			UCameraModifier* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventFindCameraModifierByClass_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventFindCameraModifierByClass_Parms, ReturnValue), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::NewProp_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** \n\x09 * Returns camera modifier for this camera of the given class, if it exists. \n\x09 * Exact class match only. If there are multiple modifiers of the same class, the first one is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Returns camera modifier for this camera of the given class, if it exists.\nExact class match only. If there are multiple modifiers of the same class, the first one is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "FindCameraModifierByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::PlayerCameraManager_eventFindCameraModifierByClass_Parms), Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics
	{
		struct PlayerCameraManager_eventGetCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Returns camera's current location. */" },
		{ "Keywords", "View Position" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Returns camera's current location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "GetCameraLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::PlayerCameraManager_eventGetCameraLocation_Parms), Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics
	{
		struct PlayerCameraManager_eventGetCameraRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetCameraRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Returns camera's current rotation. */" },
		{ "Keywords", "View Direction" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Returns camera's current rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "GetCameraRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::PlayerCameraManager_eventGetCameraRotation_Parms), Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics
	{
		struct PlayerCameraManager_eventGetFOVAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetFOVAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Returns the camera's current full FOV angle, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Returns the camera's current full FOV angle, in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "GetFOVAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::PlayerCameraManager_eventGetFOVAngle_Parms), Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics
	{
		struct PlayerCameraManager_eventGetOwningPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventGetOwningPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns the PlayerController that owns this camera. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Returns the PlayerController that owns this camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "GetOwningPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::PlayerCameraManager_eventGetOwningPlayerController_Parms), Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Photography" },
		{ "Comment", "/**\n\x09* Event triggered upon the end of a multi-part photograph capture, when manual\n\x09* free-roaming photographic camera control is about to be returned to the user.\n\x09* Here you may re-enable whatever was turned off within\n\x09* OnPhotographyMultiPartCaptureStart.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Event triggered upon the end of a multi-part photograph capture, when manual\nfree-roaming photographic camera control is about to be returned to the user.\nHere you may re-enable whatever was turned off within\nOnPhotographyMultiPartCaptureStart." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "OnPhotographyMultiPartCaptureEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Photography" },
		{ "Comment", "/**\n\x09* Event triggered upon the start of a multi-part photograph capture (i.e. a\n\x09* stereoscopic or 360-degree shot).  This is an ideal time to turn off\n\x09* rendering effects that tile badly (UI, subtitles, vignette, very aggressive\n\x09* bloom, etc; most of these are automatically disabled when\n\x09* r.Photography.AutoPostprocess is 1).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Event triggered upon the start of a multi-part photograph capture (i.e. a\nstereoscopic or 360-degree shot).  This is an ideal time to turn off\nrendering effects that tile badly (UI, subtitles, vignette, very aggressive\nbloom, etc; most of these are automatically disabled when\nr.Photography.AutoPostprocess is 1)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "OnPhotographyMultiPartCaptureStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Photography" },
		{ "Comment", "/**\n\x09* Event triggered upon leaving Photography mode (after unpausing, if\n\x09* r.Photography.AutoPause is 1).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Event triggered upon leaving Photography mode (after unpausing, if\nr.Photography.AutoPause is 1)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "OnPhotographySessionEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Photography" },
		{ "Comment", "/**\n\x09* Event triggered upon entering Photography mode (before pausing, if\n\x09* r.Photography.AutoPause is 1).\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Event triggered upon entering Photography mode (before pausing, if\nr.Photography.AutoPause is 1)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "OnPhotographySessionStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultCameraLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_NewCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_NewCameraLocation = { "NewCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, NewCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_NewCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_NewCameraLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_PreviousCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_PreviousCameraLocation = { "PreviousCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, PreviousCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_PreviousCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_PreviousCameraLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_OriginalCameraLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_OriginalCameraLocation = { "OriginalCameraLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, OriginalCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_OriginalCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_OriginalCameraLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_ResultCameraLocation = { "ResultCameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventPhotographyCameraModify_Parms, ResultCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_NewCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_PreviousCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_OriginalCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::NewProp_ResultCameraLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Photography" },
		{ "Comment", "/**\n\x09* Implementable blueprint hook to allow a PlayerCameraManager subclass to\n\x09* constrain or otherwise modify the camera during free-camera photography.\n\x09* For example, a blueprint may wish to limit the distance from the camera's\n\x09* original point, or forbid the camera from passing through walls.\n\x09* NewCameraLocation contains the proposed new camera location.\n\x09* PreviousCameraLocation contains the camera location in the previous frame.\n\x09* OriginalCameraLocation contains the camera location before the game was put\n\x09* into photography mode.\n\x09* Return ResultCameraLocation as modified according to your constraints.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Implementable blueprint hook to allow a PlayerCameraManager subclass to\nconstrain or otherwise modify the camera during free-camera photography.\nFor example, a blueprint may wish to limit the distance from the camera's\noriginal point, or forbid the camera from passing through walls.\nNewCameraLocation contains the proposed new camera location.\nPreviousCameraLocation contains the camera location in the previous frame.\nOriginalCameraLocation contains the camera location before the game was put\ninto photography mode.\nReturn ResultCameraLocation as modified according to your constraints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "PhotographyCameraModify", nullptr, nullptr, sizeof(PlayerCameraManager_eventPhotographyCameraModify_Parms), Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics
	{
		struct PlayerCameraManager_eventRemoveCameraLensEffect_Parms
		{
			AEmitterCameraLensEffectBase* Emitter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Emitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventRemoveCameraLensEffect_Parms, Emitter), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::NewProp_Emitter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "APlayerCameraManager::RemoveGenericCameraLensEffect is favored now, and this function forwards to that one." },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "RemoveCameraLensEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::PlayerCameraManager_eventRemoveCameraLensEffect_Parms), Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics
	{
		struct PlayerCameraManager_eventRemoveCameraModifier_Parms
		{
			UCameraModifier* ModifierToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifierToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ModifierToRemove = { "ModifierToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventRemoveCameraModifier_Parms, ModifierToRemove), Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventRemoveCameraModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventRemoveCameraModifier_Parms), &Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ModifierToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** \n\x09 * Removes the given camera modifier from this camera (if it's on the camera in the first place) and discards it. \n\x09 * @return True if successfully removed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Removes the given camera modifier from this camera (if it's on the camera in the first place) and discards it.\n@return True if successfully removed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "RemoveCameraModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::PlayerCameraManager_eventRemoveCameraModifier_Parms), Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics
	{
		struct PlayerCameraManager_eventRemoveGenericCameraLensEffect_Parms
		{
			TScriptInterface<ICameraLensEffectInterface> Emitter;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Emitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventRemoveGenericCameraLensEffect_Parms, Emitter), Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::NewProp_Emitter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** \n\x09 * Removes the given lens effect from the camera. \n\x09 * @param Emitter - the emitter actor to remove from the camera\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Removes the given lens effect from the camera.\n@param Emitter - the emitter actor to remove from the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "RemoveGenericCameraLensEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::PlayerCameraManager_eventRemoveGenericCameraLensEffect_Parms), Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Sets the bGameCameraCutThisFrame flag to true (indicating we did a camera cut this frame; useful for game code to call, e.g., when performing a teleport that should be seamless) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Sets the bGameCameraCutThisFrame flag to true (indicating we did a camera cut this frame; useful for game code to call, e.g., when performing a teleport that should be seamless)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "SetGameCameraCutThisFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics
	{
		struct PlayerCameraManager_eventSetManualCameraFade_Parms
		{
			float InFadeAmount;
			FLinearColor Color;
			bool bInFadeAudio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFadeAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bInFadeAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFadeAudio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_InFadeAmount = { "InFadeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventSetManualCameraFade_Parms, InFadeAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventSetManualCameraFade_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_bInFadeAudio_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventSetManualCameraFade_Parms*)Obj)->bInFadeAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_bInFadeAudio = { "bInFadeAudio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventSetManualCameraFade_Parms), &Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_bInFadeAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_InFadeAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::NewProp_bInFadeAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Fades" },
		{ "Comment", "/** \n\x09 * Turns on camera fading at the given opacity. Does not auto-animate, allowing user to animate themselves.\n\x09 * Call StopCameraFade to turn fading back off.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Turns on camera fading at the given opacity. Does not auto-animate, allowing user to animate themselves.\nCall StopCameraFade to turn fading back off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "SetManualCameraFade", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::PlayerCameraManager_eventSetManualCameraFade_Parms), Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics
	{
		struct PlayerCameraManager_eventStartCameraFade_Parms
		{
			float FromAlpha;
			float ToAlpha;
			float Duration;
			FLinearColor Color;
			bool bShouldFadeAudio;
			bool bHoldWhenFinished;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FromAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToAlpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bShouldFadeAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFadeAudio;
		static void NewProp_bHoldWhenFinished_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldWhenFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_FromAlpha = { "FromAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, FromAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_ToAlpha = { "ToAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, ToAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraFade_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bShouldFadeAudio_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStartCameraFade_Parms*)Obj)->bShouldFadeAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bShouldFadeAudio = { "bShouldFadeAudio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStartCameraFade_Parms), &Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bShouldFadeAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bHoldWhenFinished_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStartCameraFade_Parms*)Obj)->bHoldWhenFinished = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bHoldWhenFinished = { "bHoldWhenFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStartCameraFade_Parms), &Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bHoldWhenFinished_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_FromAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_ToAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bShouldFadeAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::NewProp_bHoldWhenFinished,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Fades" },
		{ "Comment", "/** \n\x09 * Does a camera fade to/from a solid color.  Animates automatically.\n\x09 * @param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.\n\x09 * @param ToAlpha - Alpha at which to finish the fade.\n\x09 * @param Duration - How long the fade should take, in seconds.\n\x09 * @param Color - Color to fade to/from.\n\x09 * @param bShouldFadeAudio - True to fade audio volume along with the alpha of the solid color.\n\x09 * @param bHoldWhenFinished - True for fade to hold at the ToAlpha until explicitly stopped (e.g. with StopCameraFade)\n\x09 */" },
		{ "CPP_Default_bHoldWhenFinished", "false" },
		{ "CPP_Default_bShouldFadeAudio", "false" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Does a camera fade to/from a solid color.  Animates automatically.\n@param FromAlpha - Alpha at which to begin the fade. Range [0..1], where 0 is fully transparent and 1 is fully opaque solid color.\n@param ToAlpha - Alpha at which to finish the fade.\n@param Duration - How long the fade should take, in seconds.\n@param Color - Color to fade to/from.\n@param bShouldFadeAudio - True to fade audio volume along with the alpha of the solid color.\n@param bHoldWhenFinished - True for fade to hold at the ToAlpha until explicitly stopped (e.g. with StopCameraFade)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StartCameraFade", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::PlayerCameraManager_eventStartCameraFade_Parms), Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StartCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StartCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics
	{
		struct PlayerCameraManager_eventStartCameraShake_Parms
		{
			TSubclassOf<UCameraShakeBase>  ShakeClass;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			UCameraShakeBase* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShake_Parms, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShake_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** \n\x09 * Plays a camera shake on this camera.\n\x09 * @param Shake - The class of camera shake to play.\n\x09 * @param Scale - Scalar defining how \"intense\" to play the shake. 1.0 is normal (as authored).\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims)\n\x09 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == CAPS_UserDefined.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Plays a camera shake on this camera.\n@param Shake - The class of camera shake to play.\n@param Scale - Scalar defining how \"intense\" to play the shake. 1.0 is normal (as authored).\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims)\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == CAPS_UserDefined." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StartCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::PlayerCameraManager_eventStartCameraShake_Parms), Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StartCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StartCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics
	{
		struct PlayerCameraManager_eventStartCameraShakeFromSource_Parms
		{
			TSubclassOf<UCameraShakeBase>  ShakeClass;
			UCameraShakeSourceComponent* SourceComponent;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			UCameraShakeBase* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStartCameraShakeFromSource_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** \n\x09 * Plays a camera shake on this camera.\n\x09 * @param Shake - The class of camera shake to play.\n\x09 * @param SourceComponent - The source from which the camera shake originates.\n\x09 * @param Scale - Applies an additional constant scale on top of the dynamic scale computed with the distance to the source\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims)\n\x09 * @param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == CAPS_UserDefined.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Plays a camera shake on this camera.\n@param Shake - The class of camera shake to play.\n@param SourceComponent - The source from which the camera shake originates.\n@param Scale - Applies an additional constant scale on top of the dynamic scale computed with the distance to the source\n@param PlaySpace - Which coordinate system to play the shake in (affects oscillations and camera anims)\n@param UserPlaySpaceRot - Coordinate system to play shake when PlaySpace == CAPS_UserDefined." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StartCameraShakeFromSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::PlayerCameraManager_eventStartCameraShakeFromSource_Parms), Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics
	{
		struct PlayerCameraManager_eventStopAllCameraShakes_Parms
		{
			bool bImmediately;
		};
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStopAllCameraShakes_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStopAllCameraShakes_Parms), &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** Stops all active camera shakes on this camera. */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Stops all active camera shakes on this camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopAllCameraShakes", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::PlayerCameraManager_eventStopAllCameraShakes_Parms), Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics
	{
		struct PlayerCameraManager_eventStopAllCameraShakesFromSource_Parms
		{
			UCameraShakeSourceComponent* SourceComponent;
			bool bImmediately;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllCameraShakesFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	void Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStopAllCameraShakesFromSource_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStopAllCameraShakesFromSource_Parms), &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** Stops playing all shakes originating from the given source. */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Stops playing all shakes originating from the given source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopAllCameraShakesFromSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::PlayerCameraManager_eventStopAllCameraShakesFromSource_Parms), Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics
	{
		struct PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms
		{
			TSubclassOf<UCameraShakeBase>  Shake;
			bool bImmediately;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms), &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_Shake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** Stops playing all shakes of the given class. */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Stops playing all shakes of the given class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopAllInstancesOfCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::PlayerCameraManager_eventStopAllInstancesOfCameraShake_Parms), Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics
	{
		struct PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms
		{
			TSubclassOf<UCameraShakeBase>  Shake;
			UCameraShakeSourceComponent* SourceComponent;
			bool bImmediately;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	void Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms), &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_Shake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** Stops playing all shakes of the given class originating from the given source. */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Stops playing all shakes of the given class originating from the given source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopAllInstancesOfCameraShakeFromSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::PlayerCameraManager_eventStopAllInstancesOfCameraShakeFromSource_Parms), Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Fades" },
		{ "Comment", "/** \n\x09 * Stops camera fading.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Stops camera fading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopCameraFade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics
	{
		struct PlayerCameraManager_eventStopCameraShake_Parms
		{
			UCameraShakeBase* ShakeInstance;
			bool bImmediately;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShakeInstance;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_ShakeInstance = { "ShakeInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerCameraManager_eventStopCameraShake_Parms, ShakeInstance), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerCameraManager_eventStopCameraShake_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerCameraManager_eventStopCameraShake_Parms), &Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_ShakeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/** Immediately stops the given shake instance and invalidates it. */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Immediately stops the given shake instance and invalidates it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "StopCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::PlayerCameraManager_eventStopCameraShake_Parms), Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_StopCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_StopCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ClientSide camera updates prevents DoUpdateCamera from swapping PendingViewTarget in when the blend is complete, just use a timer to swap\n" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "ClientSide camera updates prevents DoUpdateCamera from swapping PendingViewTarget in when the blend is complete, just use a timer to swap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraManager, nullptr, "SwapPendingViewTargetWhenUsingClientSideCameraUpdates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraManager);
	UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister()
	{
		return APlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PCOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultOrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrameCameraCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastFrameCameraCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCachePrivate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraCachePrivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrameCameraCachePrivate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastFrameCameraCachePrivate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifierList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifierList;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeCamDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FreeCamDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeCamOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FreeCamOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTargetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewTargetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioFadeChangeEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFadeChangeEvent;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CameraLensEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLensEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraLensEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameraShakeMod_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedCameraShakeMod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessBlendCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessBlendCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimCameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimCameraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOrthographic_MetaData[];
#endif
		static void NewProp_bIsOrthographic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOrthographic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bDefaultConstrainAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultConstrainAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientSimulatingViewTarget_MetaData[];
#endif
		static void NewProp_bClientSimulatingViewTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSimulatingViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClientSideCameraUpdates_MetaData[];
#endif
		static void NewProp_bUseClientSideCameraUpdates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClientSideCameraUpdates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGameCameraCutThisFrame_MetaData[];
#endif
		static void NewProp_bGameCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameCameraCutThisFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRollMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewRollMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRollMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewRollMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerUpdateCameraTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerUpdateCameraTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCameraManager_AddCameraLensEffect, "AddCameraLensEffect" }, // 4193461982
		{ &Z_Construct_UFunction_APlayerCameraManager_AddGenericCameraLensEffect, "AddGenericCameraLensEffect" }, // 3623774424
		{ &Z_Construct_UFunction_APlayerCameraManager_AddNewCameraModifier, "AddNewCameraModifier" }, // 2615932463
		{ &Z_Construct_UFunction_APlayerCameraManager_BlueprintUpdateCamera, "BlueprintUpdateCamera" }, // 4141963627
		{ &Z_Construct_UFunction_APlayerCameraManager_ClearCameraLensEffects, "ClearCameraLensEffects" }, // 2974694903
		{ &Z_Construct_UFunction_APlayerCameraManager_FindCameraModifierByClass, "FindCameraModifierByClass" }, // 3626860121
		{ &Z_Construct_UFunction_APlayerCameraManager_GetCameraLocation, "GetCameraLocation" }, // 2129087529
		{ &Z_Construct_UFunction_APlayerCameraManager_GetCameraRotation, "GetCameraRotation" }, // 4244601533
		{ &Z_Construct_UFunction_APlayerCameraManager_GetFOVAngle, "GetFOVAngle" }, // 3090910276
		{ &Z_Construct_UFunction_APlayerCameraManager_GetOwningPlayerController, "GetOwningPlayerController" }, // 2107179106
		{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd, "OnPhotographyMultiPartCaptureEnd" }, // 2785103948
		{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographyMultiPartCaptureStart, "OnPhotographyMultiPartCaptureStart" }, // 1838495425
		{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionEnd, "OnPhotographySessionEnd" }, // 3094958010
		{ &Z_Construct_UFunction_APlayerCameraManager_OnPhotographySessionStart, "OnPhotographySessionStart" }, // 707003067
		{ &Z_Construct_UFunction_APlayerCameraManager_PhotographyCameraModify, "PhotographyCameraModify" }, // 1812946066
		{ &Z_Construct_UFunction_APlayerCameraManager_RemoveCameraLensEffect, "RemoveCameraLensEffect" }, // 2771703207
		{ &Z_Construct_UFunction_APlayerCameraManager_RemoveCameraModifier, "RemoveCameraModifier" }, // 469446620
		{ &Z_Construct_UFunction_APlayerCameraManager_RemoveGenericCameraLensEffect, "RemoveGenericCameraLensEffect" }, // 2773656873
		{ &Z_Construct_UFunction_APlayerCameraManager_SetGameCameraCutThisFrame, "SetGameCameraCutThisFrame" }, // 770154187
		{ &Z_Construct_UFunction_APlayerCameraManager_SetManualCameraFade, "SetManualCameraFade" }, // 2527364735
		{ &Z_Construct_UFunction_APlayerCameraManager_StartCameraFade, "StartCameraFade" }, // 2980751569
		{ &Z_Construct_UFunction_APlayerCameraManager_StartCameraShake, "StartCameraShake" }, // 1651373359
		{ &Z_Construct_UFunction_APlayerCameraManager_StartCameraShakeFromSource, "StartCameraShakeFromSource" }, // 836524475
		{ &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakes, "StopAllCameraShakes" }, // 3698971023
		{ &Z_Construct_UFunction_APlayerCameraManager_StopAllCameraShakesFromSource, "StopAllCameraShakesFromSource" }, // 2675004028
		{ &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShake, "StopAllInstancesOfCameraShake" }, // 3459772090
		{ &Z_Construct_UFunction_APlayerCameraManager_StopAllInstancesOfCameraShakeFromSource, "StopAllInstancesOfCameraShakeFromSource" }, // 3943329876
		{ &Z_Construct_UFunction_APlayerCameraManager_StopCameraFade, "StopCameraFade" }, // 1337016197
		{ &Z_Construct_UFunction_APlayerCameraManager_StopCameraShake, "StopCameraShake" }, // 2148411465
		{ &Z_Construct_UFunction_APlayerCameraManager_SwapPendingViewTargetWhenUsingClientSideCameraUpdates, "SwapPendingViewTargetWhenUsingClientSideCameraUpdates" }, // 1742796158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A PlayerCameraManager is responsible for managing the camera for a particular\n * player. It defines the final view properties used by other systems (e.g. the renderer),\n * meaning you can think of it as your virtual eyeball in the world. It can compute the \n * final camera properties directly, or it can arbitrate/blend between other objects or \n * actors that influence the camera (e.g. blending from one CameraActor to another).\n * \n * The PlayerCameraManagers primary external responsibility is to reliably respond to\n * various Get*() functions, such as GetCameraViewPoint. Most everything else is\n * implementation detail and overrideable by user projects.\n * \n * By default, a PlayerCameraManager maintains a \"view target\", which is the primary actor\n * the camera is associated with. It can also apply various \"post\" effects to the final \n * view state, such as camera animations, shakes, post-process effects or special \n * effects such as dirt on the lens.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Camera/\n */" },
		{ "IncludePath", "Camera/PlayerCameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "A PlayerCameraManager is responsible for managing the camera for a particular\nplayer. It defines the final view properties used by other systems (e.g. the renderer),\nmeaning you can think of it as your virtual eyeball in the world. It can compute the\nfinal camera properties directly, or it can arbitrate/blend between other objects or\nactors that influence the camera (e.g. blending from one CameraActor to another).\n\nThe PlayerCameraManagers primary external responsibility is to reliably respond to\nvarious Get*() functions, such as GetCameraViewPoint. Most everything else is\nimplementation detail and overrideable by user projects.\n\nBy default, a PlayerCameraManager maintains a \"view target\", which is the primary actor\nthe camera is associated with. It can also apply various \"post\" effects to the final\nview state, such as camera animations, shakes, post-process effects or special\neffects such as dirt on the lens.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Camera/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PCOwner_MetaData[] = {
		{ "Comment", "/** PlayerController that owns this Camera actor */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "PlayerController that owns this Camera actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PCOwner = { "PCOwner", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, PCOwner), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PCOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PCOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_TransformComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Dummy component we can use to attach things to the camera. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Dummy component we can use to attach things to the camera." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_TransformComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** FOV to use by default. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "FOV to use by default." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultFOV), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultOrthoWidth_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** The default desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "The default desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultOrthoWidth = { "DefaultOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultOrthoWidth), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultOrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultOrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultAspectRatio_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Default aspect ratio. Most of the time the value from a camera component will be used instead. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Default aspect ratio. Most of the time the value from a camera component will be used instead." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultAspectRatio = { "DefaultAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultAspectRatio), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCache = { "CameraCache", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, CameraCache), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCache_MetaData)) }; // 3700459799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCache = { "LastFrameCameraCache", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, LastFrameCameraCache), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCache_MetaData)) }; // 3700459799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTarget_MetaData[] = {
		{ "Comment", "/** Current ViewTarget */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Current ViewTarget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewTarget), Z_Construct_UScriptStruct_FTViewTarget, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTarget_MetaData)) }; // 1440652820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PendingViewTarget_MetaData[] = {
		{ "Comment", "/** Pending view target for blending */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Pending view target for blending" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PendingViewTarget = { "PendingViewTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, PendingViewTarget), Z_Construct_UScriptStruct_FTViewTarget, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PendingViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PendingViewTarget_MetaData)) }; // 1440652820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCachePrivate_MetaData[] = {
		{ "Comment", "/** Cached camera properties. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Cached camera properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCachePrivate = { "CameraCachePrivate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, CameraCachePrivate), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCachePrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCachePrivate_MetaData)) }; // 3700459799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCachePrivate_MetaData[] = {
		{ "Comment", "/** Cached camera properties, one frame old. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Cached camera properties, one frame old." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCachePrivate = { "LastFrameCameraCachePrivate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, LastFrameCameraCachePrivate), Z_Construct_UScriptStruct_FCameraCacheEntry, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCachePrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCachePrivate_MetaData)) }; // 3700459799
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList_Inner = { "ModifierList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList_MetaData[] = {
		{ "Comment", "/** List of active camera modifier instances that have a chance to update the final camera POV */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "List of active camera modifier instances that have a chance to update the final camera POV" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList = { "ModifierList", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ModifierList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers_Inner = { "DefaultModifiers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** List of modifiers to create by default for this camera */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "List of modifiers to create by default for this camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers = { "DefaultModifiers", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, DefaultModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamDistance_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Distance to place free camera from view target (used in certain CameraStyles) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Distance to place free camera from view target (used in certain CameraStyles)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamDistance = { "FreeCamDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, FreeCamDistance), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamOffset_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Offset to Z free camera position (used in certain CameraStyles) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Offset to Z free camera position (used in certain CameraStyles)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamOffset = { "FreeCamOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, FreeCamOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTargetOffset_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Offset to view target (used in certain CameraStyles) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Offset to view target (used in certain CameraStyles)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTargetOffset = { "ViewTargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_OnAudioFadeChangeEvent_MetaData[] = {
		{ "Comment", "/** If bound, broadcast on fade start (with fade time) instead of manually altering audio device's primary volume directly */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "If bound, broadcast on fade start (with fade time) instead of manually altering audio device's primary volume directly" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_OnAudioFadeChangeEvent = { "OnAudioFadeChangeEvent", nullptr, (EPropertyFlags)0x0010000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, OnAudioFadeChangeEvent), Z_Construct_UDelegateFunction_Engine_OnAudioFadeChangeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_OnAudioFadeChangeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_OnAudioFadeChangeEvent_MetaData)) }; // 2619302087
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects_Inner = { "CameraLensEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects_MetaData[] = {
		{ "Comment", "/** CameraBlood emitter attached to this camera */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "CameraBlood emitter attached to this camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects = { "CameraLensEffects", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, CameraLensEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CachedCameraShakeMod_MetaData[] = {
		{ "Comment", "/** Cached ref to modifier for code-driven screen shakes */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Cached ref to modifier for code-driven screen shakes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CachedCameraShakeMod = { "CachedCameraShakeMod", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, CachedCameraShakeMod), Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CachedCameraShakeMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CachedCameraShakeMod_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache_Inner = { "PostProcessBlendCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache_MetaData[] = {
		{ "Comment", "/** Internal list of active post process effects. Parallel array to PostProcessBlendCacheWeights. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Internal list of active post process effects. Parallel array to PostProcessBlendCacheWeights." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache = { "PostProcessBlendCache", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, PostProcessBlendCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_AnimCameraActor_MetaData[] = {
		{ "Comment", "/** Internal. Receives the output of individual camera animations. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Internal. Receives the output of individual camera animations." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_AnimCameraActor = { "AnimCameraActor", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, AnimCameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_AnimCameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_AnimCameraActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** True when this camera should use an orthographic perspective instead of FOV */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "True when this camera should use an orthographic perspective instead of FOV" },
	};
#endif
	void Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic_SetBit(void* Obj)
	{
		((APlayerCameraManager*)Obj)->bIsOrthographic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic = { "bIsOrthographic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerCameraManager), &Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** True if black bars should be added if the destination view has a different aspect ratio (only used when a view target doesn't specify whether or not to constrain the aspect ratio; most of the time the value from a camera component is used instead) */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "True if black bars should be added if the destination view has a different aspect ratio (only used when a view target doesn't specify whether or not to constrain the aspect ratio; most of the time the value from a camera component is used instead)" },
	};
#endif
	void Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio_SetBit(void* Obj)
	{
		((APlayerCameraManager*)Obj)->bDefaultConstrainAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio = { "bDefaultConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerCameraManager), &Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** True if clients are handling setting their own viewtarget and the server should not replicate it. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "True if clients are handling setting their own viewtarget and the server should not replicate it." },
	};
#endif
	void Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget_SetBit(void* Obj)
	{
		((APlayerCameraManager*)Obj)->bClientSimulatingViewTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget = { "bClientSimulatingViewTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerCameraManager), &Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** True if server will use camera positions replicated from the client instead of calculating them locally. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "True if server will use camera positions replicated from the client instead of calculating them locally." },
	};
#endif
	void Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates_SetBit(void* Obj)
	{
		((APlayerCameraManager*)Obj)->bUseClientSideCameraUpdates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates = { "bUseClientSideCameraUpdates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerCameraManager), &Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** \n\x09 * True if we did a camera cut this frame. Automatically reset to false every frame.\n\x09 * This flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false every frame.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur)." },
	};
#endif
	void Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame_SetBit(void* Obj)
	{
		((APlayerCameraManager*)Obj)->bGameCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame = { "bGameCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerCameraManager), &Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Minimum view pitch, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Minimum view pitch, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewPitchMin), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Maximum view pitch, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Maximum view pitch, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewPitchMax), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMin_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Minimum view yaw, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Minimum view yaw, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMin = { "ViewYawMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewYawMin), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMax_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Maximum view yaw, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Maximum view yaw, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMax = { "ViewYawMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewYawMax), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMin_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Minimum view roll, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Minimum view roll, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMin = { "ViewRollMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewRollMin), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMax_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** Maximum view roll, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Maximum view roll, in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMax = { "ViewRollMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ViewRollMax), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ServerUpdateCameraTimeout_MetaData[] = {
		{ "Comment", "/**\n\x09 * Timeout in seconds used to determine when to force a call to ServerUpdateCamera\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/PlayerCameraManager.h" },
		{ "ToolTip", "Timeout in seconds used to determine when to force a call to ServerUpdateCamera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ServerUpdateCameraTimeout = { "ServerUpdateCameraTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerCameraManager, ServerUpdateCameraTimeout), METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ServerUpdateCameraTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ServerUpdateCameraTimeout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PCOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_TransformComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultOrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PendingViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraCachePrivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_LastFrameCameraCachePrivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ModifierList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_DefaultModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_FreeCamOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_OnAudioFadeChangeEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CameraLensEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_CachedCameraShakeMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_PostProcessBlendCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_AnimCameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bIsOrthographic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bDefaultConstrainAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bClientSimulatingViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bUseClientSideCameraUpdates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_bGameCameraCutThisFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewPitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewYawMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ViewRollMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManager_Statics::NewProp_ServerUpdateCameraTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraManager_Statics::ClassParams = {
		&APlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_APlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraManager.OuterSingleton, Z_Construct_UClass_APlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCameraManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APlayerCameraManager>()
	{
		return APlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::EnumInfo[] = {
		{ EViewTargetBlendFunction_StaticEnum, TEXT("EViewTargetBlendFunction"), &Z_Registration_Info_UEnum_EViewTargetBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3430533364U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ScriptStructInfo[] = {
		{ FCameraCacheEntry::StaticStruct, Z_Construct_UScriptStruct_FCameraCacheEntry_Statics::NewStructOps, TEXT("CameraCacheEntry"), &Z_Registration_Info_UScriptStruct_CameraCacheEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraCacheEntry), 3700459799U) },
		{ FTViewTarget::StaticStruct, Z_Construct_UScriptStruct_FTViewTarget_Statics::NewStructOps, TEXT("TViewTarget"), &Z_Registration_Info_UScriptStruct_TViewTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTViewTarget), 1440652820U) },
		{ FViewTargetTransitionParams::StaticStruct, Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics::NewStructOps, TEXT("ViewTargetTransitionParams"), &Z_Registration_Info_UScriptStruct_ViewTargetTransitionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewTargetTransitionParams), 3457093656U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraManager, APlayerCameraManager::StaticClass, TEXT("APlayerCameraManager"), &Z_Registration_Info_UClass_APlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraManager), 719347723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_3481312129(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
