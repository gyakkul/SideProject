// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlphaBlend() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlendArgs();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlphaBlendOption;
	static UEnum* EAlphaBlendOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaBlendOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaBlendOption"));
		}
		return Z_Registration_Info_UEnum_EAlphaBlendOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAlphaBlendOption>()
	{
		return EAlphaBlendOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enumerators[] = {
		{ "EAlphaBlendOption::Linear", (int64)EAlphaBlendOption::Linear },
		{ "EAlphaBlendOption::Cubic", (int64)EAlphaBlendOption::Cubic },
		{ "EAlphaBlendOption::HermiteCubic", (int64)EAlphaBlendOption::HermiteCubic },
		{ "EAlphaBlendOption::Sinusoidal", (int64)EAlphaBlendOption::Sinusoidal },
		{ "EAlphaBlendOption::QuadraticInOut", (int64)EAlphaBlendOption::QuadraticInOut },
		{ "EAlphaBlendOption::CubicInOut", (int64)EAlphaBlendOption::CubicInOut },
		{ "EAlphaBlendOption::QuarticInOut", (int64)EAlphaBlendOption::QuarticInOut },
		{ "EAlphaBlendOption::QuinticInOut", (int64)EAlphaBlendOption::QuinticInOut },
		{ "EAlphaBlendOption::CircularIn", (int64)EAlphaBlendOption::CircularIn },
		{ "EAlphaBlendOption::CircularOut", (int64)EAlphaBlendOption::CircularOut },
		{ "EAlphaBlendOption::CircularInOut", (int64)EAlphaBlendOption::CircularInOut },
		{ "EAlphaBlendOption::ExpIn", (int64)EAlphaBlendOption::ExpIn },
		{ "EAlphaBlendOption::ExpOut", (int64)EAlphaBlendOption::ExpOut },
		{ "EAlphaBlendOption::ExpInOut", (int64)EAlphaBlendOption::ExpInOut },
		{ "EAlphaBlendOption::Custom", (int64)EAlphaBlendOption::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enum_MetaDataParams[] = {
		{ "CircularIn.DisplayName", "Circular In" },
		{ "CircularIn.Grouping", "Circular" },
		{ "CircularIn.Name", "EAlphaBlendOption::CircularIn" },
		{ "CircularIn.ToolTip", "Circular-in interpolation" },
		{ "CircularInOut.DisplayName", "Circular InOut" },
		{ "CircularInOut.Grouping", "Circular" },
		{ "CircularInOut.Name", "EAlphaBlendOption::CircularInOut" },
		{ "CircularInOut.ToolTip", "Circular in-out interpolation" },
		{ "CircularOut.DisplayName", "Circular Out" },
		{ "CircularOut.Grouping", "Circular" },
		{ "CircularOut.Name", "EAlphaBlendOption::CircularOut" },
		{ "CircularOut.ToolTip", "Circular-out interpolation" },
		{ "Cubic.DisplayName", "Cubic In" },
		{ "Cubic.Grouping", "Cubic" },
		{ "Cubic.Name", "EAlphaBlendOption::Cubic" },
		{ "Cubic.ToolTip", "Cubic-in interpolation" },
		{ "CubicInOut.DisplayName", "Cubic InOut" },
		{ "CubicInOut.Grouping", "Cubic" },
		{ "CubicInOut.Name", "EAlphaBlendOption::CubicInOut" },
		{ "CubicInOut.ToolTip", "Cubic in-out interpolation" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Grouping", "Custom" },
		{ "Custom.Name", "EAlphaBlendOption::Custom" },
		{ "Custom.ToolTip", "Custom interpolation, will use custom curve inside an FAlphaBlend or linear if none has been set" },
		{ "ExpIn.DisplayName", "Exponential In" },
		{ "ExpIn.Grouping", "Exponential" },
		{ "ExpIn.Name", "EAlphaBlendOption::ExpIn" },
		{ "ExpIn.ToolTip", "Exponential-in interpolation" },
		{ "ExpInOut.DisplayName", "Exponential InOut" },
		{ "ExpInOut.Grouping", "Exponential" },
		{ "ExpInOut.Name", "EAlphaBlendOption::ExpInOut" },
		{ "ExpInOut.ToolTip", "Exponential in-out interpolation" },
		{ "ExpOut.DisplayName", "Exponential Out" },
		{ "ExpOut.Grouping", "Exponential" },
		{ "ExpOut.Name", "EAlphaBlendOption::ExpOut" },
		{ "ExpOut.ToolTip", "Exponential-Out interpolation" },
		{ "HermiteCubic.DisplayName", "Hermite-Cubic InOut" },
		{ "HermiteCubic.Grouping", "Cubic" },
		{ "HermiteCubic.Name", "EAlphaBlendOption::HermiteCubic" },
		{ "HermiteCubic.ToolTip", "Hermite-Cubic" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Grouping", "Linear" },
		{ "Linear.Name", "EAlphaBlendOption::Linear" },
		{ "Linear.ToolTip", "Linear interpolation" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "QuadraticInOut.DisplayName", "Quadratic InOut" },
		{ "QuadraticInOut.Grouping", "Quadratic" },
		{ "QuadraticInOut.Name", "EAlphaBlendOption::QuadraticInOut" },
		{ "QuadraticInOut.ToolTip", "Quadratic in-out interpolation" },
		{ "QuarticInOut.DisplayName", "Quartic InOut" },
		{ "QuarticInOut.Grouping", "Quartic" },
		{ "QuarticInOut.Name", "EAlphaBlendOption::QuarticInOut" },
		{ "QuarticInOut.ToolTip", "Quartic in-out interpolation" },
		{ "QuinticInOut.DisplayName", "Quintic InOut" },
		{ "QuinticInOut.Grouping", "Quintic" },
		{ "QuinticInOut.Name", "EAlphaBlendOption::QuinticInOut" },
		{ "QuinticInOut.ToolTip", "Quintic in-out interpolation" },
		{ "Sinusoidal.DisplayName", "Sinusoidal" },
		{ "Sinusoidal.Grouping", "Sinusoidal" },
		{ "Sinusoidal.Name", "EAlphaBlendOption::Sinusoidal" },
		{ "Sinusoidal.ToolTip", "Sinusoidal interpolation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAlphaBlendOption",
		"EAlphaBlendOption",
		Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption()
	{
		if (!Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton, Z_Construct_UEnum_Engine_EAlphaBlendOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlphaBlendOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlphaBlendArgs;
class UScriptStruct* FAlphaBlendArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlphaBlendArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlphaBlendArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlendArgs, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AlphaBlendArgs"));
	}
	return Z_Registration_Info_UScriptStruct_AlphaBlendArgs.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAlphaBlendArgs>()
{
	return FAlphaBlendArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Alpha Blend construction arguments. Used for creation of an AlphaBlend.\n */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Alpha Blend construction arguments. Used for creation of an AlphaBlend." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlphaBlendArgs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** If you're using Custom BlendOption, you can specify curve */" },
		{ "DisplayAfter", "BlendOption" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlendArgs, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Blend Time */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Blend Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlendArgs, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blending used (Linear, Cubic, etc.) */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlendArgs, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption_MetaData)) }; // 3066902676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewProp_BlendOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AlphaBlendArgs",
		sizeof(FAlphaBlendArgs),
		alignof(FAlphaBlendArgs),
		Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlendArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_AlphaBlendArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlphaBlendArgs.InnerSingleton, Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlphaBlendArgs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlphaBlend;
class UScriptStruct* FAlphaBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlphaBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlphaBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlend, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AlphaBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AlphaBlend.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAlphaBlend>()
{
	return FAlphaBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlphaBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Alpha Blend class that supports different blend options as well as custom curves\n */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Alpha Blend class that supports different blend options as well as custom curves" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlphaBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** If you're using Custom BlendOption, you can specify curve */" },
		{ "DisplayAfter", "BlendOption" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "If you're using Custom BlendOption, you can specify curve" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Blend Time */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Blend Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlend, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blending used (Linear, Cubic, etc.) */" },
		{ "ModuleRelativePath", "Public/AlphaBlend.h" },
		{ "ToolTip", "Type of blending used (Linear, Cubic, etc.)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAlphaBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_MetaData)) }; // 3066902676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewProp_BlendOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlphaBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AlphaBlend",
		sizeof(FAlphaBlend),
		alignof(FAlphaBlend),
		Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlphaBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_AlphaBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlphaBlend.InnerSingleton, Z_Construct_UScriptStruct_FAlphaBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlphaBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::EnumInfo[] = {
		{ EAlphaBlendOption_StaticEnum, TEXT("EAlphaBlendOption"), &Z_Registration_Info_UEnum_EAlphaBlendOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3066902676U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::ScriptStructInfo[] = {
		{ FAlphaBlendArgs::StaticStruct, Z_Construct_UScriptStruct_FAlphaBlendArgs_Statics::NewStructOps, TEXT("AlphaBlendArgs"), &Z_Registration_Info_UScriptStruct_AlphaBlendArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlphaBlendArgs), 131481067U) },
		{ FAlphaBlend::StaticStruct, Z_Construct_UScriptStruct_FAlphaBlend_Statics::NewStructOps, TEXT("AlphaBlend"), &Z_Registration_Info_UScriptStruct_AlphaBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlphaBlend), 3900153020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_4022253505(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AlphaBlend_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
