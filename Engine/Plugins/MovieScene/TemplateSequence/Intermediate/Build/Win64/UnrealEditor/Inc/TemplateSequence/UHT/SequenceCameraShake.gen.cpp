// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceCameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceCameraShake() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakePattern();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakePattern_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void USequenceCameraShakePattern::StaticRegisterNativesUSequenceCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceCameraShakePattern);
	UClass* Z_Construct_UClass_USequenceCameraShakePattern_NoRegister()
	{
		return USequenceCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_USequenceCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSegmentDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSegmentDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomSegment_MetaData[];
#endif
		static void NewProp_bRandomSegment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraStandIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraStandIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera shake pattern that plays a sequencer animation.\n */" },
		{ "IncludePath", "SequenceCameraShake.h" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake pattern that plays a sequencer animation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Source camera animation sequence to play. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Source camera animation sequence to play." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Scalar defining how fast to play the anim. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Scalar defining how fast to play the anim." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, PlayRate), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar defining how \"intense\" to play the anim. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, Scale), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-in time. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Linear blend-in time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, BlendInTime), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-out time. */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Linear blend-out time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, BlendOutTime), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_RandomSegmentDuration_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When bRandomSegment is true, defines how long the sequence should play. */" },
		{ "EditCondition", "bRandomSegment" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "When bRandomSegment is true, defines how long the sequence should play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_RandomSegmentDuration = { "RandomSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, RandomSegmentDuration), METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_RandomSegmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_RandomSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/**\n\x09 * When true, plays a random snippet of the sequence for RandomSegmentDuration seconds.\n\x09 *\n\x09 * @note The sequence we be forced to loop when bRandomSegment is enabled, in case the duration\n\x09 *       is longer than what's left to play from the random start time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "When true, plays a random snippet of the sequence for RandomSegmentDuration seconds.\n\n@note The sequence we be forced to loop when bRandomSegment is enabled, in case the duration\n      is longer than what's left to play from the random start time." },
	};
#endif
	void Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_SetBit(void* Obj)
	{
		((USequenceCameraShakePattern*)Obj)->bRandomSegment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment = { "bRandomSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceCameraShakePattern), &Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Player_MetaData[] = {
		{ "Comment", "/** The player we use to play the camera animation sequence */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "The player we use to play the camera animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, Player), Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_CameraStandIn_MetaData[] = {
		{ "Comment", "/** Standin for the camera actor and components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequenceCameraShake.h" },
		{ "ToolTip", "Standin for the camera actor and components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_CameraStandIn = { "CameraStandIn", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceCameraShakePattern, CameraStandIn), Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_CameraStandIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_CameraStandIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceCameraShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_RandomSegmentDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_bRandomSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceCameraShakePattern_Statics::NewProp_CameraStandIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShakePattern_Statics::ClassParams = {
		&USequenceCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton, Z_Construct_UClass_USequenceCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceCameraShakePattern.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShakePattern>()
	{
		return USequenceCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShakePattern);
	USequenceCameraShakePattern::~USequenceCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceCameraShakePattern, USequenceCameraShakePattern::StaticClass, TEXT("USequenceCameraShakePattern"), &Z_Registration_Info_UClass_USequenceCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceCameraShakePattern), 476334295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_4000988263(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
