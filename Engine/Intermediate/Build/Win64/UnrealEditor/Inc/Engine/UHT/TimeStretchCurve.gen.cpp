// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeStretchCurve() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimeStretchCurveMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveMarker();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimeStretchCurveMapping;
	static UEnum* ETimeStretchCurveMapping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimeStretchCurveMapping"));
		}
		return Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimeStretchCurveMapping>()
	{
		return ETimeStretchCurveMapping_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enumerators[] = {
		{ "ETimeStretchCurveMapping::T_Original", (int64)ETimeStretchCurveMapping::T_Original },
		{ "ETimeStretchCurveMapping::T_TargetMin", (int64)ETimeStretchCurveMapping::T_TargetMin },
		{ "ETimeStretchCurveMapping::T_TargetMax", (int64)ETimeStretchCurveMapping::T_TargetMax },
		{ "ETimeStretchCurveMapping::MAX", (int64)ETimeStretchCurveMapping::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enum_MetaDataParams[] = {
		{ "MAX.Name", "ETimeStretchCurveMapping::MAX" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "T_Original.Name", "ETimeStretchCurveMapping::T_Original" },
		{ "T_TargetMax.Name", "ETimeStretchCurveMapping::T_TargetMax" },
		{ "T_TargetMin.Name", "ETimeStretchCurveMapping::T_TargetMin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETimeStretchCurveMapping",
		"ETimeStretchCurveMapping",
		Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETimeStretchCurveMapping()
	{
		if (!Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton, Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker;
class UScriptStruct* FTimeStretchCurveMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurveMarker, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurveMarker"));
	}
	return Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurveMarker>()
{
	return FTimeStretchCurveMarker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurveMarker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.ETimeStretchCurveMapping" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Time, FTimeStretchCurveMarker), nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurveMarker, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurveMarker, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewProp_Alpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurveMarker",
		sizeof(FTimeStretchCurveMarker),
		alignof(FTimeStretchCurveMarker),
		Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveMarker()
	{
		if (!Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.InnerSingleton, Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimeStretchCurve;
class UScriptStruct* FTimeStretchCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimeStretchCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimeStretchCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurve"));
	}
	return Z_Registration_Info_UScriptStruct_TimeStretchCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurve>()
{
	return FTimeStretchCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeStretchCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValueMinPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValueMinPrecision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sum_dT_i_by_C_i_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sum_dT_i_by_C_i;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n\x09= Time Stretch Curve =\n\n\x09= What is it?\n\n\x09\x09The Time Stretch Curve is an optional float curve that montages can\n\x09\x09use to define where a montage is allowed to speed up or slow down.\n\x09\x09Let's say we have a montage of default play time T_Original.\n\x09\x09We now want that montage to play for a different T_Target play time\n\x09\x09Typically we would uniformly play rate the animation to reach that goal.\n\n\x09\x09The Time Stretch Curve allows doing the same thing but non uniformly,\n\x09\x09""by defining which regions can be play rated more or less.\n\n\x09\x09The Curve values are normalized.\n\x09\x09So a Curve value of 0 means \"don't play rate this\".\n\x09\x09""And a Curve value of 1 means \"play rate this the most\".\n\x09\x09Intermediate values will be weighted accordingly.\n\n\x09\x09Imagine the following scenario, you have a character attacking with a staff.\n\x09\x09The animation is authored with holds after striking.\n\x09\x09Let's say the character levels up over the course of the game, and\n\x09\x09their attacks are getting faster and faster (play time is shorter).\n\n\x09\x09""By using a Time Stretch Curve, most of the time compression could happen\n\x09\x09""during the holds. So the strikes look mostly unaffected.\n\x09\x09This allows using a single animation, and scaling it for very different\n\x09\x09""desired play times.\n\n\x09= How does it work?\n\n\x09\x09Given a Montage of length T_Original, and a float curve C.\n\x09\x09""Curve C is sampled over N segments of fixed time 'SamplingTimeStep'.\n\x09\x09""Each element, C_i is normalized. 0 <= C_i <= 1\n\x09\x09""and 0 <= i <= N.\n\n\x09\x09We have Sum(SamplingTimeStep) = T_Original = N * SamplingTimeStep\n\x09\x09SamplingTimeStep = T_Original / N\n\n\x09\x09Given a different length T_Target,\n\x09\x09""C remaps positions from T_Target to T_Original according to the following function:\n\x09\x09""dTO = dT_i * U * (1 + S * C_i)\n\x09\x09where:\n\x09\x09Sum(dTO) = T_Original\n\x09\x09Sum(dT_i) = T_Target\n\x09\x09U = UniformPlayRate\n\x09\x09S = Curve Scale Factor\n\x09\x09""C_i = sampled curve value, constant over the interval dTO\n\n\x09\x09""dTO is fixed, based on the chosen 'SamplingTimeStep',\n\x09\x09""but in practice we can combine consecutive segments that have the same C_i value.\n\n\x09\x09We would like U to be 1 (or -1) as much as possible.\n\x09\x09Meaning the Curve should do all the remapping whenever possible.\n\x09\x09U(niformPlayRate) should only come into play when C can't remap T_Target to T_Original on its own.\n\x09\x09This can happen when trying to speed up the animation,\n\x09\x09""but the Curve is not enough to reach that time compression.\n\x09\x09In that event, uniform scaling kicks in.\n\n\x09\x09We call PR_i (or OverallPlayRate for Segment i)\n\x09\x09PR_i = U * (1 + S * C_i)\n\x09\x09""dTO = dT_i * PR_i\n\n\x09\x09We also want PR_i > 0, that is it should never backtrack or pause during playback of animation.\n\x09\x09""A Montage can still play in reverse with U < 0.\n\n\x09= How is T_Target defined?\n\n\x09\x09When we play a Montage with a PlayRate of PR, we assume this means:\n\x09\x09T_Target = T_Original * PR\n\x09\x09So this system does not change the interface for playing a montage.\n\n\x09\x09If a curve is not defined, the mapping is defined as:\n\x09\x09""dTO_i = dT_i * U\n\n\x09\x09If a a curve is defined:\n\x09\x09""dTO_i = dT_i * U * (1 + S * C_i)\n\n\x09\x09We can see that no curve means S == 0.\n\x09\x09""Also if we're not scaling the montage, T_Target == T_Original, we also have S == 0.\n\n\x09\x09So, this makes the curve completely optional. And it seamlessly integrates with the current montage interface.\n\x09\x09If you want playback time to be half, that means playing the montage with a play rate of 2.\n\x09\x09If there is a TimeStretchCurve, it will be used.\n\x09\x09""But regardless or using a curve or not, play back time is guaranteed.\n\n\x09= Finding U and S =\n\n\x09\x09Ideally, we could figure out what U and S are given a T_Target play time.\n\x09\x09Unfortunately, the math for this is very complex.\n\n\x09\x09We update the montage position like this:\n\x09\x09""dTO_i = dT_i * U * (1 + C_i)\n\n\x09\x09We sum this over the N time segments:\n\x09\x09Sum(dTO_i) = Sum(dT_i * U * (1 + C_i))\n\x09\x09Sum(dTO_i) = Sum(dT_i) * U + Sum(dT_i * U * S * C_i))\n\x09\x09T_Original = T_Target * U + U * S * Sum(dT_i * C_i)\n\n\x09\x09Where:\n\x09\x09S = (T_Original - T_Target * U) / (U * Sum(dT_i * C_i))\n\n\x09\x09If we were able to get dT_i constant, we could pull it out and get:\n\x09\x09S = (T_Original - T_Target * U) / (U * dT * Sum(C_i))\n\x09\x09Where Sum(C_i) can be pre-computed.\n\n\x09\x09Unfortunately we don't have dT_i constant, and we can't,\n\x09\x09since it is variable, and dependent on what S and U are.\n\n\x09\x09So our approach instead is to precompute lower and upper bounds for this curve.\n\x09\x09We cache the results for dT_i for S = 100.f and S = -1.f + 0.01f\n\x09\x09This gives us data for T_Target_Min and T_Target_Max.\n\x09\x09Within these bounds, we can approximate dT_i, and also Sum(dT_i * C_i) by linear interpolation.\n\x09\x09Outside of these bounds, we rely on U to get us to our desired T_Target play back time.\n\n\x09\x09'ConditionallyUpdateTimeStretchCurveCachedData' takes care of figuring out U and S\n\x09\x09""based on a given T_Target play back time.\n\n\x09= 'target' and 'original' space\n\n\x09\x09""At run time, we generate a set of markers in what we call 'target' and 'original' space.\n\x09\x09'original' space means in the original play time the montage was authored in.\n\x09\x09So that maps to actual frames of animation and actual position in the montage.\n\n\x09\x09'target' space is the same set of markers, but mapped in play back time.\n\x09\x09That is the actual time it takes to play back this montage.\n\n\x09\x09Taking our play rate equation from above, it is:\n\x09\x09""dT_Original = dT_Target * U * (1 + S * C_i)\n\n\x09\x09We see that montage position = playback time * play rate.\n\n\x09\x09Once we have mapped our markers in both 'target' and 'original' space,\n\x09\x09we can easily go from one to the other, since time moves linearly between markers.\n\x09\x09Since between markers the play rate is defined as constant values:\n\x09\x09PR_i = U * (1.f + S * C_i).\n\x09\x09""And we know that C_i is constant between two markers.\n\n\x09\x09So if we know between which markers we are in one space, we can switch to the other space instantly,\n\x09\x09""as our relative position between these markers will be the same.\n\n\x09\x09So by jumping between these spaces, we can quickly go from a montage position to its playback time.\n\x09\x09We can increase the playback time by the current's frame deltatime,\n\x09\x09""and jump back to the corresponding frame of animation.\n\x09\x09That's in a nutshell how this system works.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "= Time Stretch Curve =\n\n= What is it?\n\n        The Time Stretch Curve is an optional float curve that montages can\n        use to define where a montage is allowed to speed up or slow down.\n        Let's say we have a montage of default play time T_Original.\n        We now want that montage to play for a different T_Target play time\n        Typically we would uniformly play rate the animation to reach that goal.\n\n        The Time Stretch Curve allows doing the same thing but non uniformly,\n        by defining which regions can be play rated more or less.\n\n        The Curve values are normalized.\n        So a Curve value of 0 means \"don't play rate this\".\n        And a Curve value of 1 means \"play rate this the most\".\n        Intermediate values will be weighted accordingly.\n\n        Imagine the following scenario, you have a character attacking with a staff.\n        The animation is authored with holds after striking.\n        Let's say the character levels up over the course of the game, and\n        their attacks are getting faster and faster (play time is shorter).\n\n        By using a Time Stretch Curve, most of the time compression could happen\n        during the holds. So the strikes look mostly unaffected.\n        This allows using a single animation, and scaling it for very different\n        desired play times.\n\n= How does it work?\n\n        Given a Montage of length T_Original, and a float curve C.\n        Curve C is sampled over N segments of fixed time 'SamplingTimeStep'.\n        Each element, C_i is normalized. 0 <= C_i <= 1\n        and 0 <= i <= N.\n\n        We have Sum(SamplingTimeStep) = T_Original = N * SamplingTimeStep\n        SamplingTimeStep = T_Original / N\n\n        Given a different length T_Target,\n        C remaps positions from T_Target to T_Original according to the following function:\n        dTO = dT_i * U * (1 + S * C_i)\n        where:\n        Sum(dTO) = T_Original\n        Sum(dT_i) = T_Target\n        U = UniformPlayRate\n        S = Curve Scale Factor\n        C_i = sampled curve value, constant over the interval dTO\n\n        dTO is fixed, based on the chosen 'SamplingTimeStep',\n        but in practice we can combine consecutive segments that have the same C_i value.\n\n        We would like U to be 1 (or -1) as much as possible.\n        Meaning the Curve should do all the remapping whenever possible.\n        U(niformPlayRate) should only come into play when C can't remap T_Target to T_Original on its own.\n        This can happen when trying to speed up the animation,\n        but the Curve is not enough to reach that time compression.\n        In that event, uniform scaling kicks in.\n\n        We call PR_i (or OverallPlayRate for Segment i)\n        PR_i = U * (1 + S * C_i)\n        dTO = dT_i * PR_i\n\n        We also want PR_i > 0, that is it should never backtrack or pause during playback of animation.\n        A Montage can still play in reverse with U < 0.\n\n= How is T_Target defined?\n\n        When we play a Montage with a PlayRate of PR, we assume this means:\n        T_Target = T_Original * PR\n        So this system does not change the interface for playing a montage.\n\n        If a curve is not defined, the mapping is defined as:\n        dTO_i = dT_i * U\n\n        If a a curve is defined:\n        dTO_i = dT_i * U * (1 + S * C_i)\n\n        We can see that no curve means S == 0.\n        Also if we're not scaling the montage, T_Target == T_Original, we also have S == 0.\n\n        So, this makes the curve completely optional. And it seamlessly integrates with the current montage interface.\n        If you want playback time to be half, that means playing the montage with a play rate of 2.\n        If there is a TimeStretchCurve, it will be used.\n        But regardless or using a curve or not, play back time is guaranteed.\n\n= Finding U and S =\n\n        Ideally, we could figure out what U and S are given a T_Target play time.\n        Unfortunately, the math for this is very complex.\n\n        We update the montage position like this:\n        dTO_i = dT_i * U * (1 + C_i)\n\n        We sum this over the N time segments:\n        Sum(dTO_i) = Sum(dT_i * U * (1 + C_i))\n        Sum(dTO_i) = Sum(dT_i) * U + Sum(dT_i * U * S * C_i))\n        T_Original = T_Target * U + U * S * Sum(dT_i * C_i)\n\n        Where:\n        S = (T_Original - T_Target * U) / (U * Sum(dT_i * C_i))\n\n        If we were able to get dT_i constant, we could pull it out and get:\n        S = (T_Original - T_Target * U) / (U * dT * Sum(C_i))\n        Where Sum(C_i) can be pre-computed.\n\n        Unfortunately we don't have dT_i constant, and we can't,\n        since it is variable, and dependent on what S and U are.\n\n        So our approach instead is to precompute lower and upper bounds for this curve.\n        We cache the results for dT_i for S = 100.f and S = -1.f + 0.01f\n        This gives us data for T_Target_Min and T_Target_Max.\n        Within these bounds, we can approximate dT_i, and also Sum(dT_i * C_i) by linear interpolation.\n        Outside of these bounds, we rely on U to get us to our desired T_Target play back time.\n\n        'ConditionallyUpdateTimeStretchCurveCachedData' takes care of figuring out U and S\n        based on a given T_Target play back time.\n\n= 'target' and 'original' space\n\n        At run time, we generate a set of markers in what we call 'target' and 'original' space.\n        'original' space means in the original play time the montage was authored in.\n        So that maps to actual frames of animation and actual position in the montage.\n\n        'target' space is the same set of markers, but mapped in play back time.\n        That is the actual time it takes to play back this montage.\n\n        Taking our play rate equation from above, it is:\n        dT_Original = dT_Target * U * (1 + S * C_i)\n\n        We see that montage position = playback time * play rate.\n\n        Once we have mapped our markers in both 'target' and 'original' space,\n        we can easily go from one to the other, since time moves linearly between markers.\n        Since between markers the play rate is defined as constant values:\n        PR_i = U * (1.f + S * C_i).\n        And we know that C_i is constant between two markers.\n\n        So if we know between which markers we are in one space, we can switch to the other space instantly,\n        as our relative position between these markers will be the same.\n\n        So by jumping between these spaces, we can quickly go from a montage position to its playback time.\n        We can increase the playback time by the current's frame deltatime,\n        and jump back to the corresponding frame of animation.\n        That's in a nutshell how this system works." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/**\n\x09\x09""Desired Sampling rate of above curve.\n\x09\x09This will be rounded off so we sample the whole curve\n\x09\x09with a fixed time step.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Desired Sampling rate of above curve.\nThis will be rounded off so we sample the whole curve\nwith a fixed time step." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurve, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/**\n\x09\x09Minimum delta allowed between consecutive sampled segments.\n\x09\x09""below this value, segments will be combined\n\x09\x09to optimize number of markers.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Minimum delta allowed between consecutive sampled segments.\nbelow this value, segments will be combined\nto optimize number of markers." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision = { "CurveValueMinPrecision", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurve, CurveValueMinPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimeStretchCurveMarker, METADATA_PARAMS(nullptr, 0) }; // 1757111829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Optimized list of markers. */" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Optimized list of markers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurve, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_MetaData)) }; // 1757111829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.ETimeStretchCurveMapping" },
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Cached Sum(dT_i * C_i) */" },
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
		{ "ToolTip", "Cached Sum(dT_i * C_i)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i = { "Sum_dT_i_by_C_i", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Sum_dT_i_by_C_i, FTimeStretchCurve), nullptr, nullptr, STRUCT_OFFSET(FTimeStretchCurve, Sum_dT_i_by_C_i), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_SamplingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_CurveValueMinPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Markers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewProp_Sum_dT_i_by_C_i,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurve",
		sizeof(FTimeStretchCurve),
		alignof(FTimeStretchCurve),
		Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_TimeStretchCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimeStretchCurve.InnerSingleton, Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimeStretchCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance;
class UScriptStruct* FTimeStretchCurveInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeStretchCurveInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimeStretchCurveInstance"));
	}
	return Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeStretchCurveInstance>()
{
	return FTimeStretchCurveInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidData_MetaData[];
#endif
		static void NewProp_bHasValidData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeStretchCurveInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/TimeStretchCurve.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_SetBit(void* Obj)
	{
		((FTimeStretchCurveInstance*)Obj)->bHasValidData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData = { "bHasValidData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimeStretchCurveInstance), &Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimeStretchCurveInstance",
		sizeof(FTimeStretchCurveInstance),
		alignof(FTimeStretchCurveInstance),
		Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurveInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.InnerSingleton, Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::EnumInfo[] = {
		{ ETimeStretchCurveMapping_StaticEnum, TEXT("ETimeStretchCurveMapping"), &Z_Registration_Info_UEnum_ETimeStretchCurveMapping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3032720238U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::ScriptStructInfo[] = {
		{ FTimeStretchCurveMarker::StaticStruct, Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewStructOps, TEXT("TimeStretchCurveMarker"), &Z_Registration_Info_UScriptStruct_TimeStretchCurveMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeStretchCurveMarker), 1757111829U) },
		{ FTimeStretchCurve::StaticStruct, Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewStructOps, TEXT("TimeStretchCurve"), &Z_Registration_Info_UScriptStruct_TimeStretchCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeStretchCurve), 483823241U) },
		{ FTimeStretchCurveInstance::StaticStruct, Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewStructOps, TEXT("TimeStretchCurveInstance"), &Z_Registration_Info_UScriptStruct_TimeStretchCurveInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeStretchCurveInstance), 892377991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_3650624768(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
