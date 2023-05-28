// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/BlendSpace.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties();
	ENGINE_API UClass* Z_Construct_UClass_UAnalysisProperties_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFilterInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPreferredTriangulationDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSample();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceBlendProfile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceSegment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceTriangle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendSample();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnalysisProperties::StaticRegisterNativesUAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalysisProperties);
	UClass* Z_Construct_UClass_UAnalysisProperties_NoRegister()
	{
		return UAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The base class for properties to be used in analysis. Engine will inherit from this to define structures used for\n* the functions it supports. User-defined functions will likely need their own analysis structures inheriting from\n* this too.\n*/" },
		{ "IncludePath", "Animation/BlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The base class for properties to be used in analysis. Engine will inherit from this to define structures used for\nthe functions it supports. User-defined functions will likely need their own analysis structures inheriting from\nthis too." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalysisProperties_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** Analysis function for this axis */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Analysis function for this axis" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalysisProperties_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalysisProperties, Function), METADATA_PARAMS(Z_Construct_UClass_UAnalysisProperties_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalysisProperties_Statics::NewProp_Function_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalysisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalysisProperties_Statics::NewProp_Function,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalysisProperties_Statics::ClassParams = {
		&UAnalysisProperties::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalysisProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalysisProperties_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton, Z_Construct_UClass_UAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalysisProperties.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnalysisProperties>()
	{
		return UAnalysisProperties::StaticClass();
	}
	UAnalysisProperties::UAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalysisProperties);
	UAnalysisProperties::~UAnalysisProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendSpaceAxis;
	static UEnum* EBlendSpaceAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpaceAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendSpaceAxis"));
		}
		return Z_Registration_Info_UEnum_EBlendSpaceAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlendSpaceAxis>()
	{
		return EBlendSpaceAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enumerators[] = {
		{ "BSA_None", (int64)BSA_None },
		{ "BSA_X", (int64)BSA_X },
		{ "BSA_Y", (int64)BSA_Y },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enum_MetaDataParams[] = {
		{ "BSA_None.DisplayName", "None" },
		{ "BSA_None.Name", "BSA_None" },
		{ "BSA_X.DisplayName", "Horizontal (X) Axis" },
		{ "BSA_X.Name", "BSA_X" },
		{ "BSA_Y.DisplayName", "Vertical (Y) Axis" },
		{ "BSA_Y.Name", "BSA_Y" },
		{ "Comment", "/** Interpolation data types. */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Interpolation data types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBlendSpaceAxis",
		"EBlendSpaceAxis",
		Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis()
	{
		if (!Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton, Z_Construct_UEnum_Engine_EBlendSpaceAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlendSpaceAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPreferredTriangulationDirection;
	static UEnum* EPreferredTriangulationDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPreferredTriangulationDirection"));
		}
		return Z_Registration_Info_UEnum_EPreferredTriangulationDirection.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPreferredTriangulationDirection>()
	{
		return EPreferredTriangulationDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enumerators[] = {
		{ "EPreferredTriangulationDirection::None", (int64)EPreferredTriangulationDirection::None },
		{ "EPreferredTriangulationDirection::Tangential", (int64)EPreferredTriangulationDirection::Tangential },
		{ "EPreferredTriangulationDirection::Radial", (int64)EPreferredTriangulationDirection::Radial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPreferredTriangulationDirection::None" },
		{ "None.ToolTip", "None" },
		{ "Radial.DisplayName", "Radial" },
		{ "Radial.Name", "EPreferredTriangulationDirection::Radial" },
		{ "Radial.ToolTip", "When there is ambiguity, rectangles will be split so that the inserted edge tends to point towards the origin" },
		{ "Tangential.DisplayName", "Tangential" },
		{ "Tangential.Name", "EPreferredTriangulationDirection::Tangential" },
		{ "Tangential.ToolTip", "When there is ambiguity, rectangles will be split so that the inserted edge tends to not point towards the origin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPreferredTriangulationDirection",
		"EPreferredTriangulationDirection",
		Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPreferredTriangulationDirection()
	{
		if (!Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton, Z_Construct_UEnum_Engine_EPreferredTriangulationDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPreferredTriangulationDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode;
	static UEnum* EBlendSpacePerBoneBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendSpacePerBoneBlendMode"));
		}
		return Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlendSpacePerBoneBlendMode>()
	{
		return EBlendSpacePerBoneBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enumerators[] = {
		{ "EBlendSpacePerBoneBlendMode::ManualPerBoneOverride", (int64)EBlendSpacePerBoneBlendMode::ManualPerBoneOverride },
		{ "EBlendSpacePerBoneBlendMode::BlendProfile", (int64)EBlendSpacePerBoneBlendMode::BlendProfile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "BlendProfile.DisplayName", "Blend Profile" },
		{ "BlendProfile.Name", "EBlendSpacePerBoneBlendMode::BlendProfile" },
		{ "BlendProfile.ToolTip", "Use a blend profile to specify the bone smoothing interpolation times." },
		{ "ManualPerBoneOverride.DisplayName", "Manual Per Bone Override" },
		{ "ManualPerBoneOverride.Name", "EBlendSpacePerBoneBlendMode::ManualPerBoneOverride" },
		{ "ManualPerBoneOverride.ToolTip", "Manually specify the bones and their smoothing interpolation times." },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBlendSpacePerBoneBlendMode",
		"EBlendSpacePerBoneBlendMode",
		Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode()
	{
		if (!Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile;
class UScriptStruct* FBlendSpaceBlendProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSpaceBlendProfile"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSpaceBlendProfile>()
{
	return FBlendSpaceBlendProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetWeightInterpolationSpeedPerSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceBlendProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "DisplayName", "Blend Profile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "UseAsBlendMask", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceBlendProfile, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Weight Speed" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_TargetWeightInterpolationSpeedPerSec = { "TargetWeightInterpolationSpeedPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceBlendProfile, TargetWeightInterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewProp_TargetWeightInterpolationSpeedPerSec,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSpaceBlendProfile",
		sizeof(FBlendSpaceBlendProfile),
		alignof(FBlendSpaceBlendProfile),
		Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceBlendProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterpolationParameter;
class UScriptStruct* FInterpolationParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterpolationParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterpolationParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpolationParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InterpolationParameter"));
	}
	return Z_Registration_Info_UScriptStruct_InterpolationParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpolationParameter>()
{
	return FInterpolationParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpolationParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Smoothing Time used to move smoothly across the blendpsace from the current parameters to the target\n\x09 * parameters. The different Smoothing Types will treat this in different ways, but in general a value of\n\x09 * zero will disable all smoothing, and larger values will smooth more.\n\x09 */" },
		{ "DisplayName", "Smoothing Time" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Smoothing Time used to move smoothly across the blendpsace from the current parameters to the target\nparameters. The different Smoothing Types will treat this in different ways, but in general a value of\nzero will disable all smoothing, and larger values will smooth more." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterpolationParameter, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_DampingRatio_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Damping ratio - only used when the type is set to SpringDamper. A value of 1 will move quickly and\n\x09 * smoothly to the target, without overshooting. Values as low as 0 can be used to encourage some overshoot,\n\x09 * and values around 0.7 can make pose transitions look more natural.\n\x09 */" },
		{ "EditCondition", "InterpolationType == EFilterInterpolationType::BSIT_SpringDamper && InterpolationTime > 0" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Damping ratio - only used when the type is set to SpringDamper. A value of 1 will move quickly and\nsmoothly to the target, without overshooting. Values as low as 0 can be used to encourage some overshoot,\nand values around 0.7 can make pose transitions look more natural." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterpolationParameter, DampingRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_DampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_DampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Maximum speed, in real units. For example, if this axis is degrees then you could use a value of 90 to\n\x09 * limit the turn rate to 90 degrees per second. Only used when greater than zero and the type is\n\x09 * set to SpringDamper or Exponential.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Maximum speed, in real units. For example, if this axis is degrees then you could use a value of 90 to\nlimit the turn rate to 90 degrees per second. Only used when greater than zero and the type is\nset to SpringDamper or Exponential." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterpolationParameter, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Type of smoothing used for filtering the input value to decide how to get to target. */" },
		{ "DisplayName", "Smoothing Type" },
		{ "EditCondition", "InterpolationTime > 0" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Type of smoothing used for filtering the input value to decide how to get to target." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterpolationParameter, InterpolationType), Z_Construct_UEnum_Engine_EFilterInterpolationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData)) }; // 2135852416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpolationParameter",
		sizeof(FInterpolationParameter),
		alignof(FInterpolationParameter),
		Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_InterpolationParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterpolationParameter.InnerSingleton, Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterpolationParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendParameter;
class UScriptStruct* FBlendParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendParameter"));
	}
	return Z_Registration_Info_UScriptStruct_BlendParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendParameter>()
{
	return FBlendParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToGrid_MetaData[];
#endif
		static void NewProp_bSnapToGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapInput_MetaData[];
#endif
		static void NewProp_bWrapInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendParameter, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "Comment", "/** Minimum value for this axis range. */" },
		{ "DisplayName", "Minimum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Minimum value for this axis range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendParameter, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "Comment", "/** Maximum value for this axis range. */" },
		{ "DisplayName", "Maximum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Maximum value for this axis range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendParameter, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of grid divisions along this axis. */" },
		{ "DisplayName", "Grid Divisions" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The number of grid divisions along this axis." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum = { "GridNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendParameter, GridNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "Comment", "/** If true then samples will always be snapped to the grid on this axis when added, moved, or the axes are changed. */" },
		{ "DisplayName", "Snap to Grid" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If true then samples will always be snapped to the grid on this axis when added, moved, or the axes are changed." },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_SetBit(void* Obj)
	{
		((FBlendParameter*)Obj)->bSnapToGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid = { "bSnapToGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlendParameter), &Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "Comment", "/** If true then the input can go outside the min/max range and the blend space is treated as being cyclic on this axis. If false then input parameters are clamped to the min/max values on this axis. */" },
		{ "DisplayName", "Wrap Input" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If true then the input can go outside the min/max range and the blend space is treated as being cyclic on this axis. If false then input parameters are clamped to the min/max values on this axis." },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_SetBit(void* Obj)
	{
		((FBlendParameter*)Obj)->bWrapInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput = { "bWrapInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBlendParameter), &Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bSnapToGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_bWrapInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendParameter",
		sizeof(FBlendParameter),
		alignof(FBlendParameter),
		Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendParameter.InnerSingleton, Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSample;
class UScriptStruct* FBlendSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSample, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSample"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSample.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSample>()
{
	return FBlendSample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateScale;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Sample data */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Sample data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "Comment", "// For linked animations\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "For linked animations" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSample, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "Comment", "//blend 0->x, blend 1->y, blend 2->z\n" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "blend 0->x, blend 1->y, blend 2->z" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue = { "SampleValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSample, SampleValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ClampMax", "64.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSample, RateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FBlendSample*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlendSample), &Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSample",
		sizeof(FBlendSample),
		alignof(FBlendSample),
		Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSample()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSample.InnerSingleton, Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceSegment;
class UScriptStruct* FBlendSpaceSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceSegment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSpaceSegment"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceSegment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSpaceSegment>()
{
	return FBlendSpaceSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the runtime representation of a segment which stores its vertices (start and end) in normalized space.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "This is the runtime representation of a segment which stores its vertices (start and end) in normalized space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Comment", "/** Indices into the samples */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Indices into the samples" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SampleIndices, FBlendSpaceSegment), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceSegment, SampleIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_SampleIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_Vertices_MetaData[] = {
		{ "Comment", "/** The vertices are in the normalized space - i.e. in the range 0-1. */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The vertices are in the normalized space - i.e. in the range 0-1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Vertices, FBlendSpaceSegment), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceSegment, Vertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewProp_Vertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSpaceSegment",
		sizeof(FBlendSpaceSegment),
		alignof(FBlendSpaceSegment),
		Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceSegment.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo;
class UScriptStruct* FBlendSpaceTriangleEdgeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSpaceTriangleEdgeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSpaceTriangleEdgeInfo>()
{
	return FBlendSpaceTriangleEdgeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourTriangleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NeighbourTriangleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentPerimeterTriangleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentPerimeterTriangleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentPerimeterVertexIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentPerimeterVertexIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceTriangleEdgeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Edge normal faces out */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Edge normal faces out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangleEdgeInfo, Normal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_NeighbourTriangleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_NeighbourTriangleIndex = { "NeighbourTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangleEdgeInfo, NeighbourTriangleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_NeighbourTriangleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_NeighbourTriangleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterTriangleIndices_MetaData[] = {
		{ "Comment", "/**\n\x09* IF there is no neighbor, then (a) we're on the perimeter and (b) these will be the indices of\n\x09* triangles along the perimeter (next to the start and end of this edge, respectively) \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "IF there is no neighbor, then (a) we're on the perimeter and (b) these will be the indices of\ntriangles along the perimeter (next to the start and end of this edge, respectively)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterTriangleIndices = { "AdjacentPerimeterTriangleIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AdjacentPerimeterTriangleIndices, FBlendSpaceTriangleEdgeInfo), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangleEdgeInfo, AdjacentPerimeterTriangleIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterTriangleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterTriangleIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterVertexIndices_MetaData[] = {
		{ "Comment", "/**\n\x09 * The vertex index of the associated AdjacentPerimeterTriangle such that the perimeter edge is\n\x09 * from this vertex to the next.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The vertex index of the associated AdjacentPerimeterTriangle such that the perimeter edge is\nfrom this vertex to the next." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterVertexIndices = { "AdjacentPerimeterVertexIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AdjacentPerimeterVertexIndices, FBlendSpaceTriangleEdgeInfo), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangleEdgeInfo, AdjacentPerimeterVertexIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterVertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterVertexIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_NeighbourTriangleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterTriangleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewProp_AdjacentPerimeterVertexIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSpaceTriangleEdgeInfo",
		sizeof(FBlendSpaceTriangleEdgeInfo),
		alignof(FBlendSpaceTriangleEdgeInfo),
		Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceTriangle;
class UScriptStruct* FBlendSpaceTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceTriangle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSpaceTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSpaceTriangle>()
{
	return FBlendSpaceTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This is the runtime representation of a triangle. Each triangle stores its vertices etc in normalized space,\n* with an index to the original samples.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "This is the runtime representation of a triangle. Each triangle stores its vertices etc in normalized space,\nwith an index to the original samples." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_SampleIndices_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "Comment", "/** Indices into the samples */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Indices into the samples" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_SampleIndices = { "SampleIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SampleIndices, FBlendSpaceTriangle), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangle, SampleIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_SampleIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_SampleIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "Comment", "/** The vertices are in the normalized space - i.e. in the range 0-1. */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The vertices are in the normalized space - i.e. in the range 0-1." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Vertices, FBlendSpaceTriangle), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangle, Vertices), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_Vertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_EdgeInfo_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "Comment", "/** Info for the edge starting at the vertex index and going (anti-clockwise) to the next vertex */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Info for the edge starting at the vertex index and going (anti-clockwise) to the next vertex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_EdgeInfo = { "EdgeInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EdgeInfo, FBlendSpaceTriangle), nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceTriangle, EdgeInfo), Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_EdgeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_EdgeInfo_MetaData)) }; // 4199877698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_SampleIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewProp_EdgeInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSpaceTriangle",
		sizeof(FBlendSpaceTriangle),
		alignof(FBlendSpaceTriangle),
		Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceTriangle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightedBlendSample;
class UScriptStruct* FWeightedBlendSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightedBlendSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightedBlendSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendSample, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendSample"));
	}
	return Z_Registration_Info_UScriptStruct_WeightedBlendSample.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWeightedBlendSample>()
{
	return FWeightedBlendSample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightedBlendSample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendSample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedBlendSample, SampleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleWeight = { "SampleWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightedBlendSample, SampleWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewProp_SampleWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendSample",
		sizeof(FWeightedBlendSample),
		alignof(FWeightedBlendSample),
		Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendSample()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightedBlendSample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightedBlendSample.InnerSingleton, Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightedBlendSample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSpaceData;
class UScriptStruct* FBlendSpaceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSpaceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSpaceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSpaceData"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSpaceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSpaceData>()
{
	return FBlendSpaceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendSpaceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* The runtime data used for interpolating. Note that only one of Segments/Triangles will be in use,\n* depending on the dimensionality of the data.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The runtime data used for interpolating. Note that only one of Segments/Triangles will be in use,\ndepending on the dimensionality of the data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSpaceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendSpaceSegment, METADATA_PARAMS(nullptr, 0) }; // 248773938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceData, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments_MetaData)) }; // 248773938
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendSpaceTriangle, METADATA_PARAMS(nullptr, 0) }; // 139510498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendSpaceData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles_MetaData)) }; // 139510498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSpaceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewProp_Triangles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSpaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSpaceData",
		sizeof(FBlendSpaceData),
		alignof(FBlendSpaceData),
		Z_Construct_UScriptStruct_FBlendSpaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSpaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSpaceData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendSpaceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSpaceData.InnerSingleton, Z_Construct_UScriptStruct_FBlendSpaceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendSpaceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorElement;
class UScriptStruct* FEditorElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorElement"));
	}
	return Z_Registration_Info_UScriptStruct_EditorElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorElement>()
{
	return FEditorElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Each elements in the grid\n */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Each elements in the grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Indices, FEditorElement), nullptr, nullptr, STRUCT_OFFSET(FEditorElement, Indices), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Weights, FEditorElement), nullptr, nullptr, STRUCT_OFFSET(FEditorElement, Weights), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorElement",
		sizeof(FEditorElement),
		alignof(FEditorElement),
		Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorElement()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorElement.InnerSingleton, Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridBlendSample;
class UScriptStruct* FGridBlendSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridBlendSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridBlendSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridBlendSample, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GridBlendSample"));
	}
	return Z_Registration_Info_UScriptStruct_GridBlendSample.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGridBlendSample>()
{
	return FGridBlendSample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridBlendSample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridElement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** result of how much weight of the grid element **/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "result of how much weight of the grid element *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridBlendSample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement = { "GridElement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGridBlendSample, GridElement), Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData)) }; // 2219624522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGridBlendSample, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GridBlendSample",
		sizeof(FGridBlendSample),
		alignof(FGridBlendSample),
		Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample()
	{
		if (!Z_Registration_Info_UScriptStruct_GridBlendSample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridBlendSample.InnerSingleton, Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridBlendSample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerBoneInterpolation;
class UScriptStruct* FPerBoneInterpolation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerBoneInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerBoneInterpolation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneInterpolation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneInterpolation"));
	}
	return Z_Registration_Info_UScriptStruct_PerBoneInterpolation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneInterpolation>()
{
	return FPerBoneInterpolation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeedPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeedPerSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneInterpolation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBoneInterpolation, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "Comment", "/**\n\x09* If greater than zero, this is the speed at which the sample weights are allowed to change for this specific bone.\n\x09*\n\x09* A speed of 1 means a sample weight can change from zero to one (or one to zero) in one second.\n\x09* A speed of 2 means that this would take half a second.\n\x09*\n\x09* Smaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a\n\x09* value of zero disables this smoothing entirely.\n\x09* \n\x09* If set, the value overrides the overall Sample Weight Speed which will no longer affect this bone.\n\x09*/" },
		{ "DisplayName", "Weight Speed" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If greater than zero, this is the speed at which the sample weights are allowed to change for this specific bone.\n\nA speed of 1 means a sample weight can change from zero to one (or one to zero) in one second.\nA speed of 2 means that this would take half a second.\n\nSmaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a\nvalue of zero disables this smoothing entirely.\n\nIf set, the value overrides the overall Sample Weight Speed which will no longer affect this bone." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec = { "InterpolationSpeedPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBoneInterpolation, InterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneInterpolation",
		sizeof(FPerBoneInterpolation),
		alignof(FPerBoneInterpolation),
		Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation()
	{
		if (!Z_Registration_Info_UScriptStruct_PerBoneInterpolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerBoneInterpolation.InnerSingleton, Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerBoneInterpolation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotifyTriggerMode;
	static UEnum* ENotifyTriggerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyTriggerMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyTriggerMode"));
		}
		return Z_Registration_Info_UEnum_ENotifyTriggerMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENotifyTriggerMode::Type>()
	{
		return ENotifyTriggerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enumerators[] = {
		{ "ENotifyTriggerMode::AllAnimations", (int64)ENotifyTriggerMode::AllAnimations },
		{ "ENotifyTriggerMode::HighestWeightedAnimation", (int64)ENotifyTriggerMode::HighestWeightedAnimation },
		{ "ENotifyTriggerMode::None", (int64)ENotifyTriggerMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enum_MetaDataParams[] = {
		{ "AllAnimations.DisplayName", "All Animations" },
		{ "AllAnimations.Name", "ENotifyTriggerMode::AllAnimations" },
		{ "HighestWeightedAnimation.DisplayName", "Highest Weighted Animation" },
		{ "HighestWeightedAnimation.Name", "ENotifyTriggerMode::HighestWeightedAnimation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "None.Name", "ENotifyTriggerMode::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENotifyTriggerMode",
		"ENotifyTriggerMode::Type",
		Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode()
	{
		if (!Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton, Z_Construct_UEnum_Engine_ENotifyTriggerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENotifyTriggerMode.InnerSingleton;
	}
	void UBlendSpace::StaticRegisterNativesUBlendSpace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpace);
	UClass* Z_Construct_UClass_UBlendSpace_NoRegister()
	{
		return UBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContainsRotationOffsetMeshSpaceSamples_MetaData[];
#endif
		static void NewProp_bContainsRotationOffsetMeshSpaceSamples_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsRotationOffsetMeshSpaceSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationParam;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnalysisProperties;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetWeightInterpolationSpeedPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTargetWeightInterpolationEaseInOut_MetaData[];
#endif
		static void NewProp_bTargetWeightInterpolationEaseInOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetWeightInterpolationEaseInOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMeshSpaceBlending_MetaData[];
#endif
		static void NewProp_bAllowMeshSpaceBlending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMeshSpaceBlending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyTriggerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolateUsingGrid_MetaData[];
#endif
		static void NewProp_bInterpolateUsingGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolateUsingGrid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredTriangulationDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredTriangulationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredTriangulationDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerBoneBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerBoneBlendMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualPerBoneOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualPerBoneOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManualPerBoneOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndexWithMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndexWithMarkers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampleData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSamples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSamples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpaceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToScaleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToScaleAnimation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DimensionIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DimensionIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DimensionIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows multiple animations to be blended between based on input parameters\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/BlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_MetaData[] = {
		{ "Comment", "/** Indicates whether any samples have the flag to apply rotation offsets in mesh space */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Indicates whether any samples have the flag to apply rotation offsets in mesh space" },
	};
#endif
	void Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_SetBit(void* Obj)
	{
		((UBlendSpace*)Obj)->bContainsRotationOffsetMeshSpaceSamples = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples = { "bContainsRotationOffsetMeshSpaceSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace), &Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_InterpolationParam_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/** Input Smoothing parameters for each input axis */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Input Smoothing parameters for each input axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_InterpolationParam = { "InterpolationParam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InterpolationParam, UBlendSpace), nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, InterpolationParam), Z_Construct_UScriptStruct_FInterpolationParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_InterpolationParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_InterpolationParam_MetaData)) }; // 302554114
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnalysisProperties_MetaData[] = {
		{ "Category", "AnalysisProperties" },
		{ "Comment", "/** \n\x09* Analysis properties for each axis. Note that these can be null. They will be created/set from \n\x09* FBlendSpaceDetails::HandleAnalysisFunctionChanged\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Analysis properties for each axis. Note that these can be null. They will be created/set from\nFBlendSpaceDetails::HandleAnalysisFunctionChanged" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnalysisProperties = { "AnalysisProperties", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(AnalysisProperties, UBlendSpace), nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, AnalysisProperties), Z_Construct_UClass_UAnalysisProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnalysisProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnalysisProperties_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* If greater than zero, this is the speed at which the sample weights are allowed to change.\n\x09* \n\x09* A speed of 1 means a sample weight can change from zero to one (or one to zero) in one second.\n\x09* A speed of 2 means that this would take half a second.\n\x09* \n\x09* This allows the Blend Space to switch to new parameters without going through intermediate states, \n\x09* effectively blending between where it was and where the new target is. For example, imagine we have \n\x09* a blend space for locomotion, moving left, forward and right. Now if you interpolate the inputs of \n\x09* the blend space itself, from one extreme to the other, you will go from left, to forward, to right. \n\x09* As an alternative, by setting this Sample Weight Speed to a value higher than zero, it will go \n\x09* directly from left to right, without going through moving forward first.\n\x09* \n\x09* Smaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a \n\x09* value of zero disables this smoothing entirely.\n\x09*/" },
		{ "DisplayName", "Weight Speed" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If greater than zero, this is the speed at which the sample weights are allowed to change.\n\nA speed of 1 means a sample weight can change from zero to one (or one to zero) in one second.\nA speed of 2 means that this would take half a second.\n\nThis allows the Blend Space to switch to new parameters without going through intermediate states,\neffectively blending between where it was and where the new target is. For example, imagine we have\na blend space for locomotion, moving left, forward and right. Now if you interpolate the inputs of\nthe blend space itself, from one extreme to the other, you will go from left, to forward, to right.\nAs an alternative, by setting this Sample Weight Speed to a value higher than zero, it will go\ndirectly from left to right, without going through moving forward first.\n\nSmaller values mean slower adjustments of the sample weights, and thus more smoothing. However, a\nvalue of zero disables this smoothing entirely." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_TargetWeightInterpolationSpeedPerSec = { "TargetWeightInterpolationSpeedPerSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, TargetWeightInterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "Comment", "/**\n\x09 * If set then this eases in/out the sample weight adjustments, using the speed to determine how much smoothing to apply.\n\x09 */" },
		{ "DisplayName", "Smoothing" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If set then this eases in/out the sample weight adjustments, using the speed to determine how much smoothing to apply." },
	};
#endif
	void Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_SetBit(void* Obj)
	{
		((UBlendSpace*)Obj)->bTargetWeightInterpolationEaseInOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut = { "bTargetWeightInterpolationEaseInOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace), &Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "Comment", "/**\n\x09 * If set then blending is performed in mesh space if there are per-bone sample smoothing overrides.\n\x09 * \n\x09 * Note that mesh space blending is significantly more expensive (slower) than normal blending when the \n\x09 * samples are regular animations (i.e. not additive animations that are already set to apply in mesh \n\x09 * space), and is typically only useful if you want some parts of the skeleton to achieve a pose \n\x09 * in mesh space faster or slower than others - for example to make the head move faster than the \n\x09 * body/arms when aiming, so the character looks at the target slightly before aiming at it.\n\x09 * \n\x09 * Note also that blend space assets with additive/mesh space samples will always blend in mesh space, and \n\x09 * also that enabling this option with blend space graphs producing additive/mesh space samples may cause\n\x09 * undesired results.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If set then blending is performed in mesh space if there are per-bone sample smoothing overrides.\n\nNote that mesh space blending is significantly more expensive (slower) than normal blending when the\nsamples are regular animations (i.e. not additive animations that are already set to apply in mesh\nspace), and is typically only useful if you want some parts of the skeleton to achieve a pose\nin mesh space faster or slower than others - for example to make the head move faster than the\nbody/arms when aiming, so the character looks at the target slightly before aiming at it.\n\nNote also that blend space assets with additive/mesh space samples will always blend in mesh space, and\nalso that enabling this option with blend space graphs producing additive/mesh space samples may cause\nundesired results." },
	};
#endif
	void Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_SetBit(void* Obj)
	{
		((UBlendSpace*)Obj)->bAllowMeshSpaceBlending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending = { "bAllowMeshSpaceBlending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace), &Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** \n\x09* The default looping behavior of this blend space.\n\x09* Asset players can override this\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The default looping behavior of this blend space.\nAsset players can override this" },
	};
#endif
	void Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UBlendSpace*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace), &Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Preview Base pose for additive BlendSpace **/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreviewBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnimLength_MetaData[] = {
		{ "Comment", "/** This is the maximum length of any sample in the blendspace. **/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "This is the maximum length of any sample in the blendspace. *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnimLength = { "AnimLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, AnimLength), METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnimLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnimLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_NotifyTriggerMode_MetaData[] = {
		{ "Category", "AnimationNotifies" },
		{ "Comment", "/** The current mode used by the BlendSpace to decide which animation notifies to fire. Valid options are:\n\x09- AllAnimations: All notify events will fire\n\x09- HighestWeightedAnimation: Notify events will only fire from the highest weighted animation\n\x09- None: No notify events will fire from any animations\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The current mode used by the BlendSpace to decide which animation notifies to fire. Valid options are:\n      - AllAnimations: All notify events will fire\n      - HighestWeightedAnimation: Notify events will only fire from the highest weighted animation\n      - None: No notify events will fire from any animations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_NotifyTriggerMode = { "NotifyTriggerMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, NotifyTriggerMode), Z_Construct_UEnum_Engine_ENotifyTriggerMode, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_NotifyTriggerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_NotifyTriggerMode_MetaData)) }; // 1825645775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/** If true then interpolation is done via a grid at runtime. If false the interpolation uses the triangulation. */" },
		{ "DisplayName", "Use Grid" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If true then interpolation is done via a grid at runtime. If false the interpolation uses the triangulation." },
	};
#endif
	void Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_SetBit(void* Obj)
	{
		((UBlendSpace*)Obj)->bInterpolateUsingGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid = { "bInterpolateUsingGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlendSpace), &Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/** Preferred edge direction when the triangulation has to make an arbitrary choice */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Preferred edge direction when the triangulation has to make an arbitrary choice" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection = { "PreferredTriangulationDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, PreferredTriangulationDirection), Z_Construct_UEnum_Engine_EPreferredTriangulationDirection, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection_MetaData)) }; // 2397903895
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "Comment", "/**\n\x09 * There are two ways to use per pone sample smoothing: Blend profiles and manually maintaining the per bone overrides.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "There are two ways to use per pone sample smoothing: Blend profiles and manually maintaining the per bone overrides." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode = { "PerBoneBlendMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, PerBoneBlendMode), Z_Construct_UEnum_Engine_EBlendSpacePerBoneBlendMode, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode_MetaData)) }; // 622266181
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides_Inner = { "ManualPerBoneOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneInterpolation, METADATA_PARAMS(nullptr, 0) }; // 3360600791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "Comment", "/**\n\x09 * Per bone sample smoothing settings, which affect the specified bone and all its descendants in the skeleton.\n\x09 * These act as overrides to the global sample smoothing speed, which means the global sample smoothing speed does\n\x09 * not affect these bones. Note that they also override each other - so a per-bone setting on the chest will not\n\x09 * affect the hand if there is a per-bone setting on the arm.\n\x09 */" },
		{ "DisplayName", "Per Bone Overrides" },
		{ "EditCondition", "PerBoneBlendMode == EBlendSpacePerBoneBlendMode::ManualPerBoneOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Per bone sample smoothing settings, which affect the specified bone and all its descendants in the skeleton.\nThese act as overrides to the global sample smoothing speed, which means the global sample smoothing speed does\nnot affect these bones. Note that they also override each other - so a per-bone setting on the chest will not\naffect the hand if there is a per-bone setting on the arm." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides = { "ManualPerBoneOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, ManualPerBoneOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides_MetaData)) }; // 3360600791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendProfile_MetaData[] = {
		{ "Category", "SampleSmoothing" },
		{ "Comment", "/**\n\x09 * Reference to a blend profile of the corresponding skeleton to be used for per bone smoothing in case the per bone blend mode is set to use a blend profile.\n\x09 **/" },
		{ "DisplayName", "Per Bone Overrides" },
		{ "EditCondition", "PerBoneBlendMode == EBlendSpacePerBoneBlendMode::BlendProfile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Reference to a blend profile of the corresponding skeleton to be used for per bone smoothing in case the per bone blend mode is set to use a blend profile." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendProfile = { "PerBoneBlendProfile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, PerBoneBlendProfile), Z_Construct_UScriptStruct_FBlendSpaceBlendProfile, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendProfile_MetaData)) }; // 3424385226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleIndexWithMarkers_MetaData[] = {
		{ "Comment", "/** Track index to get marker data from. Samples are tested for the suitability of marker based sync\n\x09    during load and if we can use marker based sync we cache an index to a representative sample here */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Track index to get marker data from. Samples are tested for the suitability of marker based sync\n          during load and if we can use marker based sync we cache an index to a representative sample here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleIndexWithMarkers = { "SampleIndexWithMarkers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, SampleIndexWithMarkers), METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleIndexWithMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleIndexWithMarkers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData_Inner = { "SampleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendSample, METADATA_PARAMS(nullptr, 0) }; // 3207679237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData_MetaData[] = {
		{ "Category", "BlendSamples" },
		{ "Comment", "/** Sample animation data */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Sample animation data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData = { "SampleData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, SampleData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData_MetaData)) }; // 3207679237
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples_Inner = { "GridSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(nullptr, 0) }; // 2219624522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples_MetaData[] = {
		{ "Comment", "/** Grid samples, indexing scheme imposed by subclass */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Grid samples, indexing scheme imposed by subclass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples = { "GridSamples", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, GridSamples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples_MetaData)) }; // 2219624522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendSpaceData_MetaData[] = {
		{ "Comment", "/** Container for the runtime data, which could be line segments, triangulation or tetrahedrons */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Container for the runtime data, which could be line segments, triangulation or tetrahedrons" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendSpaceData = { "BlendSpaceData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, BlendSpaceData), Z_Construct_UScriptStruct_FBlendSpaceData, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendSpaceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendSpaceData_MetaData)) }; // 3846738964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendParameters_MetaData[] = {
		{ "Category", "BlendParametersTest" },
		{ "Comment", "/** Blend Parameters for each axis. **/" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "Blend Parameters for each axis. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BlendParameters, UBlendSpace), nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, BlendParameters), Z_Construct_UScriptStruct_FBlendParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendParameters_MetaData)) }; // 4222456909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "Comment", "/**\n\x09 * If you have input smoothing, this specifies the axis on which to scale the animation playback speed. E.g. for \n\x09 * locomotion animation, the speed axis will scale the animation speed in order to make up the difference \n\x09 * between the target and the result of blending the samples.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "If you have input smoothing, this specifies the axis on which to scale the animation playback speed. E.g. for\nlocomotion animation, the speed axis will scale the animation speed in order to make up the difference\nbetween the target and the result of blending the samples." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation = { "AxisToScaleAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, AxisToScaleAnimation), Z_Construct_UEnum_Engine_EBlendSpaceAxis, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation_MetaData)) }; // 1438673726
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices_Inner = { "DimensionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices_MetaData[] = {
		{ "Comment", "/** The order in which to use the dimensions in the data - e.g. [1, 2] means a 2D blend using Y and Z */" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace.h" },
		{ "ToolTip", "The order in which to use the dimensions in the data - e.g. [1, 2] means a 2D blend using Y and Z" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices = { "DimensionIndices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpace, DimensionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_bContainsRotationOffsetMeshSpaceSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_InterpolationParam,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnalysisProperties,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_TargetWeightInterpolationSpeedPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_bTargetWeightInterpolationEaseInOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_bAllowMeshSpaceBlending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_bLoop,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_AnimLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_NotifyTriggerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_bInterpolateUsingGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PreferredTriangulationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_ManualPerBoneOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_PerBoneBlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleIndexWithMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_SampleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_GridSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendSpaceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_BlendParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_AxisToScaleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace_Statics::NewProp_DimensionIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpace_Statics::ClassParams = {
		&UBlendSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpace()
	{
		if (!Z_Registration_Info_UClass_UBlendSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpace.OuterSingleton, Z_Construct_UClass_UBlendSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpace.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlendSpace>()
	{
		return UBlendSpace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace);
	UBlendSpace::~UBlendSpace() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpace)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::EnumInfo[] = {
		{ EBlendSpaceAxis_StaticEnum, TEXT("EBlendSpaceAxis"), &Z_Registration_Info_UEnum_EBlendSpaceAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1438673726U) },
		{ EPreferredTriangulationDirection_StaticEnum, TEXT("EPreferredTriangulationDirection"), &Z_Registration_Info_UEnum_EPreferredTriangulationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2397903895U) },
		{ EBlendSpacePerBoneBlendMode_StaticEnum, TEXT("EBlendSpacePerBoneBlendMode"), &Z_Registration_Info_UEnum_EBlendSpacePerBoneBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 622266181U) },
		{ ENotifyTriggerMode_StaticEnum, TEXT("ENotifyTriggerMode"), &Z_Registration_Info_UEnum_ENotifyTriggerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1825645775U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ScriptStructInfo[] = {
		{ FBlendSpaceBlendProfile::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics::NewStructOps, TEXT("BlendSpaceBlendProfile"), &Z_Registration_Info_UScriptStruct_BlendSpaceBlendProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceBlendProfile), 3424385226U) },
		{ FInterpolationParameter::StaticStruct, Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewStructOps, TEXT("InterpolationParameter"), &Z_Registration_Info_UScriptStruct_InterpolationParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpolationParameter), 302554114U) },
		{ FBlendParameter::StaticStruct, Z_Construct_UScriptStruct_FBlendParameter_Statics::NewStructOps, TEXT("BlendParameter"), &Z_Registration_Info_UScriptStruct_BlendParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendParameter), 4222456909U) },
		{ FBlendSample::StaticStruct, Z_Construct_UScriptStruct_FBlendSample_Statics::NewStructOps, TEXT("BlendSample"), &Z_Registration_Info_UScriptStruct_BlendSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSample), 3207679237U) },
		{ FBlendSpaceSegment::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics::NewStructOps, TEXT("BlendSpaceSegment"), &Z_Registration_Info_UScriptStruct_BlendSpaceSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceSegment), 248773938U) },
		{ FBlendSpaceTriangleEdgeInfo::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics::NewStructOps, TEXT("BlendSpaceTriangleEdgeInfo"), &Z_Registration_Info_UScriptStruct_BlendSpaceTriangleEdgeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceTriangleEdgeInfo), 4199877698U) },
		{ FBlendSpaceTriangle::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics::NewStructOps, TEXT("BlendSpaceTriangle"), &Z_Registration_Info_UScriptStruct_BlendSpaceTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceTriangle), 139510498U) },
		{ FWeightedBlendSample::StaticStruct, Z_Construct_UScriptStruct_FWeightedBlendSample_Statics::NewStructOps, TEXT("WeightedBlendSample"), &Z_Registration_Info_UScriptStruct_WeightedBlendSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightedBlendSample), 3875459607U) },
		{ FBlendSpaceData::StaticStruct, Z_Construct_UScriptStruct_FBlendSpaceData_Statics::NewStructOps, TEXT("BlendSpaceData"), &Z_Registration_Info_UScriptStruct_BlendSpaceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSpaceData), 3846738964U) },
		{ FEditorElement::StaticStruct, Z_Construct_UScriptStruct_FEditorElement_Statics::NewStructOps, TEXT("EditorElement"), &Z_Registration_Info_UScriptStruct_EditorElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorElement), 2219624522U) },
		{ FGridBlendSample::StaticStruct, Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewStructOps, TEXT("GridBlendSample"), &Z_Registration_Info_UScriptStruct_GridBlendSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridBlendSample), 3773440419U) },
		{ FPerBoneInterpolation::StaticStruct, Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewStructOps, TEXT("PerBoneInterpolation"), &Z_Registration_Info_UScriptStruct_PerBoneInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerBoneInterpolation), 3360600791U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalysisProperties, UAnalysisProperties::StaticClass, TEXT("UAnalysisProperties"), &Z_Registration_Info_UClass_UAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalysisProperties), 1419443609U) },
		{ Z_Construct_UClass_UBlendSpace, UBlendSpace::StaticClass, TEXT("UBlendSpace"), &Z_Registration_Info_UClass_UBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpace), 1036406791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_181935946(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
