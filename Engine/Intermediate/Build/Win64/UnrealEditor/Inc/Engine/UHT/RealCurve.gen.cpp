// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RealCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveInterpMode;
	static UEnum* ERichCurveInterpMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveInterpMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveInterpMode"));
		}
		return Z_Registration_Info_UEnum_ERichCurveInterpMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveInterpMode>()
	{
		return ERichCurveInterpMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enumerators[] = {
		{ "RCIM_Linear", (int64)RCIM_Linear },
		{ "RCIM_Constant", (int64)RCIM_Constant },
		{ "RCIM_Cubic", (int64)RCIM_Cubic },
		{ "RCIM_None", (int64)RCIM_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Method of interpolation between this key and the next. */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "RCIM_Constant.Comment", "/** Use a constant value. Represents stepped values. */" },
		{ "RCIM_Constant.DisplayName", "Constant" },
		{ "RCIM_Constant.Name", "RCIM_Constant" },
		{ "RCIM_Constant.ToolTip", "Use a constant value. Represents stepped values." },
		{ "RCIM_Cubic.Comment", "/** Cubic interpolation. See TangentMode for different cubic interpolation options. */" },
		{ "RCIM_Cubic.DisplayName", "Cubic" },
		{ "RCIM_Cubic.Name", "RCIM_Cubic" },
		{ "RCIM_Cubic.ToolTip", "Cubic interpolation. See TangentMode for different cubic interpolation options." },
		{ "RCIM_Linear.Comment", "/** Use linear interpolation between values. */" },
		{ "RCIM_Linear.DisplayName", "Linear" },
		{ "RCIM_Linear.Name", "RCIM_Linear" },
		{ "RCIM_Linear.ToolTip", "Use linear interpolation between values." },
		{ "RCIM_None.Comment", "/** No interpolation. */" },
		{ "RCIM_None.Hidden", "" },
		{ "RCIM_None.Name", "RCIM_None" },
		{ "RCIM_None.ToolTip", "No interpolation." },
		{ "ToolTip", "Method of interpolation between this key and the next." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERichCurveInterpMode",
		"ERichCurveInterpMode",
		Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode()
	{
		if (!Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveInterpMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERichCurveInterpMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveExtrapolation;
	static UEnum* ERichCurveExtrapolation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveExtrapolation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveExtrapolation"));
		}
		return Z_Registration_Info_UEnum_ERichCurveExtrapolation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERichCurveExtrapolation>()
	{
		return ERichCurveExtrapolation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enumerators[] = {
		{ "RCCE_Cycle", (int64)RCCE_Cycle },
		{ "RCCE_CycleWithOffset", (int64)RCCE_CycleWithOffset },
		{ "RCCE_Oscillate", (int64)RCCE_Oscillate },
		{ "RCCE_Linear", (int64)RCCE_Linear },
		{ "RCCE_Constant", (int64)RCCE_Constant },
		{ "RCCE_None", (int64)RCCE_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumerates extrapolation options. */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "RCCE_Constant.Comment", "/** Use a constant value for extrapolation */" },
		{ "RCCE_Constant.DisplayName", "Constant" },
		{ "RCCE_Constant.Name", "RCCE_Constant" },
		{ "RCCE_Constant.ToolTip", "Use a constant value for extrapolation" },
		{ "RCCE_Cycle.Comment", "/** Repeat the curve without an offset. */" },
		{ "RCCE_Cycle.DisplayName", "Cycle" },
		{ "RCCE_Cycle.Name", "RCCE_Cycle" },
		{ "RCCE_Cycle.ToolTip", "Repeat the curve without an offset." },
		{ "RCCE_CycleWithOffset.Comment", "/** Repeat the curve with an offset relative to the first or last key's value. */" },
		{ "RCCE_CycleWithOffset.DisplayName", "CycleWithOffset" },
		{ "RCCE_CycleWithOffset.Name", "RCCE_CycleWithOffset" },
		{ "RCCE_CycleWithOffset.ToolTip", "Repeat the curve with an offset relative to the first or last key's value." },
		{ "RCCE_Linear.Comment", "/** Use a linearly increasing value for extrapolation.*/" },
		{ "RCCE_Linear.DisplayName", "Linear" },
		{ "RCCE_Linear.Name", "RCCE_Linear" },
		{ "RCCE_Linear.ToolTip", "Use a linearly increasing value for extrapolation." },
		{ "RCCE_None.Comment", "/** No Extrapolation */" },
		{ "RCCE_None.DisplayName", "None" },
		{ "RCCE_None.Name", "RCCE_None" },
		{ "RCCE_None.ToolTip", "No Extrapolation" },
		{ "RCCE_Oscillate.Comment", "/** Sinusoidally extrapolate. */" },
		{ "RCCE_Oscillate.DisplayName", "Oscillate" },
		{ "RCCE_Oscillate.Name", "RCCE_Oscillate" },
		{ "RCCE_Oscillate.ToolTip", "Sinusoidally extrapolate." },
		{ "ToolTip", "Enumerates extrapolation options." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERichCurveExtrapolation",
		"ERichCurveExtrapolation",
		Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation()
	{
		if (!Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveExtrapolation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERichCurveExtrapolation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRealCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FRealCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RealCurve;
class UScriptStruct* FRealCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RealCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RealCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RealCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RealCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRealCurve>()
{
	return FRealCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRealCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A rich, editable float curve */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Default value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealCurve, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Pre-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Pre-infinity extrapolation state" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealCurve, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap_MetaData)) }; // 600995221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Post-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Classes/Curves/RealCurve.h" },
		{ "ToolTip", "Post-infinity extrapolation state" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealCurve, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap_MetaData)) }; // 600995221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PreInfinityExtrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealCurve_Statics::NewProp_PostInfinityExtrap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FIndexedCurve,
		&NewStructOps,
		"RealCurve",
		sizeof(FRealCurve),
		alignof(FRealCurve),
		Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RealCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RealCurve.InnerSingleton, Z_Construct_UScriptStruct_FRealCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RealCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::EnumInfo[] = {
		{ ERichCurveInterpMode_StaticEnum, TEXT("ERichCurveInterpMode"), &Z_Registration_Info_UEnum_ERichCurveInterpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931686469U) },
		{ ERichCurveExtrapolation_StaticEnum, TEXT("ERichCurveExtrapolation"), &Z_Registration_Info_UEnum_ERichCurveExtrapolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 600995221U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::ScriptStructInfo[] = {
		{ FRealCurve::StaticStruct, Z_Construct_UScriptStruct_FRealCurve_Statics::NewStructOps, TEXT("RealCurve"), &Z_Registration_Info_UScriptStruct_RealCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealCurve), 2814808721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_146367624(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
