// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CorrectivesRBFSolver.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorrectivesRBFSolver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FCorrectivesRBFEntry();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FCorrectivesRBFTarget();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectives();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry;
class UScriptStruct* FCorrectivesRBFEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCorrectivesRBFEntry, (UObject*)Z_Construct_UPackage__Script_PoseCorrectives(), TEXT("CorrectivesRBFEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.OuterSingleton;
}
template<> POSECORRECTIVES_API UScriptStruct* StaticStruct<FCorrectivesRBFEntry>()
{
	return FCorrectivesRBFEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct storing a particular entry within the RBF */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Struct storing a particular entry within the RBF" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCorrectivesRBFEntry>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Set of values for this target, size must be TargetDimensions  */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Set of values for this target, size must be TargetDimensions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCorrectivesRBFEntry, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
		nullptr,
		&NewStructOps,
		"CorrectivesRBFEntry",
		sizeof(FCorrectivesRBFEntry),
		alignof(FCorrectivesRBFEntry),
		Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCorrectivesRBFEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.InnerSingleton, Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCorrectivesRBFTarget>() == std::is_polymorphic<FCorrectivesRBFEntry>(), "USTRUCT FCorrectivesRBFTarget cannot be polymorphic unless super FCorrectivesRBFEntry is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget;
class UScriptStruct* FCorrectivesRBFTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCorrectivesRBFTarget, (UObject*)Z_Construct_UPackage__Script_PoseCorrectives(), TEXT("CorrectivesRBFTarget"));
	}
	return Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.OuterSingleton;
}
template<> POSECORRECTIVES_API UScriptStruct* StaticStruct<FCorrectivesRBFTarget>()
{
	return FCorrectivesRBFTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about a particular target in the RBF, including scaling factor */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Data about a particular target in the RBF, including scaling factor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCorrectivesRBFTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** How large the influence of this target. */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "How large the influence of this target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCorrectivesRBFTarget, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_ScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Whether we want to apply an additional custom curve when activating this target. \n\x09    Ignored if the solver type is Interpolative. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Whether we want to apply an additional custom curve when activating this target.\n          Ignored if the solver type is Interpolative." },
	};
#endif
	void Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FCorrectivesRBFTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCorrectivesRBFTarget), &Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n\x09\x09Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Custom curve to apply to activation of this target, if bApplyCustomCurve is true.\n              Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCorrectivesRBFTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_CustomCurve_MetaData)) }; // 778017158
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the distance method used to calculate the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Override the distance method used to calculate the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCorrectivesRBFTarget, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod_MetaData)) }; // 67002488
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override the falloff function used to smooth the distance from this target to\n\x09\x09the input. Ignored if the solver type is Interpolative. */" },
		{ "ModuleRelativePath", "Public/CorrectivesRBFSolver.h" },
		{ "ToolTip", "Override the falloff function used to smooth the distance from this target to\n              the input. Ignored if the solver type is Interpolative." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCorrectivesRBFTarget, FunctionType), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType_MetaData)) }; // 4048311969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_ScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_bApplyCustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_DistanceMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewProp_FunctionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
		Z_Construct_UScriptStruct_FCorrectivesRBFEntry,
		&NewStructOps,
		"CorrectivesRBFTarget",
		sizeof(FCorrectivesRBFTarget),
		alignof(FCorrectivesRBFTarget),
		Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCorrectivesRBFTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.InnerSingleton, Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_CorrectivesRBFSolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_CorrectivesRBFSolver_h_Statics::ScriptStructInfo[] = {
		{ FCorrectivesRBFEntry::StaticStruct, Z_Construct_UScriptStruct_FCorrectivesRBFEntry_Statics::NewStructOps, TEXT("CorrectivesRBFEntry"), &Z_Registration_Info_UScriptStruct_CorrectivesRBFEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCorrectivesRBFEntry), 3336387555U) },
		{ FCorrectivesRBFTarget::StaticStruct, Z_Construct_UScriptStruct_FCorrectivesRBFTarget_Statics::NewStructOps, TEXT("CorrectivesRBFTarget"), &Z_Registration_Info_UScriptStruct_CorrectivesRBFTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCorrectivesRBFTarget), 2180022084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_CorrectivesRBFSolver_h_2780720032(TEXT("/Script/PoseCorrectives"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_CorrectivesRBFSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_CorrectivesRBFSolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
