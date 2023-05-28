// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings;
class UScriptStruct* FCameraLookatTrackingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLookatTrackingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraLookatTrackingSettings>()
{
	return FCameraLookatTrackingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[];
#endif
		static void NewProp_bEnableLookAtTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLookAtTrackingPosition_MetaData[];
#endif
		static void NewProp_bDrawDebugLookAtTrackingPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLookAtTrackingPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTrackingInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtTrackingInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[];
#endif
		static void NewProp_bAllowRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control the camera's lookat feature */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Settings to control the camera's lookat feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLookatTrackingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** True to enable lookat tracking, false otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to enable lookat tracking, false otherwise." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bEnableLookAtTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking = { "bEnableLookAtTracking", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** True to draw a debug representation of the lookat location */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to draw a debug representation of the lookat location" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bDrawDebugLookAtTrackingPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition = { "bDrawDebugLookAtTrackingPosition", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking. */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Controls degree of smoothing. 0.f for no smoothing, higher numbers for faster/tighter tracking." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed = { "LookAtTrackingInterpSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** If set, camera will track this actor's location */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "If set, camera will track this actor's location" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Offset from actor position to look at. Relative to actor if tracking an actor, relative to world otherwise." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLookatTrackingSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** True to allow user-defined roll, false otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "True to allow user-defined roll, false otherwise." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_SetBit(void* Obj)
	{
		((FCameraLookatTrackingSettings*)Obj)->bAllowRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll = { "bAllowRoll", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraLookatTrackingSettings), &Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bEnableLookAtTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bDrawDebugLookAtTrackingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_LookAtTrackingInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_RelativeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewProp_bAllowRoll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraLookatTrackingSettings",
		sizeof(FCameraLookatTrackingSettings),
		alignof(FCameraLookatTrackingSettings),
		Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLookatTrackingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(ACineCameraActor::execGetCineCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineCameraComponent**)Z_Param__Result=P_THIS->GetCineCameraComponent();
		P_NATIVE_END;
	}
	void ACineCameraActor::StaticRegisterNativesACineCameraActor()
	{
		UClass* Class = ACineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineCameraComponent", &ACineCameraActor::execGetCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics
	{
		struct CineCameraActor_eventGetCineCameraComponent_Parms
		{
			UCineCameraComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraActor_eventGetCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Returns the CineCameraComponent of this CineCamera */" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ToolTip", "Returns the CineCameraComponent of this CineCamera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraActor, nullptr, "GetCineCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::CineCameraActor_eventGetCineCameraComponent_Parms), Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACineCameraActor);
	UClass* Z_Construct_UClass_ACineCameraActor_NoRegister()
	{
		return ACineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ACineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACineCameraActor_GetCineCameraComponent, "GetCineCameraComponent" }, // 121695995
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "Comment", "/** \n * A CineCameraActor is a CameraActor specialized to work like a cinematic camera.\n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "CineCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A CineCameraActor is a CameraActor specialized to work like a cinematic camera." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/CineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings = { "LookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraActor, LookatTrackingSettings), Z_Construct_UScriptStruct_FCameraLookatTrackingSettings, METADATA_PARAMS(Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings_MetaData)) }; // 394094740
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACineCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraActor_Statics::NewProp_LookatTrackingSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACineCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACineCameraActor_Statics::ClassParams = {
		&ACineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACineCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACineCameraActor()
	{
		if (!Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton, Z_Construct_UClass_ACineCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACineCameraActor.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UClass* StaticClass<ACineCameraActor>()
	{
		return ACineCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraActor);
	ACineCameraActor::~ACineCameraActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ScriptStructInfo[] = {
		{ FCameraLookatTrackingSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics::NewStructOps, TEXT("CameraLookatTrackingSettings"), &Z_Registration_Info_UScriptStruct_CameraLookatTrackingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraLookatTrackingSettings), 394094740U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACineCameraActor, ACineCameraActor::StaticClass, TEXT("ACineCameraActor"), &Z_Registration_Info_UClass_ACineCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACineCameraActor), 3907513993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_3883710332(TEXT("/Script/CinematicCamera"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
