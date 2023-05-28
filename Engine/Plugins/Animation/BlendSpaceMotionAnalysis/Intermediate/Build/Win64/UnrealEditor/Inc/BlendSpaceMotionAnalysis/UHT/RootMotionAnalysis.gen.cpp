// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionAnalysis.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionAnalysis() {}
// Cross Module References
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_URootMotionAnalysisProperties();
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_URootMotionAnalysisProperties_NoRegister();
	BLENDSPACEMOTIONANALYSIS_API UEnum* Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis();
	ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisLinearAxis();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisSpace();
	UPackage* Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnalysisRootMotionAxis;
	static UEnum* EAnalysisRootMotionAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis, (UObject*)Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis(), TEXT("EAnalysisRootMotionAxis"));
		}
		return Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.OuterSingleton;
	}
	template<> BLENDSPACEMOTIONANALYSIS_API UEnum* StaticEnum<EAnalysisRootMotionAxis>()
	{
		return EAnalysisRootMotionAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enumerators[] = {
		{ "EAnalysisRootMotionAxis::Speed", (int64)EAnalysisRootMotionAxis::Speed },
		{ "EAnalysisRootMotionAxis::Direction", (int64)EAnalysisRootMotionAxis::Direction },
		{ "EAnalysisRootMotionAxis::ForwardSpeed", (int64)EAnalysisRootMotionAxis::ForwardSpeed },
		{ "EAnalysisRootMotionAxis::RightwardSpeed", (int64)EAnalysisRootMotionAxis::RightwardSpeed },
		{ "EAnalysisRootMotionAxis::UpwardSpeed", (int64)EAnalysisRootMotionAxis::UpwardSpeed },
		{ "EAnalysisRootMotionAxis::ForwardSlope", (int64)EAnalysisRootMotionAxis::ForwardSlope },
		{ "EAnalysisRootMotionAxis::RightwardSlope", (int64)EAnalysisRootMotionAxis::RightwardSlope },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//======================================================================================================================\n" },
		{ "Direction.Comment", "//======================================================================================================================\n" },
		{ "Direction.Name", "EAnalysisRootMotionAxis::Direction" },
		{ "ForwardSlope.Comment", "//======================================================================================================================\n" },
		{ "ForwardSlope.Name", "EAnalysisRootMotionAxis::ForwardSlope" },
		{ "ForwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "ForwardSpeed.Name", "EAnalysisRootMotionAxis::ForwardSpeed" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "RightwardSlope.Comment", "//======================================================================================================================\n" },
		{ "RightwardSlope.Name", "EAnalysisRootMotionAxis::RightwardSlope" },
		{ "RightwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "RightwardSpeed.Name", "EAnalysisRootMotionAxis::RightwardSpeed" },
		{ "Speed.Comment", "//======================================================================================================================\n" },
		{ "Speed.Name", "EAnalysisRootMotionAxis::Speed" },
		{ "UpwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "UpwardSpeed.Name", "EAnalysisRootMotionAxis::UpwardSpeed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis,
		nullptr,
		"EAnalysisRootMotionAxis",
		"EAnalysisRootMotionAxis",
		Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.InnerSingleton, Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnalysisRootMotionAxis.InnerSingleton;
	}
	void URootMotionAnalysisProperties::StaticRegisterNativesURootMotionAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionAnalysisProperties);
	UClass* Z_Construct_UClass_URootMotionAnalysisProperties_NoRegister()
	{
		return URootMotionAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionAnalysisProperties_Statics
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
	UObject* (*const Z_Construct_UClass_URootMotionAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalysisProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//======================================================================================================================\n" },
		{ "IncludePath", "RootMotionAnalysis.h" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Axis for the analysis function */" },
		{ "DisplayName", "Axis" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "Axis for the analysis function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis = { "FunctionAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, FunctionAxis), Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisRootMotionAxis, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData)) }; // 2798580617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_BoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** The bone or socket used for analysis */" },
		{ "DisplayName", "Bone/Socket" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "The bone or socket used for analysis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_BoneSocket = { "BoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, BoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_BoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_BoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/**\n\x09* The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\n\x09* of the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\n\x09* analysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\n\x09* as well as positions/rotations will be relative to this moving frame.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "The space in which to perform the analysis. Fixed will use the analysis bone/socket at the first frame\nof the analysis time range. Changing will use the analysis bone/socket at the relevant frame during the\nanalysis, but calculate velocities assuming that frame isn't moving. Moving will do the same but velocities\nas well as positions/rotations will be relative to this moving frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, Space), Z_Construct_UEnum_Persona_EAnalysisSpace, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space_MetaData)) }; // 4185973906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Bone or socket that defines the analysis space (when it isn't World) */" },
		{ "DisplayName", "Analysis Space Bone/Socket" },
		{ "EditCondition", "Space != EAnalysisSpace::World" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "Bone or socket that defines the analysis space (when it isn't World)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_SpaceBoneSocket = { "SpaceBoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, SpaceBoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_SpaceBoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's facing direction */" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's facing direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis = { "CharacterFacingAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, CharacterFacingAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's up direction */" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's up direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis = { "CharacterUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, CharacterUpAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData)) }; // 3364905420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis starts */" },
		{ "DisplayName", "Start time fraction" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_StartTimeFraction = { "StartTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, StartTimeFraction), METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_StartTimeFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction through each animation at which analysis ends */" },
		{ "DisplayName", "End time fraction" },
		{ "ModuleRelativePath", "Public/RootMotionAnalysis.h" },
		{ "ToolTip", "Fraction through each animation at which analysis ends" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_EndTimeFraction = { "EndTimeFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionAnalysisProperties, EndTimeFraction), METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_EndTimeFraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_FunctionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_BoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_SpaceBoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_CharacterUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_StartTimeFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionAnalysisProperties_Statics::NewProp_EndTimeFraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionAnalysisProperties_Statics::ClassParams = {
		&URootMotionAnalysisProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_URootMotionAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionAnalysisProperties.OuterSingleton, Z_Construct_UClass_URootMotionAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionAnalysisProperties.OuterSingleton;
	}
	template<> BLENDSPACEMOTIONANALYSIS_API UClass* StaticClass<URootMotionAnalysisProperties>()
	{
		return URootMotionAnalysisProperties::StaticClass();
	}
	URootMotionAnalysisProperties::URootMotionAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionAnalysisProperties);
	URootMotionAnalysisProperties::~URootMotionAnalysisProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::EnumInfo[] = {
		{ EAnalysisRootMotionAxis_StaticEnum, TEXT("EAnalysisRootMotionAxis"), &Z_Registration_Info_UEnum_EAnalysisRootMotionAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2798580617U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionAnalysisProperties, URootMotionAnalysisProperties::StaticClass, TEXT("URootMotionAnalysisProperties"), &Z_Registration_Info_UClass_URootMotionAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionAnalysisProperties), 791045027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_4276308027(TEXT("/Script/BlendSpaceMotionAnalysis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_RootMotionAnalysis_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
