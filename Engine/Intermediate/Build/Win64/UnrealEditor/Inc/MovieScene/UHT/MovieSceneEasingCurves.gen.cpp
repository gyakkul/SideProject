// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/MovieSceneEasingCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingCurves() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing;
	static UEnum* EMovieSceneBuiltInEasing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBuiltInEasing"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBuiltInEasing>()
	{
		return EMovieSceneBuiltInEasing_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enumerators[] = {
		{ "EMovieSceneBuiltInEasing::Linear", (int64)EMovieSceneBuiltInEasing::Linear },
		{ "EMovieSceneBuiltInEasing::SinIn", (int64)EMovieSceneBuiltInEasing::SinIn },
		{ "EMovieSceneBuiltInEasing::SinOut", (int64)EMovieSceneBuiltInEasing::SinOut },
		{ "EMovieSceneBuiltInEasing::SinInOut", (int64)EMovieSceneBuiltInEasing::SinInOut },
		{ "EMovieSceneBuiltInEasing::QuadIn", (int64)EMovieSceneBuiltInEasing::QuadIn },
		{ "EMovieSceneBuiltInEasing::QuadOut", (int64)EMovieSceneBuiltInEasing::QuadOut },
		{ "EMovieSceneBuiltInEasing::QuadInOut", (int64)EMovieSceneBuiltInEasing::QuadInOut },
		{ "EMovieSceneBuiltInEasing::Cubic", (int64)EMovieSceneBuiltInEasing::Cubic },
		{ "EMovieSceneBuiltInEasing::CubicIn", (int64)EMovieSceneBuiltInEasing::CubicIn },
		{ "EMovieSceneBuiltInEasing::CubicOut", (int64)EMovieSceneBuiltInEasing::CubicOut },
		{ "EMovieSceneBuiltInEasing::CubicInOut", (int64)EMovieSceneBuiltInEasing::CubicInOut },
		{ "EMovieSceneBuiltInEasing::HermiteCubicInOut", (int64)EMovieSceneBuiltInEasing::HermiteCubicInOut },
		{ "EMovieSceneBuiltInEasing::QuartIn", (int64)EMovieSceneBuiltInEasing::QuartIn },
		{ "EMovieSceneBuiltInEasing::QuartOut", (int64)EMovieSceneBuiltInEasing::QuartOut },
		{ "EMovieSceneBuiltInEasing::QuartInOut", (int64)EMovieSceneBuiltInEasing::QuartInOut },
		{ "EMovieSceneBuiltInEasing::QuintIn", (int64)EMovieSceneBuiltInEasing::QuintIn },
		{ "EMovieSceneBuiltInEasing::QuintOut", (int64)EMovieSceneBuiltInEasing::QuintOut },
		{ "EMovieSceneBuiltInEasing::QuintInOut", (int64)EMovieSceneBuiltInEasing::QuintInOut },
		{ "EMovieSceneBuiltInEasing::ExpoIn", (int64)EMovieSceneBuiltInEasing::ExpoIn },
		{ "EMovieSceneBuiltInEasing::ExpoOut", (int64)EMovieSceneBuiltInEasing::ExpoOut },
		{ "EMovieSceneBuiltInEasing::ExpoInOut", (int64)EMovieSceneBuiltInEasing::ExpoInOut },
		{ "EMovieSceneBuiltInEasing::CircIn", (int64)EMovieSceneBuiltInEasing::CircIn },
		{ "EMovieSceneBuiltInEasing::CircOut", (int64)EMovieSceneBuiltInEasing::CircOut },
		{ "EMovieSceneBuiltInEasing::CircInOut", (int64)EMovieSceneBuiltInEasing::CircInOut },
		{ "EMovieSceneBuiltInEasing::Custom", (int64)EMovieSceneBuiltInEasing::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enum_MetaDataParams[] = {
		{ "CircIn.Comment", "// Circular easing\n" },
		{ "CircIn.DisplayName", "Circular In" },
		{ "CircIn.Grouping", "Circular" },
		{ "CircIn.Name", "EMovieSceneBuiltInEasing::CircIn" },
		{ "CircIn.ToolTip", "Circular easing" },
		{ "CircInOut.DisplayName", "Circular InOut" },
		{ "CircInOut.Grouping", "Circular" },
		{ "CircInOut.Name", "EMovieSceneBuiltInEasing::CircInOut" },
		{ "CircOut.DisplayName", "Circular Out" },
		{ "CircOut.Grouping", "Circular" },
		{ "CircOut.Name", "EMovieSceneBuiltInEasing::CircOut" },
		{ "Cubic.Comment", "// Cubic easing\n" },
		{ "Cubic.DisplayName", "Cubic" },
		{ "Cubic.Grouping", "Cubic" },
		{ "Cubic.Name", "EMovieSceneBuiltInEasing::Cubic" },
		{ "Cubic.ToolTip", "Cubic easing" },
		{ "CubicIn.DisplayName", "Cubic In" },
		{ "CubicIn.Grouping", "Cubic" },
		{ "CubicIn.Name", "EMovieSceneBuiltInEasing::CubicIn" },
		{ "CubicInOut.DisplayName", "Cubic InOut" },
		{ "CubicInOut.Grouping", "Cubic" },
		{ "CubicInOut.Name", "EMovieSceneBuiltInEasing::CubicInOut" },
		{ "CubicOut.DisplayName", "Cubic Out" },
		{ "CubicOut.Grouping", "Cubic" },
		{ "CubicOut.Name", "EMovieSceneBuiltInEasing::CubicOut" },
		{ "Custom.Comment", "// Custom\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Grouping", "Custom" },
		{ "Custom.Name", "EMovieSceneBuiltInEasing::Custom" },
		{ "Custom.ToolTip", "Custom" },
		{ "ExpoIn.Comment", "// Exponential easing\n" },
		{ "ExpoIn.DisplayName", "Exponential In" },
		{ "ExpoIn.Grouping", "Exponential" },
		{ "ExpoIn.Name", "EMovieSceneBuiltInEasing::ExpoIn" },
		{ "ExpoIn.ToolTip", "Exponential easing" },
		{ "ExpoInOut.DisplayName", "Exponential InOut" },
		{ "ExpoInOut.Grouping", "Exponential" },
		{ "ExpoInOut.Name", "EMovieSceneBuiltInEasing::ExpoInOut" },
		{ "ExpoOut.DisplayName", "Exponential Out" },
		{ "ExpoOut.Grouping", "Exponential" },
		{ "ExpoOut.Name", "EMovieSceneBuiltInEasing::ExpoOut" },
		{ "HermiteCubicInOut.DisplayName", "Hermite-Cubic InOut" },
		{ "HermiteCubicInOut.Grouping", "Cubic" },
		{ "HermiteCubicInOut.Name", "EMovieSceneBuiltInEasing::HermiteCubicInOut" },
		{ "Linear.Comment", "// Linear easing\n" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Grouping", "Linear" },
		{ "Linear.Name", "EMovieSceneBuiltInEasing::Linear" },
		{ "Linear.ToolTip", "Linear easing" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
		{ "QuadIn.Comment", "// Quadratic easing\n" },
		{ "QuadIn.DisplayName", "Quadratic In" },
		{ "QuadIn.Grouping", "Quadratic" },
		{ "QuadIn.Name", "EMovieSceneBuiltInEasing::QuadIn" },
		{ "QuadIn.ToolTip", "Quadratic easing" },
		{ "QuadInOut.DisplayName", "Quadratic InOut" },
		{ "QuadInOut.Grouping", "Quadratic" },
		{ "QuadInOut.Name", "EMovieSceneBuiltInEasing::QuadInOut" },
		{ "QuadOut.DisplayName", "Quadratic Out" },
		{ "QuadOut.Grouping", "Quadratic" },
		{ "QuadOut.Name", "EMovieSceneBuiltInEasing::QuadOut" },
		{ "QuartIn.Comment", "// Quartic easing\n" },
		{ "QuartIn.DisplayName", "Quartic In" },
		{ "QuartIn.Grouping", "Quartic" },
		{ "QuartIn.Name", "EMovieSceneBuiltInEasing::QuartIn" },
		{ "QuartIn.ToolTip", "Quartic easing" },
		{ "QuartInOut.DisplayName", "Quartic InOut" },
		{ "QuartInOut.Grouping", "Quartic" },
		{ "QuartInOut.Name", "EMovieSceneBuiltInEasing::QuartInOut" },
		{ "QuartOut.DisplayName", "Quartic Out" },
		{ "QuartOut.Grouping", "Quartic" },
		{ "QuartOut.Name", "EMovieSceneBuiltInEasing::QuartOut" },
		{ "QuintIn.Comment", "// Quintic easing\n" },
		{ "QuintIn.DisplayName", "Quintic In" },
		{ "QuintIn.Grouping", "Quintic" },
		{ "QuintIn.Name", "EMovieSceneBuiltInEasing::QuintIn" },
		{ "QuintIn.ToolTip", "Quintic easing" },
		{ "QuintInOut.DisplayName", "Quintic InOut" },
		{ "QuintInOut.Grouping", "Quintic" },
		{ "QuintInOut.Name", "EMovieSceneBuiltInEasing::QuintInOut" },
		{ "QuintOut.DisplayName", "Quintic Out" },
		{ "QuintOut.Grouping", "Quintic" },
		{ "QuintOut.Name", "EMovieSceneBuiltInEasing::QuintOut" },
		{ "SinIn.Comment", "// Sinusoidal easing\n" },
		{ "SinIn.DisplayName", "Sinusoidal In" },
		{ "SinIn.Grouping", "Sinusoidal" },
		{ "SinIn.Name", "EMovieSceneBuiltInEasing::SinIn" },
		{ "SinIn.ToolTip", "Sinusoidal easing" },
		{ "SinInOut.DisplayName", "Sinusoidal InOut" },
		{ "SinInOut.Grouping", "Sinusoidal" },
		{ "SinInOut.Name", "EMovieSceneBuiltInEasing::SinInOut" },
		{ "SinOut.DisplayName", "Sinusoidal Out" },
		{ "SinOut.Grouping", "Sinusoidal" },
		{ "SinOut.Name", "EMovieSceneBuiltInEasing::SinOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneBuiltInEasing",
		"EMovieSceneBuiltInEasing",
		Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing.InnerSingleton;
	}
	void UMovieSceneBuiltInEasingFunction::StaticRegisterNativesUMovieSceneBuiltInEasingFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBuiltInEasingFunction);
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_NoRegister()
	{
		return UMovieSceneBuiltInEasingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Built-In Function" },
		{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Easing" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneBuiltInEasingFunction, Type), Z_Construct_UEnum_MovieScene_EMovieSceneBuiltInEasing, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_MetaData)) }; // 2375400318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::NewProp_Type,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBuiltInEasingFunction, IMovieSceneEasingFunction), false },  // 2454492217
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBuiltInEasingFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::ClassParams = {
		&UMovieSceneBuiltInEasingFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBuiltInEasingFunction()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton, Z_Construct_UClass_UMovieSceneBuiltInEasingFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBuiltInEasingFunction>()
	{
		return UMovieSceneBuiltInEasingFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBuiltInEasingFunction);
	UMovieSceneBuiltInEasingFunction::~UMovieSceneBuiltInEasingFunction() {}
	void UMovieSceneEasingExternalCurve::StaticRegisterNativesUMovieSceneEasingExternalCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEasingExternalCurve);
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve_NoRegister()
	{
		return UMovieSceneEasingExternalCurve::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Curve Asset" },
		{ "IncludePath", "Generators/MovieSceneEasingCurves.h" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Easing" },
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingCurves.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEasingExternalCurve, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::NewProp_Curve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEasingExternalCurve, IMovieSceneEasingFunction), false },  // 2454492217
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEasingExternalCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::ClassParams = {
		&UMovieSceneEasingExternalCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEasingExternalCurve()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton, Z_Construct_UClass_UMovieSceneEasingExternalCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEasingExternalCurve>()
	{
		return UMovieSceneEasingExternalCurve::StaticClass();
	}
	UMovieSceneEasingExternalCurve::UMovieSceneEasingExternalCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingExternalCurve);
	UMovieSceneEasingExternalCurve::~UMovieSceneEasingExternalCurve() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::EnumInfo[] = {
		{ EMovieSceneBuiltInEasing_StaticEnum, TEXT("EMovieSceneBuiltInEasing"), &Z_Registration_Info_UEnum_EMovieSceneBuiltInEasing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2375400318U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBuiltInEasingFunction, UMovieSceneBuiltInEasingFunction::StaticClass, TEXT("UMovieSceneBuiltInEasingFunction"), &Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBuiltInEasingFunction), 1471607972U) },
		{ Z_Construct_UClass_UMovieSceneEasingExternalCurve, UMovieSceneEasingExternalCurve::StaticClass, TEXT("UMovieSceneEasingExternalCurve"), &Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEasingExternalCurve), 3037749947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_1205544646(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingCurves_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
