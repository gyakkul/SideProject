// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraAnimationSequencePlayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "CineCameraSettings.h"
#include "Evaluation/MovieSceneEvaluationTemplateInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequencePlayer() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UCameraAnimationSequenceCameraStandIn::StaticRegisterNativesUCameraAnimationSequenceCameraStandIn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequenceCameraStandIn);
	UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister()
	{
		return UCameraAnimationSequenceCameraStandIn::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A dummy class that we give to a sequence in lieu of an actual camera actor.\n */" },
		{ "IncludePath", "CameraAnimationSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A dummy class that we give to a sequence in lieu of an actual camera actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Comment", "/** Camera component properties */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ToolTip", "Camera component properties" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	void Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((UCameraAnimationSequenceCameraStandIn*)Obj)->bConstrainAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraAnimationSequenceCameraStandIn), &Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_Filmback_MetaData[] = {
		{ "Comment", "/** Cine camera component properties */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ToolTip", "Cine camera component properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_Filmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_Filmback_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_LensSettings_MetaData)) }; // 3012950202
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FocusSettings_MetaData)) }; // 186601072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, CurrentFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, CurrentAperture), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocusDistance = { "CurrentFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequenceCameraStandIn, CurrentFocusDistance), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocusDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_bConstrainAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_Filmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_LensSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_FocusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::NewProp_CurrentFocusDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequenceCameraStandIn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::ClassParams = {
		&UCameraAnimationSequenceCameraStandIn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequenceCameraStandIn>()
	{
		return UCameraAnimationSequenceCameraStandIn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequenceCameraStandIn);
	UCameraAnimationSequenceCameraStandIn::~UCameraAnimationSequenceCameraStandIn() {}
	void UCameraAnimationSequencePlayer::StaticRegisterNativesUCameraAnimationSequencePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequencePlayer);
	UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister()
	{
		return UCameraAnimationSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundObjectOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A lightweight sequence player for playing camera animation sequences.\n */" },
		{ "IncludePath", "CameraAnimationSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A lightweight sequence player for playing camera animation sequences." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData[] = {
		{ "Comment", "/** Bound object overrides */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ToolTip", "Bound object overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_BoundObjectOverride = { "BoundObjectOverride", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequencePlayer, BoundObjectOverride), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_BoundObjectOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ToolTip", "The sequence to play back" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData[] = {
		{ "Comment", "/** The evaluation template instance */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequencePlayer.h" },
		{ "ToolTip", "The evaluation template instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraAnimationSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData)) }; // 4282407389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_BoundObjectOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::NewProp_RootTemplateInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::ClassParams = {
		&UCameraAnimationSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequencePlayer>()
	{
		return UCameraAnimationSequencePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequencePlayer);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn, UCameraAnimationSequenceCameraStandIn::StaticClass, TEXT("UCameraAnimationSequenceCameraStandIn"), &Z_Registration_Info_UClass_UCameraAnimationSequenceCameraStandIn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequenceCameraStandIn), 714150452U) },
		{ Z_Construct_UClass_UCameraAnimationSequencePlayer, UCameraAnimationSequencePlayer::StaticClass, TEXT("UCameraAnimationSequencePlayer"), &Z_Registration_Info_UClass_UCameraAnimationSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequencePlayer), 3738258316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h_320889896(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequencePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
