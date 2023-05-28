// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlendSpaceAnalysis.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceAnalysis() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	PERSONA_API UClass* Z_Construct_UClass_UCachedAnalysisProperties();
	PERSONA_API UClass* Z_Construct_UClass_UCachedAnalysisProperties_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UEulerAnalysisProperties();
	PERSONA_API UClass* Z_Construct_UClass_UEulerAnalysisProperties_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_ULinearAnalysisProperties();
	PERSONA_API UClass* Z_Construct_UClass_ULinearAnalysisProperties_NoRegister();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisEulerAxis();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisLinearAxis();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisSpace();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnalysisSpace;
	static UEnum* EAnalysisSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnalysisSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Persona_EAnalysisSpace, (UObject*)Z_Construct_UPackage__Script_Persona(), TEXT("EAnalysisSpace"));
		}
		return Z_Registration_Info_UEnum_EAnalysisSpace.OuterSingleton;
	}
	template<> PERSONA_API UEnum* StaticEnum<EAnalysisSpace>()
	{
		return EAnalysisSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Persona_EAnalysisSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enumerators[] = {
		{ "EAnalysisSpace::World", (int64)EAnalysisSpace::World },
		{ "EAnalysisSpace::Fixed", (int64)EAnalysisSpace::Fixed },
		{ "EAnalysisSpace::Changing", (int64)EAnalysisSpace::Changing },
		{ "EAnalysisSpace::Moving", (int64)EAnalysisSpace::Moving },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enum_MetaDataParams[] = {
		{ "Changing.Name", "EAnalysisSpace::Changing" },
		{ "Changing.ToolTip", "Analysis is done in the space of the specified bone or socket based, but velocities are calculated as if this space is not moving" },
		{ "Fixed.Name", "EAnalysisSpace::Fixed" },
		{ "Fixed.ToolTip", "Analysis is done in the space of the specified bone or socket based on the first frame of the animation used" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "Moving.Name", "EAnalysisSpace::Moving" },
		{ "Moving.ToolTip", "Analysis is done in the space of the specified bone or socket" },
		{ "World.Name", "EAnalysisSpace::World" },
		{ "World.ToolTip", "Analysis is done in world space (relative to the root of the character)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Persona,
		nullptr,
		"EAnalysisSpace",
		"EAnalysisSpace",
		Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Persona_EAnalysisSpace()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnalysisSpace.InnerSingleton, Z_Construct_UEnum_Persona_EAnalysisSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnalysisSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnalysisLinearAxis;
	static UEnum* EAnalysisLinearAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisLinearAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnalysisLinearAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Persona_EAnalysisLinearAxis, (UObject*)Z_Construct_UPackage__Script_Persona(), TEXT("EAnalysisLinearAxis"));
		}
		return Z_Registration_Info_UEnum_EAnalysisLinearAxis.OuterSingleton;
	}
	template<> PERSONA_API UEnum* StaticEnum<EAnalysisLinearAxis>()
	{
		return EAnalysisLinearAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enumerators[] = {
		{ "EAnalysisLinearAxis::PlusX", (int64)EAnalysisLinearAxis::PlusX },
		{ "EAnalysisLinearAxis::PlusY", (int64)EAnalysisLinearAxis::PlusY },
		{ "EAnalysisLinearAxis::PlusZ", (int64)EAnalysisLinearAxis::PlusZ },
		{ "EAnalysisLinearAxis::MinusX", (int64)EAnalysisLinearAxis::MinusX },
		{ "EAnalysisLinearAxis::MinusY", (int64)EAnalysisLinearAxis::MinusY },
		{ "EAnalysisLinearAxis::MinusZ", (int64)EAnalysisLinearAxis::MinusZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enum_MetaDataParams[] = {
		{ "MinusX.DisplayName", "-X" },
		{ "MinusX.Name", "EAnalysisLinearAxis::MinusX" },
		{ "MinusX.ToolTip", "The axis points in the negative X direction" },
		{ "MinusY.DisplayName", "-Y" },
		{ "MinusY.Name", "EAnalysisLinearAxis::MinusY" },
		{ "MinusY.ToolTip", "The axis points in the negative Y direction" },
		{ "MinusZ.DisplayName", "-Z" },
		{ "MinusZ.Name", "EAnalysisLinearAxis::MinusZ" },
		{ "MinusZ.ToolTip", "The axis points in the negative Z direction" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "PlusX.DisplayName", "+X" },
		{ "PlusX.Name", "EAnalysisLinearAxis::PlusX" },
		{ "PlusX.ToolTip", "The axis points in the positive X direction" },
		{ "PlusY.DisplayName", "+Y" },
		{ "PlusY.Name", "EAnalysisLinearAxis::PlusY" },
		{ "PlusY.ToolTip", "The axis points in the positive Y direction" },
		{ "PlusZ.DisplayName", "+Z" },
		{ "PlusZ.Name", "EAnalysisLinearAxis::PlusZ" },
		{ "PlusZ.ToolTip", "The axis points in the positive Z direction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Persona,
		nullptr,
		"EAnalysisLinearAxis",
		"EAnalysisLinearAxis",
		Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Persona_EAnalysisLinearAxis()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisLinearAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnalysisLinearAxis.InnerSingleton, Z_Construct_UEnum_Persona_EAnalysisLinearAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnalysisLinearAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnalysisEulerAxis;
	static UEnum* EAnalysisEulerAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisEulerAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnalysisEulerAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Persona_EAnalysisEulerAxis, (UObject*)Z_Construct_UPackage__Script_Persona(), TEXT("EAnalysisEulerAxis"));
		}
		return Z_Registration_Info_UEnum_EAnalysisEulerAxis.OuterSingleton;
	}
	template<> PERSONA_API UEnum* StaticEnum<EAnalysisEulerAxis>()
	{
		return EAnalysisEulerAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enumerators[] = {
		{ "EAnalysisEulerAxis::Roll", (int64)EAnalysisEulerAxis::Roll },
		{ "EAnalysisEulerAxis::Pitch", (int64)EAnalysisEulerAxis::Pitch },
		{ "EAnalysisEulerAxis::Yaw", (int64)EAnalysisEulerAxis::Yaw },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "Pitch.Name", "EAnalysisEulerAxis::Pitch" },
		{ "Roll.Name", "EAnalysisEulerAxis::Roll" },
		{ "Yaw.Name", "EAnalysisEulerAxis::Yaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Persona,
		nullptr,
		"EAnalysisEulerAxis",
		"EAnalysisEulerAxis",
		Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Persona_EAnalysisEulerAxis()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisEulerAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnalysisEulerAxis.InnerSingleton, Z_Construct_UEnum_Persona_EAnalysisEulerAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnalysisEulerAxis.InnerSingleton;
	}
	void UCachedAnalysisProperties::StaticRegisterNativesUCachedAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCachedAnalysisProperties);
	UClass* Z_Construct_UClass_UCachedAnalysisProperties_NoRegister()
	{
		return UCachedAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCachedAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCachedAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCachedAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This will be used to preserve values as far as possible when switching between analysis functions, so it contains all\n * the parameters used by the engine functions. User defined can inherit from this and add their own - then the\n * user-defined MakeCache function should replace any base class cache that is passed in with their own.\n*/" },
		{ "IncludePath", "BlendSpaceAnalysis.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "This will be used to preserve values as far as possible when switching between analysis functions, so it contains all\nthe parameters used by the engine functions. User defined can inherit from this and add their own - then the\nuser-defined MakeCache function should replace any base class cache that is passed in with their own." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCachedAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCachedAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCachedAnalysisProperties_Statics::ClassParams = {
		&UCachedAnalysisProperties::StaticClass,
		nullptr,
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
		METADATA_PARAMS(Z_Construct_UClass_UCachedAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCachedAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCachedAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_UCachedAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCachedAnalysisProperties.OuterSingleton, Z_Construct_UClass_UCachedAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCachedAnalysisProperties.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UCachedAnalysisProperties>()
	{
		return UCachedAnalysisProperties::StaticClass();
	}
	UCachedAnalysisProperties::UCachedAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCachedAnalysisProperties);
	UCachedAnalysisProperties::~UCachedAnalysisProperties() {}
	void ULinearAnalysisProperties::StaticRegisterNativesULinearAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULinearAnalysisProperties);
	UClass* Z_Construct_UClass_ULinearAnalysisProperties_NoRegister()
	{
		return ULinearAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULinearAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneSocket;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBoneSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTimeFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTimeFraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinearAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalysisProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlendSpaceAnalysis.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Axis for the analysis function */" },
		{ "DisplayName", "Axis" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Axis for the analysis function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis = { "FunctionAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, FunctionAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData)) }; // 3364905420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_BoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** The bone or socket used for analysis */" },
		{ "DisplayName", "Bone/Socket" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "The bone or socket used for analysis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_BoneSocket = { "BoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, BoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_BoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_BoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/**\n\x09* The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\n\x09* of the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\n\x09* analysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\n\x09* as well as positions/rotations will be relative to this moving frame.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\nof the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\nanalysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\nas well as positions/rotations will be relative to this moving frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, Space), Z_Construct_UEnum_Persona_EAnalysisSpace, METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space_MetaData)) }; // 4185973906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Bone or socket that defines the analysis space (when it isn't World) */" },
		{ "DisplayName", "Analysis Space Bone/Socket" },
		{ "EditCondition", "Space != EAnalysisSpace::World" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Bone or socket that defines the analysis space (when it isn't World)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_SpaceBoneSocket = { "SpaceBoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, SpaceBoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData)) }; // 2128614898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis starts */" },
		{ "DisplayName", "Start time fraction" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_StartTimeFraction = { "StartTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, StartTimeFraction), METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis ends */" },
		{ "DisplayName", "End time fraction" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis ends" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_EndTimeFraction = { "EndTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearAnalysisProperties, EndTimeFraction), METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_FunctionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_BoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_SpaceBoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_StartTimeFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearAnalysisProperties_Statics::NewProp_EndTimeFraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinearAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinearAnalysisProperties_Statics::ClassParams = {
		&ULinearAnalysisProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULinearAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULinearAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinearAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_ULinearAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinearAnalysisProperties.OuterSingleton, Z_Construct_UClass_ULinearAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULinearAnalysisProperties.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<ULinearAnalysisProperties>()
	{
		return ULinearAnalysisProperties::StaticClass();
	}
	ULinearAnalysisProperties::ULinearAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearAnalysisProperties);
	ULinearAnalysisProperties::~ULinearAnalysisProperties() {}
	void UEulerAnalysisProperties::StaticRegisterNativesUEulerAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEulerAnalysisProperties);
	UClass* Z_Construct_UClass_UEulerAnalysisProperties_NoRegister()
	{
		return UEulerAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEulerAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneSocket;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFacingAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFacingAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneFacingAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneRightAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRightAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneRightAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBoneSocket;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterFacingAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterFacingAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterFacingAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterUpAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterUpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterUpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTimeFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTimeFraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEulerAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalysisProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlendSpaceAnalysis.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Axis for the analysis function */" },
		{ "DisplayName", "Axis" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Axis for the analysis function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis = { "FunctionAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, FunctionAxis), Z_Construct_UEnum_Persona_EAnalysisEulerAxis, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData)) }; // 3912410428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** The bone or socket used for analysis */" },
		{ "DisplayName", "Bone/Socket" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "The bone or socket used for analysis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneSocket = { "BoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, BoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Used for some analysis functions - specifies the bone/socket axis that points in the facing/forwards direction */" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Used for some analysis functions - specifies the bone/socket axis that points in the facing/forwards direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis = { "BoneFacingAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, BoneFacingAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Used for some analysis functions - specifies the bone/socket axis that points to the \"right\" */" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Used for some analysis functions - specifies the bone/socket axis that points to the \"right\"" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis = { "BoneRightAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, BoneRightAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/**\n\x09* The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\n\x09* of the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\n\x09* analysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\n\x09* as well as positions/rotations will be relative to this moving frame.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\nof the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\nanalysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\nas well as positions/rotations will be relative to this moving frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, Space), Z_Construct_UEnum_Persona_EAnalysisSpace, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space_MetaData)) }; // 4185973906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Bone or socket that defines the analysis space (when it isn't World) */" },
		{ "DisplayName", "Analysis Space Bone/Socket" },
		{ "EditCondition", "Space != EAnalysisSpace::World" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Bone or socket that defines the analysis space (when it isn't World)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_SpaceBoneSocket = { "SpaceBoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, SpaceBoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's facing direction */" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's facing direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis = { "CharacterFacingAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, CharacterFacingAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's up direction */" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's up direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis = { "CharacterUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, CharacterUpAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData)) }; // 3364905420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis starts */" },
		{ "DisplayName", "Start time fraction" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_StartTimeFraction = { "StartTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, StartTimeFraction), METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis ends */" },
		{ "DisplayName", "End time fraction" },
		{ "ModuleRelativePath", "Public/BlendSpaceAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis ends" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_EndTimeFraction = { "EndTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEulerAnalysisProperties, EndTimeFraction), METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEulerAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_FunctionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneFacingAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_BoneRightAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_SpaceBoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterFacingAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_CharacterUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_StartTimeFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEulerAnalysisProperties_Statics::NewProp_EndTimeFraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEulerAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEulerAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEulerAnalysisProperties_Statics::ClassParams = {
		&UEulerAnalysisProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEulerAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEulerAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEulerAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEulerAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_UEulerAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEulerAnalysisProperties.OuterSingleton, Z_Construct_UClass_UEulerAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEulerAnalysisProperties.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UEulerAnalysisProperties>()
	{
		return UEulerAnalysisProperties::StaticClass();
	}
	UEulerAnalysisProperties::UEulerAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEulerAnalysisProperties);
	UEulerAnalysisProperties::~UEulerAnalysisProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::EnumInfo[] = {
		{ EAnalysisSpace_StaticEnum, TEXT("EAnalysisSpace"), &Z_Registration_Info_UEnum_EAnalysisSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4185973906U) },
		{ EAnalysisLinearAxis_StaticEnum, TEXT("EAnalysisLinearAxis"), &Z_Registration_Info_UEnum_EAnalysisLinearAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3364905420U) },
		{ EAnalysisEulerAxis_StaticEnum, TEXT("EAnalysisEulerAxis"), &Z_Registration_Info_UEnum_EAnalysisEulerAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3912410428U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCachedAnalysisProperties, UCachedAnalysisProperties::StaticClass, TEXT("UCachedAnalysisProperties"), &Z_Registration_Info_UClass_UCachedAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCachedAnalysisProperties), 752423222U) },
		{ Z_Construct_UClass_ULinearAnalysisProperties, ULinearAnalysisProperties::StaticClass, TEXT("ULinearAnalysisProperties"), &Z_Registration_Info_UClass_ULinearAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinearAnalysisProperties), 1926273330U) },
		{ Z_Construct_UClass_UEulerAnalysisProperties, UEulerAnalysisProperties::StaticClass, TEXT("UEulerAnalysisProperties"), &Z_Registration_Info_UClass_UEulerAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEulerAnalysisProperties), 3256283811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_194676092(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_BlendSpaceAnalysis_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
