// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DistanceCurveModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistanceCurveModifier() {}
// Cross Module References
	ANIMATIONLOCOMOTIONLIBRARYEDITOR_API UClass* Z_Construct_UClass_UDistanceCurveModifier();
	ANIMATIONLOCOMOTIONLIBRARYEDITOR_API UClass* Z_Construct_UClass_UDistanceCurveModifier_NoRegister();
	ANIMATIONLOCOMOTIONLIBRARYEDITOR_API UEnum* Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_AnimationLocomotionLibraryEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistanceCurve_Axis;
	static UEnum* EDistanceCurve_Axis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDistanceCurve_Axis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDistanceCurve_Axis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis, (UObject*)Z_Construct_UPackage__Script_AnimationLocomotionLibraryEditor(), TEXT("EDistanceCurve_Axis"));
		}
		return Z_Registration_Info_UEnum_EDistanceCurve_Axis.OuterSingleton;
	}
	template<> ANIMATIONLOCOMOTIONLIBRARYEDITOR_API UEnum* StaticEnum<EDistanceCurve_Axis>()
	{
		return EDistanceCurve_Axis_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enumerators[] = {
		{ "EDistanceCurve_Axis::X", (int64)EDistanceCurve_Axis::X },
		{ "EDistanceCurve_Axis::Y", (int64)EDistanceCurve_Axis::Y },
		{ "EDistanceCurve_Axis::Z", (int64)EDistanceCurve_Axis::Z },
		{ "EDistanceCurve_Axis::XY", (int64)EDistanceCurve_Axis::XY },
		{ "EDistanceCurve_Axis::XZ", (int64)EDistanceCurve_Axis::XZ },
		{ "EDistanceCurve_Axis::YZ", (int64)EDistanceCurve_Axis::YZ },
		{ "EDistanceCurve_Axis::XYZ", (int64)EDistanceCurve_Axis::XYZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Axes to calculate the distance value from */" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Axes to calculate the distance value from" },
		{ "X.Name", "EDistanceCurve_Axis::X" },
		{ "XY.Name", "EDistanceCurve_Axis::XY" },
		{ "XYZ.Name", "EDistanceCurve_Axis::XYZ" },
		{ "XZ.Name", "EDistanceCurve_Axis::XZ" },
		{ "Y.Name", "EDistanceCurve_Axis::Y" },
		{ "YZ.Name", "EDistanceCurve_Axis::YZ" },
		{ "Z.Name", "EDistanceCurve_Axis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationLocomotionLibraryEditor,
		nullptr,
		"EDistanceCurve_Axis",
		"EDistanceCurve_Axis",
		Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis()
	{
		if (!Z_Registration_Info_UEnum_EDistanceCurve_Axis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistanceCurve_Axis.InnerSingleton, Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDistanceCurve_Axis.InnerSingleton;
	}
	void UDistanceCurveModifier::StaticRegisterNativesUDistanceCurveModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistanceCurveModifier);
	UClass* Z_Construct_UClass_UDistanceCurveModifier_NoRegister()
	{
		return UDistanceCurveModifier::StaticClass();
	}
	struct Z_Construct_UClass_UDistanceCurveModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSpeedThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtEnd_MetaData[];
#endif
		static void NewProp_bStopAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistanceCurveModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationLocomotionLibraryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Extracts traveling distance information from root motion and bakes it to a curve.\n * A negative value indicates distance remaining to a stop or pivot point.\n * A positive value indicates distance traveled from a start point or from the beginning of the clip.\n */" },
		{ "IncludePath", "DistanceCurveModifier.h" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Extracts traveling distance information from root motion and bakes it to a curve.\nA negative value indicates distance remaining to a stop or pivot point.\nA positive value indicates distance traveled from a start point or from the beginning of the clip." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Rate used to sample the animation. */" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Rate used to sample the animation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistanceCurveModifier, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name for the generated curve. */" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Name for the generated curve." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistanceCurveModifier, CurveName), METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_StopSpeedThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Root motion speed must be below this threshold to be considered stopped. */" },
		{ "EditCondition", "!bStopAtEnd" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Root motion speed must be below this threshold to be considered stopped." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_StopSpeedThreshold = { "StopSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistanceCurveModifier, StopSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_StopSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_StopSpeedThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Axes to calculate the distance value from. */" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Axes to calculate the distance value from." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistanceCurveModifier, Axis), Z_Construct_UEnum_AnimationLocomotionLibraryEditor_EDistanceCurve_Axis, METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis_MetaData)) }; // 1233113368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Root motion is considered to be stopped at the clip's end */" },
		{ "ModuleRelativePath", "Public/DistanceCurveModifier.h" },
		{ "ToolTip", "Root motion is considered to be stopped at the clip's end" },
	};
#endif
	void Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd_SetBit(void* Obj)
	{
		((UDistanceCurveModifier*)Obj)->bStopAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd = { "bStopAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDistanceCurveModifier), &Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistanceCurveModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_StopSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistanceCurveModifier_Statics::NewProp_bStopAtEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistanceCurveModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistanceCurveModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistanceCurveModifier_Statics::ClassParams = {
		&UDistanceCurveModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistanceCurveModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDistanceCurveModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistanceCurveModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistanceCurveModifier()
	{
		if (!Z_Registration_Info_UClass_UDistanceCurveModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistanceCurveModifier.OuterSingleton, Z_Construct_UClass_UDistanceCurveModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistanceCurveModifier.OuterSingleton;
	}
	template<> ANIMATIONLOCOMOTIONLIBRARYEDITOR_API UClass* StaticClass<UDistanceCurveModifier>()
	{
		return UDistanceCurveModifier::StaticClass();
	}
	UDistanceCurveModifier::UDistanceCurveModifier() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistanceCurveModifier);
	UDistanceCurveModifier::~UDistanceCurveModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::EnumInfo[] = {
		{ EDistanceCurve_Axis_StaticEnum, TEXT("EDistanceCurve_Axis"), &Z_Registration_Info_UEnum_EDistanceCurve_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1233113368U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistanceCurveModifier, UDistanceCurveModifier::StaticClass, TEXT("UDistanceCurveModifier"), &Z_Registration_Info_UClass_UDistanceCurveModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistanceCurveModifier), 2837440455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_352282629(TEXT("/Script/AnimationLocomotionLibraryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Editor_Public_DistanceCurveModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
