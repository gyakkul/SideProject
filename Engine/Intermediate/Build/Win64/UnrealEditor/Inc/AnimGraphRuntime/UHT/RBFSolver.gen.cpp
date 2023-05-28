// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RBF/RBFSolver.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRBFSolver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFSolverType;
	static UEnum* ERBFSolverType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFSolverType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFSolverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFSolverType"));
		}
		return Z_Registration_Info_UEnum_ERBFSolverType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFSolverType>()
	{
		return ERBFSolverType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enumerators[] = {
		{ "ERBFSolverType::Additive", (int64)ERBFSolverType::Additive },
		{ "ERBFSolverType::Interpolative", (int64)ERBFSolverType::Interpolative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** The additive solver sums up contributions from each target. It's faster\n\x09    but may require more targets for a good coverage, and requires the \n\x09\x09normalization step to be performed for smooth results.\n\x09*/" },
		{ "Additive.Name", "ERBFSolverType::Additive" },
		{ "Additive.ToolTip", "The additive solver sums up contributions from each target. It's faster\n          but may require more targets for a good coverage, and requires the\n              normalization step to be performed for smooth results." },
		{ "Comment", "/** The solver type to use. The two solvers have different requirements. */" },
		{ "Interpolative.Comment", "/** The interpolative solver interpolates the values from each target based\n\x09\x09on distance. As long as the input values are within the area bounded by\n\x09\x09the targets, the interpolation is well-behaved and return weight values \n\x09\x09within the 0% - 100% limit with no normalization required. \n\x09\x09Interpolation also gives smoother results, with fewer targets, than additive\n\x09\x09""but at a higher computational cost.\n\x09*/" },
		{ "Interpolative.Name", "ERBFSolverType::Interpolative" },
		{ "Interpolative.ToolTip", "The interpolative solver interpolates the values from each target based\n              on distance. As long as the input values are within the area bounded by\n              the targets, the interpolation is well-behaved and return weight values\n              within the 0% - 100% limit with no normalization required.\n              Interpolation also gives smoother results, with fewer targets, than additive\n              but at a higher computational cost." },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "The solver type to use. The two solvers have different requirements." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ERBFSolverType",
		"ERBFSolverType",
		Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType()
	{
		if (!Z_Registration_Info_UEnum_ERBFSolverType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFSolverType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFSolverType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFFunctionType;
	static UEnum* ERBFFunctionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFFunctionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFFunctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFFunctionType"));
		}
		return Z_Registration_Info_UEnum_ERBFFunctionType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFFunctionType>()
	{
		return ERBFFunctionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enumerators[] = {
		{ "ERBFFunctionType::Gaussian", (int64)ERBFFunctionType::Gaussian },
		{ "ERBFFunctionType::Exponential", (int64)ERBFFunctionType::Exponential },
		{ "ERBFFunctionType::Linear", (int64)ERBFFunctionType::Linear },
		{ "ERBFFunctionType::Cubic", (int64)ERBFFunctionType::Cubic },
		{ "ERBFFunctionType::Quintic", (int64)ERBFFunctionType::Quintic },
		{ "ERBFFunctionType::DefaultFunction", (int64)ERBFFunctionType::DefaultFunction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Function to use for each target falloff */" },
		{ "Cubic.Name", "ERBFFunctionType::Cubic" },
		{ "DefaultFunction.Comment", "/** Uses the setting of the parent container */" },
		{ "DefaultFunction.Name", "ERBFFunctionType::DefaultFunction" },
		{ "DefaultFunction.ToolTip", "Uses the setting of the parent container" },
		{ "Exponential.Name", "ERBFFunctionType::Exponential" },
		{ "Gaussian.Name", "ERBFFunctionType::Gaussian" },
		{ "Linear.Name", "ERBFFunctionType::Linear" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "Quintic.Name", "ERBFFunctionType::Quintic" },
		{ "ToolTip", "Function to use for each target falloff" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ERBFFunctionType",
		"ERBFFunctionType",
		Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType()
	{
		if (!Z_Registration_Info_UEnum_ERBFFunctionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFFunctionType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFFunctionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFDistanceMethod;
	static UEnum* ERBFDistanceMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFDistanceMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFDistanceMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFDistanceMethod"));
		}
		return Z_Registration_Info_UEnum_ERBFDistanceMethod.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFDistanceMethod>()
	{
		return ERBFDistanceMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enumerators[] = {
		{ "ERBFDistanceMethod::Euclidean", (int64)ERBFDistanceMethod::Euclidean },
		{ "ERBFDistanceMethod::Quaternion", (int64)ERBFDistanceMethod::Quaternion },
		{ "ERBFDistanceMethod::SwingAngle", (int64)ERBFDistanceMethod::SwingAngle },
		{ "ERBFDistanceMethod::TwistAngle", (int64)ERBFDistanceMethod::TwistAngle },
		{ "ERBFDistanceMethod::DefaultMethod", (int64)ERBFDistanceMethod::DefaultMethod },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Method for determining distance from input to targets */" },
		{ "DefaultMethod.Comment", "/** Uses the setting of the parent container */" },
		{ "DefaultMethod.Name", "ERBFDistanceMethod::DefaultMethod" },
		{ "DefaultMethod.ToolTip", "Uses the setting of the parent container" },
		{ "Euclidean.Comment", "/** Standard n-dimensional distance measure */" },
		{ "Euclidean.Name", "ERBFDistanceMethod::Euclidean" },
		{ "Euclidean.ToolTip", "Standard n-dimensional distance measure" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "Quaternion.Comment", "/** Treat inputs as quaternion */" },
		{ "Quaternion.Name", "ERBFDistanceMethod::Quaternion" },
		{ "Quaternion.ToolTip", "Treat inputs as quaternion" },
		{ "SwingAngle.Comment", "/** Treat inputs as quaternion, and find distance between rotated TwistAxis direction */" },
		{ "SwingAngle.Name", "ERBFDistanceMethod::SwingAngle" },
		{ "SwingAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotated TwistAxis direction" },
		{ "ToolTip", "Method for determining distance from input to targets" },
		{ "TwistAngle.Comment", "/** Treat inputs as quaternion, and find distance between rotations around the TwistAxis direction */" },
		{ "TwistAngle.Name", "ERBFDistanceMethod::TwistAngle" },
		{ "TwistAngle.ToolTip", "Treat inputs as quaternion, and find distance between rotations around the TwistAxis direction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ERBFDistanceMethod",
		"ERBFDistanceMethod",
		Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod()
	{
		if (!Z_Registration_Info_UEnum_ERBFDistanceMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFDistanceMethod.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFDistanceMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFNormalizeMethod;
	static UEnum* ERBFNormalizeMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFNormalizeMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFNormalizeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ERBFNormalizeMethod"));
		}
		return Z_Registration_Info_UEnum_ERBFNormalizeMethod.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERBFNormalizeMethod>()
	{
		return ERBFNormalizeMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enumerators[] = {
		{ "ERBFNormalizeMethod::OnlyNormalizeAboveOne", (int64)ERBFNormalizeMethod::OnlyNormalizeAboveOne },
		{ "ERBFNormalizeMethod::AlwaysNormalize", (int64)ERBFNormalizeMethod::AlwaysNormalize },
		{ "ERBFNormalizeMethod::NormalizeWithinMedian", (int64)ERBFNormalizeMethod::NormalizeWithinMedian },
		{ "ERBFNormalizeMethod::NoNormalization", (int64)ERBFNormalizeMethod::NoNormalization },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysNormalize.Comment", "/** \n\x09\x09""Always normalize. \n\x09\x09Zero distribution weights stay zero.\n\x09*/" },
		{ "AlwaysNormalize.Name", "ERBFNormalizeMethod::AlwaysNormalize" },
		{ "AlwaysNormalize.ToolTip", "Always normalize.\nZero distribution weights stay zero." },
		{ "Comment", "/** Method to normalize weights */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "NoNormalization.Comment", "/** \n\x09\x09""Don't normalize at all. This should only be used with\n\x09\x09the interpolative method, if it is known that all input\n\x09\x09values will be within the area bounded by the targets.\n\x09*/" },
		{ "NoNormalization.Name", "ERBFNormalizeMethod::NoNormalization" },
		{ "NoNormalization.ToolTip", "Don't normalize at all. This should only be used with\nthe interpolative method, if it is known that all input\nvalues will be within the area bounded by the targets." },
		{ "NormalizeWithinMedian.Comment", "/** \n\x09\x09Normalize only within reference median. The median\n\x09\x09is a cone with a minimum and maximum angle within\n\x09\x09which the value will be interpolated between \n\x09\x09non-normalized and normalized. This helps to define\n\x09\x09the volume in which normalization is always required.\n\x09*/" },
		{ "NormalizeWithinMedian.Name", "ERBFNormalizeMethod::NormalizeWithinMedian" },
		{ "NormalizeWithinMedian.ToolTip", "Normalize only within reference median. The median\nis a cone with a minimum and maximum angle within\nwhich the value will be interpolated between\nnon-normalized and normalized. This helps to define\nthe volume in which normalization is always required." },
		{ "OnlyNormalizeAboveOne.Comment", "/** Only normalize above one */" },
		{ "OnlyNormalizeAboveOne.Name", "ERBFNormalizeMethod::OnlyNormalizeAboveOne" },
		{ "OnlyNormalizeAboveOne.ToolTip", "Only normalize above one" },
		{ "ToolTip", "Method to normalize weights" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ERBFNormalizeMethod",
		"ERBFNormalizeMethod",
		Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod()
	{
		if (!Z_Registration_Info_UEnum_ERBFNormalizeMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFNormalizeMethod.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFNormalizeMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RBFEntry;
class UScriptStruct* FRBFEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RBFEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RBFEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFEntry, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RBFEntry.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFEntry>()
{
	return FRBFEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRBFEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct storing a particular entry within the RBF */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Struct storing a particular entry within the RBF" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFEntry>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Set of values for this target, size must be TargetDimensions  */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Set of values for this target, size must be TargetDimensions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFEntry, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFEntry_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFEntry",
		sizeof(FRBFEntry),
		alignof(FRBFEntry),
		Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RBFEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RBFEntry.InnerSingleton, Z_Construct_UScriptStruct_FRBFEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RBFEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRBFTarget>() == std::is_polymorphic<FRBFEntry>(), "USTRUCT FRBFTarget cannot be polymorphic unless super FRBFEntry is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RBFTarget;
class UScriptStruct* FRBFTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RBFTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RBFTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFTarget, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFTarget"));
	}
	return Z_Registration_Info_UScriptStruct_RBFTarget.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFTarget>()
{
	return FRBFTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRBFTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[];
#endif
		static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about a particular target in the RBF, including scaling factor */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Data about a particular target in the RBF, including scaling factor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** How large the influence of this target. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How large the influence of this target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFTarget, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Whether we want to apply an additional custom curve when activating this target. \n\x09    Ignored if the solver type is Interpolative. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Whether we want to apply an additional custom curve when activating this target.\n          Ignored if the solver type is Interpolative." },
	};
#endif
	void Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FRBFTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRBFTarget), &Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n\x09\x09Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n              Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve_MetaData)) }; // 778017158
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the distance method used to calculate the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Override the distance method used to calculate the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFTarget, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_MetaData)) }; // 67002488
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the falloff function used to smooth the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Override the falloff function used to smooth the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFTarget, FunctionType), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_MetaData)) }; // 4048311969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_ScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_bApplyCustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_DistanceMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFTarget_Statics::NewProp_FunctionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FRBFEntry,
		&NewStructOps,
		"RBFTarget",
		sizeof(FRBFTarget),
		alignof(FRBFTarget),
		Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_RBFTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RBFTarget.InnerSingleton, Z_Construct_UScriptStruct_FRBFTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RBFTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RBFParams;
class UScriptStruct* FRBFParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RBFParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RBFParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRBFParams, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RBFParams"));
	}
	return Z_Registration_Info_UScriptStruct_RBFParams.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRBFParams>()
{
	return FRBFParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRBFParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetDimensions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SolverType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SolverType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRadius_MetaData[];
#endif
		static void NewProp_bAutomaticRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Function_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Function;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MedianReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MedianReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MedianMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MedianMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MedianMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MedianMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters used by RBF solver */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRBFParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRBFParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData[] = {
		{ "Comment", "/** How many dimensions input data has */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "How many dimensions input data has" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions = { "TargetDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, TargetDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Specifies the type of solver to use. The additive solver requires normalization, for the\n\x09\x09most part, whereas the Interpolative solver is not as reliant on it. The interpolative\n\x09\x09solver also has smoother blending, whereas the additive solver requires more targets but\n\x09\x09has a more precise control over the influence of each target.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Specifies the type of solver to use. The additive solver requires normalization, for the\n              most part, whereas the Interpolative solver is not as reliant on it. The interpolative\n              solver also has smoother blending, whereas the additive solver requires more targets but\n              has a more precise control over the influence of each target." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType = { "SolverType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, SolverType), Z_Construct_UEnum_AnimGraphRuntime_ERBFSolverType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_MetaData)) }; // 3640099185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Default radius for each target. \n\x09*/" },
		{ "EditCondition", "!bAutomaticRadius" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Default radius for each target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/* Automatically pick the radius based on the average distance between targets */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Automatically pick the radius based on the average distance between targets" },
	};
#endif
	void Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius_SetBit(void* Obj)
	{
		((FRBFParams*)Obj)->bAutomaticRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius = { "bAutomaticRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRBFParams), &Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, Function), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_MetaData)) }; // 4048311969
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_MetaData)) }; // 67002488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Axis to use when DistanceMethod is SwingAngle */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Axis to use when DistanceMethod is SwingAngle" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, TwistAxis), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis_MetaData)) }; // 906799129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Weight below which we shouldn't bother returning a contribution from a target */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Weight below which we shouldn't bother returning a contribution from a target" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, WeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Method to use for normalizing the weight */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Method to use for normalizing the weight" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod = { "NormalizeMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, NormalizeMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFNormalizeMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_MetaData)) }; // 1127806640
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Rotation or position of median (used for normalization) */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Rotation or position of median (used for normalization)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference = { "MedianReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, MedianReference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Minimum distance used for median */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Minimum distance used for median" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin = { "MedianMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, MedianMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Maximum distance used for median */" },
		{ "ModuleRelativePath", "Public/RBF/RBFSolver.h" },
		{ "ToolTip", "Maximum distance used for median" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax = { "MedianMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRBFParams, MedianMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TargetDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_SolverType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_bAutomaticRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_DistanceMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_WeightThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_NormalizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRBFParams_Statics::NewProp_MedianMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RBFParams",
		sizeof(FRBFParams),
		alignof(FRBFParams),
		Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRBFParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRBFParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RBFParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RBFParams.InnerSingleton, Z_Construct_UScriptStruct_FRBFParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RBFParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::EnumInfo[] = {
		{ ERBFSolverType_StaticEnum, TEXT("ERBFSolverType"), &Z_Registration_Info_UEnum_ERBFSolverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3640099185U) },
		{ ERBFFunctionType_StaticEnum, TEXT("ERBFFunctionType"), &Z_Registration_Info_UEnum_ERBFFunctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4048311969U) },
		{ ERBFDistanceMethod_StaticEnum, TEXT("ERBFDistanceMethod"), &Z_Registration_Info_UEnum_ERBFDistanceMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 67002488U) },
		{ ERBFNormalizeMethod_StaticEnum, TEXT("ERBFNormalizeMethod"), &Z_Registration_Info_UEnum_ERBFNormalizeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1127806640U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::ScriptStructInfo[] = {
		{ FRBFEntry::StaticStruct, Z_Construct_UScriptStruct_FRBFEntry_Statics::NewStructOps, TEXT("RBFEntry"), &Z_Registration_Info_UScriptStruct_RBFEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRBFEntry), 3393313205U) },
		{ FRBFTarget::StaticStruct, Z_Construct_UScriptStruct_FRBFTarget_Statics::NewStructOps, TEXT("RBFTarget"), &Z_Registration_Info_UScriptStruct_RBFTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRBFTarget), 3928531900U) },
		{ FRBFParams::StaticStruct, Z_Construct_UScriptStruct_FRBFParams_Statics::NewStructOps, TEXT("RBFParams"), &Z_Registration_Info_UScriptStruct_RBFParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRBFParams), 637132977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_2751213640(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
