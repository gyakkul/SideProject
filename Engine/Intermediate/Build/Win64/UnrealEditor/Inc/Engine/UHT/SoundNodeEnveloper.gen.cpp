// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeEnveloper.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeEnveloper);
	UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister()
	{
		return USoundNodeEnveloper::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeEnveloper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationAfterLoop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationAfterLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[];
#endif
		static void NewProp_bLoopIndefinitely_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeInterpCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VolumeInterpCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchInterpCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PitchInterpCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeEnveloper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Allows manipulation of volume and pitch over a set time period\n */" },
		{ "DisplayName", "Enveloper" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeEnveloper.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "Allows manipulation of volume and pitch over a set time period" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds where the envelope's loop begins.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop begins." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart = { "LoopStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopStart), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds where the envelope's loop ends.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop ends." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd = { "LoopEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopEnd), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds it takes the evelope to fade out after the last loop is completed.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds it takes the evelope to fade out after the last loop is completed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop = { "DurationAfterLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, DurationAfterLoop), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopCount), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value." },
	};
#endif
	void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit(void* Obj)
	{
		((USoundNodeEnveloper*)Obj)->bLoopIndefinitely = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely = { "bLoopIndefinitely", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// If enabled, the envelope will loop using the loop settings.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will loop using the loop settings." },
	};
#endif
	void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((USoundNodeEnveloper*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve = { "VolumeInterpCurve", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve = { "PitchInterpCurve", nullptr, (EPropertyFlags)0x0014000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "Comment", "// The distribution defining the volume envelope.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the volume envelope." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve = { "VolumeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "Comment", "// The distribution defining the pitch envelope.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the pitch envelope." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve = { "PitchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeEnveloper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeEnveloper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams = {
		&USoundNodeEnveloper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeEnveloper()
	{
		if (!Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton, Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeEnveloper>()
	{
		return USoundNodeEnveloper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeEnveloper);
	USoundNodeEnveloper::~USoundNodeEnveloper() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeEnveloper)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeEnveloper, USoundNodeEnveloper::StaticClass, TEXT("USoundNodeEnveloper"), &Z_Registration_Info_UClass_USoundNodeEnveloper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeEnveloper), 1070637601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_3182598203(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
