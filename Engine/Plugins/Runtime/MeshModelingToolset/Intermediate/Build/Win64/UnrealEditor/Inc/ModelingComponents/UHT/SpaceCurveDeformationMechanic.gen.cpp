// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/SpaceCurveDeformationMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceCurveDeformationMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpaceCurveDeformationMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpaceCurveDeformationMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode;
	static UEnum* ESpaceCurveControlPointTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ESpaceCurveControlPointTransformMode"));
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ESpaceCurveControlPointTransformMode>()
	{
		return ESpaceCurveControlPointTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enumerators[] = {
		{ "ESpaceCurveControlPointTransformMode::Shared", (int64)ESpaceCurveControlPointTransformMode::Shared },
		{ "ESpaceCurveControlPointTransformMode::PerVertex", (int64)ESpaceCurveControlPointTransformMode::PerVertex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "PerVertex.Name", "ESpaceCurveControlPointTransformMode::PerVertex" },
		{ "Shared.Name", "ESpaceCurveControlPointTransformMode::Shared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ESpaceCurveControlPointTransformMode",
		"ESpaceCurveControlPointTransformMode",
		Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode;
	static UEnum* ESpaceCurveControlPointOriginMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ESpaceCurveControlPointOriginMode"));
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ESpaceCurveControlPointOriginMode>()
	{
		return ESpaceCurveControlPointOriginMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enumerators[] = {
		{ "ESpaceCurveControlPointOriginMode::Shared", (int64)ESpaceCurveControlPointOriginMode::Shared },
		{ "ESpaceCurveControlPointOriginMode::First", (int64)ESpaceCurveControlPointOriginMode::First },
		{ "ESpaceCurveControlPointOriginMode::Last", (int64)ESpaceCurveControlPointOriginMode::Last },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enum_MetaDataParams[] = {
		{ "First.Name", "ESpaceCurveControlPointOriginMode::First" },
		{ "Last.Name", "ESpaceCurveControlPointOriginMode::Last" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "Shared.Name", "ESpaceCurveControlPointOriginMode::Shared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ESpaceCurveControlPointOriginMode",
		"ESpaceCurveControlPointOriginMode",
		Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType;
	static UEnum* ESpaceCurveControlPointFalloffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ESpaceCurveControlPointFalloffType"));
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ESpaceCurveControlPointFalloffType>()
	{
		return ESpaceCurveControlPointFalloffType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enumerators[] = {
		{ "ESpaceCurveControlPointFalloffType::Linear", (int64)ESpaceCurveControlPointFalloffType::Linear },
		{ "ESpaceCurveControlPointFalloffType::Smooth", (int64)ESpaceCurveControlPointFalloffType::Smooth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enum_MetaDataParams[] = {
		{ "Linear.Name", "ESpaceCurveControlPointFalloffType::Linear" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "Smooth.Name", "ESpaceCurveControlPointFalloffType::Smooth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ESpaceCurveControlPointFalloffType",
		"ESpaceCurveControlPointFalloffType",
		Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType()
	{
		if (!Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType.InnerSingleton;
	}
	void USpaceCurveDeformationMechanicPropertySet::StaticRegisterNativesUSpaceCurveDeformationMechanicPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpaceCurveDeformationMechanicPropertySet);
	UClass* Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_NoRegister()
	{
		return USpaceCurveDeformationMechanicPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TransformMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TransformOrigin_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Softness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Softness;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SoftFalloff_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoftFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanicPropertySet, TransformMode), Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointTransformMode, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode_MetaData)) }; // 2433321282
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin = { "TransformOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanicPropertySet, TransformOrigin), Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointOriginMode, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin_MetaData)) }; // 2876536991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_Softness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_Softness = { "Softness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanicPropertySet, Softness), METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_Softness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_Softness_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff = { "SoftFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanicPropertySet, SoftFalloff), Z_Construct_UEnum_ModelingComponents_ESpaceCurveControlPointFalloffType, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff_MetaData)) }; // 3581517890
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_TransformOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_Softness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::NewProp_SoftFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceCurveDeformationMechanicPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::ClassParams = {
		&USpaceCurveDeformationMechanicPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet()
	{
		if (!Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.OuterSingleton, Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USpaceCurveDeformationMechanicPropertySet>()
	{
		return USpaceCurveDeformationMechanicPropertySet::StaticClass();
	}
	USpaceCurveDeformationMechanicPropertySet::USpaceCurveDeformationMechanicPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceCurveDeformationMechanicPropertySet);
	USpaceCurveDeformationMechanicPropertySet::~USpaceCurveDeformationMechanicPropertySet() {}
	void USpaceCurveDeformationMechanic::StaticRegisterNativesUSpaceCurveDeformationMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpaceCurveDeformationMechanic);
	UClass* Z_Construct_UClass_USpaceCurveDeformationMechanic_NoRegister()
	{
		return USpaceCurveDeformationMechanic::StaticClass();
	}
	struct Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPoints_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderSegments_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\n */" },
		{ "IncludePath", "Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_ClickBehavior_MetaData[] = {
		{ "Comment", "// Behaviors used for moving points around and hovering them\n" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "ToolTip", "Behaviors used for moving points around and hovering them" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_ClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_ClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_HoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_HoverBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_TransformProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_TransformProperties = { "TransformProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, TransformProperties), Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_TransformProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_TransformProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** Used for displaying points/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "ToolTip", "Used for displaying points/segments" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PreviewGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PreviewGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderPoints = { "RenderPoints", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, RenderPoints), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderSegments = { "RenderSegments", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, RenderSegments), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformProxy = { "PointTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, PointTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/SpaceCurveDeformationMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformGizmo = { "PointTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceCurveDeformationMechanic, PointTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_ClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_HoverBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_TransformProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PreviewGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_RenderSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::NewProp_PointTransformGizmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceCurveDeformationMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::ClassParams = {
		&USpaceCurveDeformationMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpaceCurveDeformationMechanic()
	{
		if (!Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.OuterSingleton, Z_Construct_UClass_USpaceCurveDeformationMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USpaceCurveDeformationMechanic>()
	{
		return USpaceCurveDeformationMechanic::StaticClass();
	}
	USpaceCurveDeformationMechanic::USpaceCurveDeformationMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceCurveDeformationMechanic);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::EnumInfo[] = {
		{ ESpaceCurveControlPointTransformMode_StaticEnum, TEXT("ESpaceCurveControlPointTransformMode"), &Z_Registration_Info_UEnum_ESpaceCurveControlPointTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2433321282U) },
		{ ESpaceCurveControlPointOriginMode_StaticEnum, TEXT("ESpaceCurveControlPointOriginMode"), &Z_Registration_Info_UEnum_ESpaceCurveControlPointOriginMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2876536991U) },
		{ ESpaceCurveControlPointFalloffType_StaticEnum, TEXT("ESpaceCurveControlPointFalloffType"), &Z_Registration_Info_UEnum_ESpaceCurveControlPointFalloffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3581517890U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpaceCurveDeformationMechanicPropertySet, USpaceCurveDeformationMechanicPropertySet::StaticClass, TEXT("USpaceCurveDeformationMechanicPropertySet"), &Z_Registration_Info_UClass_USpaceCurveDeformationMechanicPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpaceCurveDeformationMechanicPropertySet), 2919281953U) },
		{ Z_Construct_UClass_USpaceCurveDeformationMechanic, USpaceCurveDeformationMechanic::StaticClass, TEXT("USpaceCurveDeformationMechanic"), &Z_Registration_Info_UClass_USpaceCurveDeformationMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpaceCurveDeformationMechanic), 3107142678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_1207005147(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpaceCurveDeformationMechanic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
