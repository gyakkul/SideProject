// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocomotionAnalysis.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocomotionAnalysis() {}
// Cross Module References
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_ULocomotionAnalysisProperties();
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_ULocomotionAnalysisProperties_NoRegister();
	BLENDSPACEMOTIONANALYSIS_API UEnum* Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis();
	ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	PERSONA_API UEnum* Z_Construct_UEnum_Persona_EAnalysisLinearAxis();
	UPackage* Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnalysisLocomotionAxis;
	static UEnum* EAnalysisLocomotionAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis, (UObject*)Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis(), TEXT("EAnalysisLocomotionAxis"));
		}
		return Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.OuterSingleton;
	}
	template<> BLENDSPACEMOTIONANALYSIS_API UEnum* StaticEnum<EAnalysisLocomotionAxis>()
	{
		return EAnalysisLocomotionAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enumerators[] = {
		{ "EAnalysisLocomotionAxis::Speed", (int64)EAnalysisLocomotionAxis::Speed },
		{ "EAnalysisLocomotionAxis::Direction", (int64)EAnalysisLocomotionAxis::Direction },
		{ "EAnalysisLocomotionAxis::ForwardSpeed", (int64)EAnalysisLocomotionAxis::ForwardSpeed },
		{ "EAnalysisLocomotionAxis::RightwardSpeed", (int64)EAnalysisLocomotionAxis::RightwardSpeed },
		{ "EAnalysisLocomotionAxis::UpwardSpeed", (int64)EAnalysisLocomotionAxis::UpwardSpeed },
		{ "EAnalysisLocomotionAxis::ForwardSlope", (int64)EAnalysisLocomotionAxis::ForwardSlope },
		{ "EAnalysisLocomotionAxis::RightwardSlope", (int64)EAnalysisLocomotionAxis::RightwardSlope },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//======================================================================================================================\n" },
		{ "Direction.Comment", "//======================================================================================================================\n" },
		{ "Direction.Name", "EAnalysisLocomotionAxis::Direction" },
		{ "ForwardSlope.Comment", "//======================================================================================================================\n" },
		{ "ForwardSlope.Name", "EAnalysisLocomotionAxis::ForwardSlope" },
		{ "ForwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "ForwardSpeed.Name", "EAnalysisLocomotionAxis::ForwardSpeed" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "RightwardSlope.Comment", "//======================================================================================================================\n" },
		{ "RightwardSlope.Name", "EAnalysisLocomotionAxis::RightwardSlope" },
		{ "RightwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "RightwardSpeed.Name", "EAnalysisLocomotionAxis::RightwardSpeed" },
		{ "Speed.Comment", "//======================================================================================================================\n" },
		{ "Speed.Name", "EAnalysisLocomotionAxis::Speed" },
		{ "UpwardSpeed.Comment", "//======================================================================================================================\n" },
		{ "UpwardSpeed.Name", "EAnalysisLocomotionAxis::UpwardSpeed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis,
		nullptr,
		"EAnalysisLocomotionAxis",
		"EAnalysisLocomotionAxis",
		Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis()
	{
		if (!Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.InnerSingleton, Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnalysisLocomotionAxis.InnerSingleton;
	}
	void ULocomotionAnalysisProperties::StaticRegisterNativesULocomotionAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocomotionAnalysisProperties);
	UClass* Z_Construct_UClass_ULocomotionAnalysisProperties_NoRegister()
	{
		return ULocomotionAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULocomotionAnalysisProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryBoneSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryBoneSocket_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryBoneSocket;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalysisProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//======================================================================================================================\n" },
		{ "IncludePath", "LocomotionAnalysis.h" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** Axis for the analysis function */" },
		{ "DisplayName", "Axis" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "ToolTip", "Axis for the analysis function" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis = { "FunctionAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocomotionAnalysisProperties, FunctionAxis), Z_Construct_UEnum_BlendSpaceMotionAnalysis_EAnalysisLocomotionAxis, METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis_MetaData)) }; // 37770801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_PrimaryBoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** The primary bone or socket used for analysis */" },
		{ "DisplayName", "Bone/Socket 1" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "ToolTip", "The primary bone or socket used for analysis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_PrimaryBoneSocket = { "PrimaryBoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocomotionAnalysisProperties, PrimaryBoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_PrimaryBoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_PrimaryBoneSocket_MetaData)) }; // 2128614898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_SecondaryBoneSocket_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** The secondary bone or socket used for analysis */" },
		{ "DisplayName", "Bone/Socket 2" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "ToolTip", "The secondary bone or socket used for analysis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_SecondaryBoneSocket = { "SecondaryBoneSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocomotionAnalysisProperties, SecondaryBoneSocket), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_SecondaryBoneSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_SecondaryBoneSocket_MetaData)) }; // 2128614898
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's facing direction */" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's facing direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis = { "CharacterFacingAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocomotionAnalysisProperties, CharacterFacingAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** World or bone/socket axis that specifies the character's up direction */" },
		{ "ModuleRelativePath", "Public/LocomotionAnalysis.h" },
		{ "ToolTip", "World or bone/socket axis that specifies the character's up direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis = { "CharacterUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocomotionAnalysisProperties, CharacterUpAxis), Z_Construct_UEnum_Persona_EAnalysisLinearAxis, METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_MetaData)) }; // 3364905420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_FunctionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_PrimaryBoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_SecondaryBoneSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterFacingAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::NewProp_CharacterUpAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocomotionAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::ClassParams = {
		&ULocomotionAnalysisProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocomotionAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_ULocomotionAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocomotionAnalysisProperties.OuterSingleton, Z_Construct_UClass_ULocomotionAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocomotionAnalysisProperties.OuterSingleton;
	}
	template<> BLENDSPACEMOTIONANALYSIS_API UClass* StaticClass<ULocomotionAnalysisProperties>()
	{
		return ULocomotionAnalysisProperties::StaticClass();
	}
	ULocomotionAnalysisProperties::ULocomotionAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocomotionAnalysisProperties);
	ULocomotionAnalysisProperties::~ULocomotionAnalysisProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::EnumInfo[] = {
		{ EAnalysisLocomotionAxis_StaticEnum, TEXT("EAnalysisLocomotionAxis"), &Z_Registration_Info_UEnum_EAnalysisLocomotionAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 37770801U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocomotionAnalysisProperties, ULocomotionAnalysisProperties::StaticClass, TEXT("ULocomotionAnalysisProperties"), &Z_Registration_Info_UClass_ULocomotionAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocomotionAnalysisProperties), 3438989413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_3523791508(TEXT("/Script/BlendSpaceMotionAnalysis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_LocomotionAnalysis_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
