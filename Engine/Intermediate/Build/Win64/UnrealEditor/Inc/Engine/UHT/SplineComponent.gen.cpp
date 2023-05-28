// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePoint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplinePointType;
	static UEnum* ESplinePointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplinePointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplinePointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplinePointType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESplinePointType"));
		}
		return Z_Registration_Info_UEnum_ESplinePointType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplinePointType::Type>()
	{
		return ESplinePointType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESplinePointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enumerators[] = {
		{ "ESplinePointType::Linear", (int64)ESplinePointType::Linear },
		{ "ESplinePointType::Curve", (int64)ESplinePointType::Curve },
		{ "ESplinePointType::Constant", (int64)ESplinePointType::Constant },
		{ "ESplinePointType::CurveClamped", (int64)ESplinePointType::CurveClamped },
		{ "ESplinePointType::CurveCustomTangent", (int64)ESplinePointType::CurveCustomTangent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Permitted spline point types for SplineComponent. */" },
		{ "Constant.Name", "ESplinePointType::Constant" },
		{ "Curve.Name", "ESplinePointType::Curve" },
		{ "CurveClamped.Name", "ESplinePointType::CurveClamped" },
		{ "CurveCustomTangent.Name", "ESplinePointType::CurveCustomTangent" },
		{ "Linear.Name", "ESplinePointType::Linear" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Permitted spline point types for SplineComponent." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESplinePointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESplinePointType",
		"ESplinePointType::Type",
		Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplinePointType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESplinePointType()
	{
		if (!Z_Registration_Info_UEnum_ESplinePointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplinePointType.InnerSingleton, Z_Construct_UEnum_Engine_ESplinePointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplinePointType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineCoordinateSpace;
	static UEnum* ESplineCoordinateSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplineCoordinateSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplineCoordinateSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplineCoordinateSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESplineCoordinateSpace"));
		}
		return Z_Registration_Info_UEnum_ESplineCoordinateSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplineCoordinateSpace::Type>()
	{
		return ESplineCoordinateSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enumerators[] = {
		{ "ESplineCoordinateSpace::Local", (int64)ESplineCoordinateSpace::Local },
		{ "ESplineCoordinateSpace::World", (int64)ESplineCoordinateSpace::World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of coordinate space accepted by the functions. */" },
		{ "Local.Name", "ESplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Types of coordinate space accepted by the functions." },
		{ "World.Name", "ESplineCoordinateSpace::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESplineCoordinateSpace",
		"ESplineCoordinateSpace::Type",
		Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace()
	{
		if (!Z_Registration_Info_UEnum_ESplineCoordinateSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineCoordinateSpace.InnerSingleton, Z_Construct_UEnum_Engine_ESplineCoordinateSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplineCoordinateSpace.InnerSingleton;
	}
	void USplineMetadata::StaticRegisterNativesUSplineMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineMetadata);
	UClass* Z_Construct_UClass_USplineMetadata_NoRegister()
	{
		return USplineMetadata::StaticClass();
	}
	struct Z_Construct_UClass_USplineMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMetadata_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SplineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineMetadata_Statics::ClassParams = {
		&USplineMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USplineMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineMetadata()
	{
		if (!Z_Registration_Info_UClass_USplineMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineMetadata.OuterSingleton, Z_Construct_UClass_USplineMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineMetadata.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USplineMetadata>()
	{
		return USplineMetadata::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMetadata);
	USplineMetadata::~USplineMetadata() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineCurves;
class UScriptStruct* FSplineCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineCurves, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineCurves"));
	}
	return Z_Registration_Info_UScriptStruct_SplineCurves.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineCurves>()
{
	return FSplineCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplineCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReparamTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReparamTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Spline built from position data. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from position data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, Position), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Spline built from rotation data. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from rotation data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, Rotation), Z_Construct_UScriptStruct_FInterpCurveQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Spline built from scale data. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Spline built from scale data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, Scale), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData[] = {
		{ "Comment", "/** Input: distance along curve, output: parameter that puts you there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Input: distance along curve, output: parameter that puts you there." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable = { "ReparamTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, ReparamTable), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, Metadata_DEPRECATED), Z_Construct_UClass_USplineMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineCurves, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_ReparamTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineCurves_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplineCurves",
		sizeof(FSplineCurves),
		alignof(FSplineCurves),
		Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_SplineCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineCurves.InnerSingleton, Z_Construct_UScriptStruct_FSplineCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplineCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplinePoint;
class UScriptStruct* FSplinePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplinePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplinePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplinePoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplinePoint"));
	}
	return Z_Registration_Info_UScriptStruct_SplinePoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplinePoint>()
{
	return FSplinePoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplinePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplinePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplinePoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, InputKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, ArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, LeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "SplinePoint" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplinePoint, Type), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type_MetaData)) }; // 1353148516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_ArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_LeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePoint_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplinePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplinePoint",
		sizeof(FSplinePoint),
		alignof(FSplinePoint),
		Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplinePoint()
	{
		if (!Z_Registration_Info_UScriptStruct_SplinePoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplinePoint.InnerSingleton, Z_Construct_UScriptStruct_FSplinePoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplinePoint.InnerSingleton;
	}
	DEFINE_FUNCTION(USplineComponent::execConvertSplineToPolyLine)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSquareDistanceFromSpline);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertSplineToPolyLine(ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_MaxSquareDistanceFromSpline,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execConvertSplineSegmentToPolyLine)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SplinePointStartIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSquareDistanceFromSpline);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertSplineSegmentToPolyLine(Z_Param_SplinePointStartIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_MaxSquareDistanceFromSpline,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execDivideSplineIntoPolylineRecursiveWithDistances)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartDistanceAlongSpline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndDistanceAlongSpline);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSquareDistanceFromSpline);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(double,Z_Param_Out_OutDistancesAlongSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DivideSplineIntoPolylineRecursiveWithDistances(Z_Param_StartDistanceAlongSpline,Z_Param_EndDistanceAlongSpline,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_MaxSquareDistanceFromSpline,Z_Param_Out_OutPoints,Z_Param_Out_OutDistancesAlongSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execDivideSplineIntoPolylineRecursive)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartDistanceAlongSpline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndDistanceAlongSpline);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSquareDistanceFromSpline);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DivideSplineIntoPolylineRecursive(Z_Param_StartDistanceAlongSpline,Z_Param_EndDistanceAlongSpline,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_MaxSquareDistanceFromSpline,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindTransformClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->FindTransformClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindScaleClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindScaleClosestToWorldLocation(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindRollClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FindRollClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindRightVectorClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindRightVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindUpVectorClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindUpVectorClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindRotationClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->FindRotationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindTangentClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindTangentClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindDirectionClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindDirectionClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindLocationClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindLocationClosestToWorldLocation(Z_Param_Out_WorldLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execFindInputKeyClosestToWorldLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FindInputKeyClosestToWorldLocation(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetScaleAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRollAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRollAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTransformAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_GET_UBOOL(Z_Param_bUseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity,Z_Param_bUseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRightVectorAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetUpVectorAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldRotationAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRotationAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTangentAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldDirectionAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDirectionAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldLocationAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtTime(Z_Param_Time,Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocationAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseConstantVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtTime(Z_Param_Time,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseConstantVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTransformAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetScaleAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRollAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRollAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRightVectorAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetUpVectorAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldRotationAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetWorldRotationAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRotationAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldTangentAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldTangentAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTangentAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldDirectionAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldDirectionAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDirectionAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldLocationAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocationAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtDistanceAlongSpline(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTimeAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetInputKeyValueAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputKeyValueAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetInputKeyAtDistanceAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputKeyAtDistanceAlongSpline(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDefaultUpVector)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDefaultUpVector(ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetDefaultUpVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UpVector);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultUpVector(Z_Param_Out_UpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetSplineLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSplineLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetVectorPropertyAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorPropertyAtSplinePoint(Z_Param_Index,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetFloatPropertyAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatPropertyAtSplinePoint(Z_Param_Index,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDistanceAlongSplineAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceAlongSplineAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocalLocationAndTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalTangent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLocalLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_LocalLocation,Z_Param_Out_LocalTangent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocationAndTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLocationAndTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_Location,Z_Param_Out_Tangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTransformAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetScaleAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRollAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRollAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRightVectorAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetUpVectorAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRotationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLeaveTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLeaveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetArriveTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetArriveTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDirectionAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetWorldLocationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWorldLocationAtSplinePoint(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplinePoint(Z_Param_PointIndex,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetNumberOfSplineSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSplineSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetNumberOfSplinePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSplinePoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetSplinePointType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePointType(Z_Param_PointIndex,ESplinePointType::Type(Z_Param_Type),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetSplinePointType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESplinePointType::Type>*)Z_Param__Result=P_THIS->GetSplinePointType(Z_Param_PointIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetScaleAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InScaleVector);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InScaleVector,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetRotationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InRotation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetUpVectorAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InUpVector);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpVectorAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InUpVector,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetTangentsAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InArriveTangent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLeaveTangent);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentsAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InArriveTangent,Z_Param_Out_InLeaveTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetTangentAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InTangent);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InTangent,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetWorldLocationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetLocationAtSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationAtSplinePoint(Z_Param_PointIndex,Z_Param_Out_InLocation,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetSplineLocalPoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineLocalPoints(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetSplineWorldPoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineWorldPoints(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetSplinePoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePoints(Z_Param_Out_Points,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddSplineLocalPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplineLocalPoint(Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddSplineWorldPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplineWorldPoint(Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execRemoveSplinePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSplinePoint(Z_Param_Index,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddSplinePointAtIndex)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplinePointAtIndex(Z_Param_Out_Position,Z_Param_Index,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddSplinePoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSplinePoint(Z_Param_Out_Position,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddPoints)
	{
		P_GET_TARRAY_REF(FSplinePoint,Z_Param_Out_Points);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_Out_Points,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execAddPoint)
	{
		P_GET_STRUCT_REF(FSplinePoint,Z_Param_Out_Point);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoint(Z_Param_Out_Point,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execClearSplinePoints)
	{
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSplinePoints(Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execIsClosedLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClosedLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetClosedLoopAtPosition)
	{
		P_GET_UBOOL(Z_Param_bInClosedLoop);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClosedLoopAtPosition(Z_Param_bInClosedLoop,Z_Param_Key,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetClosedLoop)
	{
		P_GET_UBOOL(Z_Param_bInClosedLoop);
		P_GET_UBOOL(Z_Param_bUpdateSpline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClosedLoop(Z_Param_bInClosedLoop,Z_Param_bUpdateSpline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetDrawDebug)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawDebug(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetTangentColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_TangentColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentColor(Z_Param_Out_TangentColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetSelectedSplineSegmentColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedSplineSegmentColor(Z_Param_Out_SegmentColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execSetUnselectedSplineSegmentColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SegmentColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnselectedSplineSegmentColor(Z_Param_Out_SegmentColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetVectorPropertyAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorPropertyAtSplineInputKey(Z_Param_InKey,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetFloatPropertyAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatPropertyAtSplineInputKey(Z_Param_InKey,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDistanceAlongSplineAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDistanceAlongSplineAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetScaleAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetScaleAtSplineInputKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRollAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRollAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTransformAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_GET_UBOOL(Z_Param_bUseScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace),Z_Param_bUseScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRightVectorAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetUpVectorAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVectorAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetRotationAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetDirectionAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirectionAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetTangentAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTangentAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execGetLocationAtSplineInputKey)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InKey);
		P_GET_PROPERTY(FByteProperty,Z_Param_CoordinateSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSplineInputKey(Z_Param_InKey,ESplineCoordinateSpace::Type(Z_Param_CoordinateSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineComponent::execUpdateSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSpline();
		P_NATIVE_END;
	}
	void USplineComponent::StaticRegisterNativesUSplineComponent()
	{
		UClass* Class = USplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoint", &USplineComponent::execAddPoint },
			{ "AddPoints", &USplineComponent::execAddPoints },
			{ "AddSplineLocalPoint", &USplineComponent::execAddSplineLocalPoint },
			{ "AddSplinePoint", &USplineComponent::execAddSplinePoint },
			{ "AddSplinePointAtIndex", &USplineComponent::execAddSplinePointAtIndex },
			{ "AddSplineWorldPoint", &USplineComponent::execAddSplineWorldPoint },
			{ "ClearSplinePoints", &USplineComponent::execClearSplinePoints },
			{ "ConvertSplineSegmentToPolyLine", &USplineComponent::execConvertSplineSegmentToPolyLine },
			{ "ConvertSplineToPolyLine", &USplineComponent::execConvertSplineToPolyLine },
			{ "DivideSplineIntoPolylineRecursive", &USplineComponent::execDivideSplineIntoPolylineRecursive },
			{ "DivideSplineIntoPolylineRecursiveWithDistances", &USplineComponent::execDivideSplineIntoPolylineRecursiveWithDistances },
			{ "FindDirectionClosestToWorldLocation", &USplineComponent::execFindDirectionClosestToWorldLocation },
			{ "FindInputKeyClosestToWorldLocation", &USplineComponent::execFindInputKeyClosestToWorldLocation },
			{ "FindLocationClosestToWorldLocation", &USplineComponent::execFindLocationClosestToWorldLocation },
			{ "FindRightVectorClosestToWorldLocation", &USplineComponent::execFindRightVectorClosestToWorldLocation },
			{ "FindRollClosestToWorldLocation", &USplineComponent::execFindRollClosestToWorldLocation },
			{ "FindRotationClosestToWorldLocation", &USplineComponent::execFindRotationClosestToWorldLocation },
			{ "FindScaleClosestToWorldLocation", &USplineComponent::execFindScaleClosestToWorldLocation },
			{ "FindTangentClosestToWorldLocation", &USplineComponent::execFindTangentClosestToWorldLocation },
			{ "FindTransformClosestToWorldLocation", &USplineComponent::execFindTransformClosestToWorldLocation },
			{ "FindUpVectorClosestToWorldLocation", &USplineComponent::execFindUpVectorClosestToWorldLocation },
			{ "GetArriveTangentAtSplinePoint", &USplineComponent::execGetArriveTangentAtSplinePoint },
			{ "GetDefaultUpVector", &USplineComponent::execGetDefaultUpVector },
			{ "GetDirectionAtDistanceAlongSpline", &USplineComponent::execGetDirectionAtDistanceAlongSpline },
			{ "GetDirectionAtSplineInputKey", &USplineComponent::execGetDirectionAtSplineInputKey },
			{ "GetDirectionAtSplinePoint", &USplineComponent::execGetDirectionAtSplinePoint },
			{ "GetDirectionAtTime", &USplineComponent::execGetDirectionAtTime },
			{ "GetDistanceAlongSplineAtSplineInputKey", &USplineComponent::execGetDistanceAlongSplineAtSplineInputKey },
			{ "GetDistanceAlongSplineAtSplinePoint", &USplineComponent::execGetDistanceAlongSplineAtSplinePoint },
			{ "GetFloatPropertyAtSplineInputKey", &USplineComponent::execGetFloatPropertyAtSplineInputKey },
			{ "GetFloatPropertyAtSplinePoint", &USplineComponent::execGetFloatPropertyAtSplinePoint },
			{ "GetInputKeyAtDistanceAlongSpline", &USplineComponent::execGetInputKeyAtDistanceAlongSpline },
			{ "GetInputKeyValueAtDistanceAlongSpline", &USplineComponent::execGetInputKeyValueAtDistanceAlongSpline },
			{ "GetLeaveTangentAtSplinePoint", &USplineComponent::execGetLeaveTangentAtSplinePoint },
			{ "GetLocalLocationAndTangentAtSplinePoint", &USplineComponent::execGetLocalLocationAndTangentAtSplinePoint },
			{ "GetLocationAndTangentAtSplinePoint", &USplineComponent::execGetLocationAndTangentAtSplinePoint },
			{ "GetLocationAtDistanceAlongSpline", &USplineComponent::execGetLocationAtDistanceAlongSpline },
			{ "GetLocationAtSplineInputKey", &USplineComponent::execGetLocationAtSplineInputKey },
			{ "GetLocationAtSplinePoint", &USplineComponent::execGetLocationAtSplinePoint },
			{ "GetLocationAtTime", &USplineComponent::execGetLocationAtTime },
			{ "GetNumberOfSplinePoints", &USplineComponent::execGetNumberOfSplinePoints },
			{ "GetNumberOfSplineSegments", &USplineComponent::execGetNumberOfSplineSegments },
			{ "GetRightVectorAtDistanceAlongSpline", &USplineComponent::execGetRightVectorAtDistanceAlongSpline },
			{ "GetRightVectorAtSplineInputKey", &USplineComponent::execGetRightVectorAtSplineInputKey },
			{ "GetRightVectorAtSplinePoint", &USplineComponent::execGetRightVectorAtSplinePoint },
			{ "GetRightVectorAtTime", &USplineComponent::execGetRightVectorAtTime },
			{ "GetRollAtDistanceAlongSpline", &USplineComponent::execGetRollAtDistanceAlongSpline },
			{ "GetRollAtSplineInputKey", &USplineComponent::execGetRollAtSplineInputKey },
			{ "GetRollAtSplinePoint", &USplineComponent::execGetRollAtSplinePoint },
			{ "GetRollAtTime", &USplineComponent::execGetRollAtTime },
			{ "GetRotationAtDistanceAlongSpline", &USplineComponent::execGetRotationAtDistanceAlongSpline },
			{ "GetRotationAtSplineInputKey", &USplineComponent::execGetRotationAtSplineInputKey },
			{ "GetRotationAtSplinePoint", &USplineComponent::execGetRotationAtSplinePoint },
			{ "GetRotationAtTime", &USplineComponent::execGetRotationAtTime },
			{ "GetScaleAtDistanceAlongSpline", &USplineComponent::execGetScaleAtDistanceAlongSpline },
			{ "GetScaleAtSplineInputKey", &USplineComponent::execGetScaleAtSplineInputKey },
			{ "GetScaleAtSplinePoint", &USplineComponent::execGetScaleAtSplinePoint },
			{ "GetScaleAtTime", &USplineComponent::execGetScaleAtTime },
			{ "GetSplineLength", &USplineComponent::execGetSplineLength },
			{ "GetSplinePointType", &USplineComponent::execGetSplinePointType },
			{ "GetTangentAtDistanceAlongSpline", &USplineComponent::execGetTangentAtDistanceAlongSpline },
			{ "GetTangentAtSplineInputKey", &USplineComponent::execGetTangentAtSplineInputKey },
			{ "GetTangentAtSplinePoint", &USplineComponent::execGetTangentAtSplinePoint },
			{ "GetTangentAtTime", &USplineComponent::execGetTangentAtTime },
			{ "GetTimeAtDistanceAlongSpline", &USplineComponent::execGetTimeAtDistanceAlongSpline },
			{ "GetTransformAtDistanceAlongSpline", &USplineComponent::execGetTransformAtDistanceAlongSpline },
			{ "GetTransformAtSplineInputKey", &USplineComponent::execGetTransformAtSplineInputKey },
			{ "GetTransformAtSplinePoint", &USplineComponent::execGetTransformAtSplinePoint },
			{ "GetTransformAtTime", &USplineComponent::execGetTransformAtTime },
			{ "GetUpVectorAtDistanceAlongSpline", &USplineComponent::execGetUpVectorAtDistanceAlongSpline },
			{ "GetUpVectorAtSplineInputKey", &USplineComponent::execGetUpVectorAtSplineInputKey },
			{ "GetUpVectorAtSplinePoint", &USplineComponent::execGetUpVectorAtSplinePoint },
			{ "GetUpVectorAtTime", &USplineComponent::execGetUpVectorAtTime },
			{ "GetVectorPropertyAtSplineInputKey", &USplineComponent::execGetVectorPropertyAtSplineInputKey },
			{ "GetVectorPropertyAtSplinePoint", &USplineComponent::execGetVectorPropertyAtSplinePoint },
			{ "GetWorldDirectionAtDistanceAlongSpline", &USplineComponent::execGetWorldDirectionAtDistanceAlongSpline },
			{ "GetWorldDirectionAtTime", &USplineComponent::execGetWorldDirectionAtTime },
			{ "GetWorldLocationAtDistanceAlongSpline", &USplineComponent::execGetWorldLocationAtDistanceAlongSpline },
			{ "GetWorldLocationAtSplinePoint", &USplineComponent::execGetWorldLocationAtSplinePoint },
			{ "GetWorldLocationAtTime", &USplineComponent::execGetWorldLocationAtTime },
			{ "GetWorldRotationAtDistanceAlongSpline", &USplineComponent::execGetWorldRotationAtDistanceAlongSpline },
			{ "GetWorldRotationAtTime", &USplineComponent::execGetWorldRotationAtTime },
			{ "GetWorldTangentAtDistanceAlongSpline", &USplineComponent::execGetWorldTangentAtDistanceAlongSpline },
			{ "IsClosedLoop", &USplineComponent::execIsClosedLoop },
			{ "RemoveSplinePoint", &USplineComponent::execRemoveSplinePoint },
			{ "SetClosedLoop", &USplineComponent::execSetClosedLoop },
			{ "SetClosedLoopAtPosition", &USplineComponent::execSetClosedLoopAtPosition },
			{ "SetDefaultUpVector", &USplineComponent::execSetDefaultUpVector },
			{ "SetDrawDebug", &USplineComponent::execSetDrawDebug },
			{ "SetLocationAtSplinePoint", &USplineComponent::execSetLocationAtSplinePoint },
			{ "SetRotationAtSplinePoint", &USplineComponent::execSetRotationAtSplinePoint },
			{ "SetScaleAtSplinePoint", &USplineComponent::execSetScaleAtSplinePoint },
			{ "SetSelectedSplineSegmentColor", &USplineComponent::execSetSelectedSplineSegmentColor },
			{ "SetSplineLocalPoints", &USplineComponent::execSetSplineLocalPoints },
			{ "SetSplinePoints", &USplineComponent::execSetSplinePoints },
			{ "SetSplinePointType", &USplineComponent::execSetSplinePointType },
			{ "SetSplineWorldPoints", &USplineComponent::execSetSplineWorldPoints },
			{ "SetTangentAtSplinePoint", &USplineComponent::execSetTangentAtSplinePoint },
			{ "SetTangentColor", &USplineComponent::execSetTangentColor },
			{ "SetTangentsAtSplinePoint", &USplineComponent::execSetTangentsAtSplinePoint },
			{ "SetUnselectedSplineSegmentColor", &USplineComponent::execSetUnselectedSplineSegmentColor },
			{ "SetUpVectorAtSplinePoint", &USplineComponent::execSetUpVectorAtSplinePoint },
			{ "SetWorldLocationAtSplinePoint", &USplineComponent::execSetWorldLocationAtSplinePoint },
			{ "UpdateSpline", &USplineComponent::execUpdateSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineComponent_AddPoint_Statics
	{
		struct SplineComponent_eventAddPoint_Parms
		{
			FSplinePoint Point;
			bool bUpdateSpline;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddPoint_Parms, Point), Z_Construct_UScriptStruct_FSplinePoint, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point_MetaData)) }; // 170360627
	void Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddPoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventAddPoint_Parms), &Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds an FSplinePoint to the spline. This contains its input key, position, tangent, rotation and scale. */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds an FSplinePoint to the spline. This contains its input key, position, tangent, rotation and scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::SplineComponent_eventAddPoint_Parms), Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddPoints_Statics
	{
		struct SplineComponent_eventAddPoints_Parms
		{
			TArray<FSplinePoint> Points;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSplinePoint, METADATA_PARAMS(nullptr, 0) }; // 170360627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_MetaData)) }; // 170360627
	void Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddPoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventAddPoints_Parms), &Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddPoints_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds an array of FSplinePoints to the spline. */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds an array of FSplinePoints to the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::SplineComponent_eventAddPoints_Parms), Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics
	{
		struct SplineComponent_eventAddSplineLocalPoint_Parms
		{
			FVector Position;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplineLocalPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds a local space point to the spline */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddSplinePoint, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a local space point to the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplineLocalPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::SplineComponent_eventAddSplineLocalPoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics
	{
		struct SplineComponent_eventAddSplinePoint_Parms
		{
			FVector Position;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplinePoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventAddSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds a point to the spline */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a point to the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::SplineComponent_eventAddSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics
	{
		struct SplineComponent_eventAddSplinePointAtIndex_Parms
		{
			FVector Position;
			int32 Index;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplinePointAtIndex_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventAddSplinePointAtIndex_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventAddSplinePointAtIndex_Parms), &Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds a point to the spline at the specified index */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a point to the spline at the specified index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplinePointAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::SplineComponent_eventAddSplinePointAtIndex_Parms), Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics
	{
		struct SplineComponent_eventAddSplineWorldPoint_Parms
		{
			FVector Position;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventAddSplineWorldPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Adds a world space point to the spline */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use AddSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Adds a world space point to the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "AddSplineWorldPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::SplineComponent_eventAddSplineWorldPoint_Parms), Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics
	{
		struct SplineComponent_eventClearSplinePoints_Parms
		{
			bool bUpdateSpline;
		};
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventClearSplinePoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventClearSplinePoints_Parms), &Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Clears all the points in the spline */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Clears all the points in the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "ClearSplinePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::SplineComponent_eventClearSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_ClearSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_ClearSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics
	{
		struct SplineComponent_eventConvertSplineSegmentToPolyLine_Parms
		{
			int32 SplinePointStartIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float MaxSquareDistanceFromSpline;
			TArray<FVector> OutPoints;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SplinePointStartIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquareDistanceFromSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSquareDistanceFromSpline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_SplinePointStartIndex = { "SplinePointStartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineSegmentToPolyLine_Parms, SplinePointStartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineSegmentToPolyLine_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline = { "MaxSquareDistanceFromSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineSegmentToPolyLine_Parms, MaxSquareDistanceFromSpline), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineSegmentToPolyLine_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventConvertSplineSegmentToPolyLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventConvertSplineSegmentToPolyLine_Parms), &Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_SplinePointStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a threshold, returns a list of vertices along the spline segment that, treated as a list of segments (polyline), matches the spline shape. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a threshold, returns a list of vertices along the spline segment that, treated as a list of segments (polyline), matches the spline shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "ConvertSplineSegmentToPolyLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::SplineComponent_eventConvertSplineSegmentToPolyLine_Parms), Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics
	{
		struct SplineComponent_eventConvertSplineToPolyLine_Parms
		{
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float MaxSquareDistanceFromSpline;
			TArray<FVector> OutPoints;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquareDistanceFromSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSquareDistanceFromSpline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineToPolyLine_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline = { "MaxSquareDistanceFromSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineToPolyLine_Parms, MaxSquareDistanceFromSpline), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventConvertSplineToPolyLine_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventConvertSplineToPolyLine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventConvertSplineToPolyLine_Parms), &Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_MaxSquareDistanceFromSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a threshold, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a threshold, returns a list of vertices along the spline that, treated as a list of segments (polyline), matches the spline shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "ConvertSplineToPolyLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::SplineComponent_eventConvertSplineToPolyLine_Parms), Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics
	{
		struct SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms
		{
			float StartDistanceAlongSpline;
			float EndDistanceAlongSpline;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float MaxSquareDistanceFromSpline;
			TArray<FVector> OutPoints;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistanceAlongSpline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndDistanceAlongSpline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquareDistanceFromSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSquareDistanceFromSpline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_StartDistanceAlongSpline = { "StartDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms, StartDistanceAlongSpline), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_EndDistanceAlongSpline = { "EndDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms, EndDistanceAlongSpline), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_MaxSquareDistanceFromSpline = { "MaxSquareDistanceFromSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms, MaxSquareDistanceFromSpline), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms), &Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_StartDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_EndDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_MaxSquareDistanceFromSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "DivideSplineIntoPolylineRecursive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::SplineComponent_eventDivideSplineIntoPolylineRecursive_Parms), Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics
	{
		struct SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms
		{
			float StartDistanceAlongSpline;
			float EndDistanceAlongSpline;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float MaxSquareDistanceFromSpline;
			TArray<FVector> OutPoints;
			TArray<double> OutDistancesAlongSpline;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistanceAlongSpline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndDistanceAlongSpline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquareDistanceFromSpline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSquareDistanceFromSpline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutDistancesAlongSpline_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDistancesAlongSpline;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_StartDistanceAlongSpline = { "StartDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, StartDistanceAlongSpline), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_EndDistanceAlongSpline = { "EndDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, EndDistanceAlongSpline), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_MaxSquareDistanceFromSpline = { "MaxSquareDistanceFromSpline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, MaxSquareDistanceFromSpline), METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_MaxSquareDistanceFromSpline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutDistancesAlongSpline_Inner = { "OutDistancesAlongSpline", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutDistancesAlongSpline = { "OutDistancesAlongSpline", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms, OutDistancesAlongSpline), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms), &Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_StartDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_EndDistanceAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_MaxSquareDistanceFromSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutDistancesAlongSpline_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_OutDistancesAlongSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a threshold, recursively sub-divides the spline section until the list of segments (polyline) matches the spline shape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "DivideSplineIntoPolylineRecursiveWithDistances", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::SplineComponent_eventDivideSplineIntoPolylineRecursiveWithDistances_Parms), Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindDirectionClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindDirectionClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return a unit direction vector of the spline tangent closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return a unit direction vector of the spline tangent closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindDirectionClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::SplineComponent_eventFindDirectionClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return the input key closest to that location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the input key closest to that location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindInputKeyClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::SplineComponent_eventFindInputKeyClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindLocationClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindLocationClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return the point on the curve that is closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the point on the curve that is closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindLocationClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::SplineComponent_eventFindLocationClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return a unit direction vector corresponding to the spline's right vector closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return a unit direction vector corresponding to the spline's right vector closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRightVectorClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::SplineComponent_eventFindRightVectorClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRollClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRollClosestToWorldLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return the spline's roll closest to the location, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the spline's roll closest to the location, in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRollClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::SplineComponent_eventFindRollClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindRotationClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindRotationClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return rotation corresponding to the spline's rotation closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return rotation corresponding to the spline's rotation closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindRotationClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::SplineComponent_eventFindRotationClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindScaleClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindScaleClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindScaleClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return the spline's scale closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the spline's scale closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindScaleClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::SplineComponent_eventFindScaleClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindTangentClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTangentClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return the tangent vector of the spline closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return the tangent vector of the spline closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindTangentClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::SplineComponent_eventFindTangentClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindTransformClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventFindTransformClosestToWorldLocation_Parms*)Obj)->bUseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventFindTransformClosestToWorldLocation_Parms), &Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindTransformClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_bUseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return an FTransform closest to that location. */" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return an FTransform closest to that location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindTransformClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::SplineComponent_eventFindTransformClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics
	{
		struct SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms
		{
			FVector WorldLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a location, in world space, return a unit direction vector corresponding to the spline's up vector closest to the location. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a location, in world space, return a unit direction vector corresponding to the spline's up vector closest to the location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "FindUpVectorClosestToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::SplineComponent_eventFindUpVectorClosestToWorldLocation_Parms), Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetArriveTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetArriveTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the arrive tangent at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the arrive tangent at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetArriveTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::SplineComponent_eventGetArriveTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics
	{
		struct SplineComponent_eventGetDefaultUpVector_Parms
		{
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDefaultUpVector_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDefaultUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Gets the default up vector used by this spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Gets the default up vector used by this spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDefaultUpVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::SplineComponent_eventGetDefaultUpVector_Parms), Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDefaultUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDefaultUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a unit direction vector of the spline tangent there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::SplineComponent_eventGetDirectionAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetDirectionAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get unit direction along spline at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get unit direction along spline at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::SplineComponent_eventGetDirectionAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetDirectionAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the direction at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the direction at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::SplineComponent_eventGetDirectionAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics
	{
		struct SplineComponent_eventGetDirectionAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetDirectionAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetDirectionAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDirectionAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDirectionAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::SplineComponent_eventGetDirectionAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDirectionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDirectionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetDistanceAlongSplineAtSplineInputKey_Parms
		{
			float InKey;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get distance along the spline at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get distance along the spline at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDistanceAlongSplineAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::SplineComponent_eventGetDistanceAlongSplineAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms
		{
			int32 PointIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the distance along the spline at the spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the distance along the spline at the spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetDistanceAlongSplineAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::SplineComponent_eventGetDistanceAlongSplineAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetFloatPropertyAtSplineInputKey_Parms
		{
			float InKey;
			FName PropertyName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplineInputKey_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get a metadata property float value along the spline at spline input key */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get a metadata property float value along the spline at spline input key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetFloatPropertyAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::SplineComponent_eventGetFloatPropertyAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetFloatPropertyAtSplinePoint_Parms
		{
			int32 Index;
			FName PropertyName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplinePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplinePoint_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetFloatPropertyAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get a metadata property float value along the spline at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get a metadata property float value along the spline at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetFloatPropertyAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::SplineComponent_eventGetFloatPropertyAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms
		{
			float Distance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** This method has been deprecated because it was incorrectly returning the input key at time. To maintain the same behavior,\n\x09 *  replace it with GetTimeAtDistanceAlongSpline. To actually get the input key, instead call GetInputKeyValueAtDistanceAlongSpline. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetInputKeyValueAtDistanceAlongSpline to get input key at distance or GetTimeAtDistanceAlongSpline to get time value (normalized to duration) at distance (same logic as deprecated function)." },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "This method has been deprecated because it was incorrectly returning the input key at time. To maintain the same behavior,\nreplace it with GetTimeAtDistanceAlongSpline. To actually get the input key, instead call GetInputKeyValueAtDistanceAlongSpline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetInputKeyAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::SplineComponent_eventGetInputKeyAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetInputKeyValueAtDistanceAlongSpline_Parms
		{
			float Distance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetInputKeyValueAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetInputKeyValueAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the corresponding input key at that point \n      * with a fractional component between the current input key and the next as a percentage. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the corresponding input key at that point\nwith a fractional component between the current input key and the next as a percentage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetInputKeyValueAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::SplineComponent_eventGetInputKeyValueAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the leave tangent at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the leave tangent at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLeaveTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::SplineComponent_eventGetLeaveTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector LocalLocation;
			FVector LocalTangent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalTangent = { "LocalTangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms, LocalTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::NewProp_LocalTangent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get local location and tangent at a spline point */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAndTangentAtSplinePoint, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get local location and tangent at a spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocalLocationAndTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::SplineComponent_eventGetLocalLocationAndTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector Location;
			FVector Tangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get location and tangent at a spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get location and tangent at a spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAndTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::SplineComponent_eventGetLocationAndTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the point in space where this puts you */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in space where this puts you" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::SplineComponent_eventGetLocationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetLocationAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get location along spline at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get location along spline at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::SplineComponent_eventGetLocationAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the location at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the location at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::SplineComponent_eventGetLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics
	{
		struct SplineComponent_eventGetLocationAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetLocationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetLocationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetLocationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the point in space where this puts you */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the point in space where this puts you" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetLocationAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::SplineComponent_eventGetLocationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetLocationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetLocationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics
	{
		struct SplineComponent_eventGetNumberOfSplinePoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetNumberOfSplinePoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the number of points that make up this spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the number of points that make up this spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetNumberOfSplinePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::SplineComponent_eventGetNumberOfSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics
	{
		struct SplineComponent_eventGetNumberOfSplineSegments_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetNumberOfSplineSegments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the number of segments that make up this spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the number of segments that make up this spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetNumberOfSplineSegments", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::SplineComponent_eventGetNumberOfSplineSegments_Parms), Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's right vector there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's right vector there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::SplineComponent_eventGetRightVectorAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetRightVectorAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get right vector at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get right vector at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::SplineComponent_eventGetRightVectorAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRightVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the right vector at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the right vector at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::SplineComponent_eventGetRightVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics
	{
		struct SplineComponent_eventGetRightVectorAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRightVectorAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetRightVectorAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRightVectorAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's right vector there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's right vector there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRightVectorAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::SplineComponent_eventGetRightVectorAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRollAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the spline's roll there, in degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the spline's roll there, in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::SplineComponent_eventGetRollAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetRollAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplineInputKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get roll in degrees at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get roll in degrees at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::SplineComponent_eventGetRollAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRollAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtSplinePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the amount of roll at spline point, in degrees */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the amount of roll at spline point, in degrees" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::SplineComponent_eventGetRollAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics
	{
		struct SplineComponent_eventGetRollAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRollAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetRollAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRollAtTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's roll there, in degrees. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's roll there, in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRollAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::SplineComponent_eventGetRollAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRollAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRollAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::SplineComponent_eventGetRotationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetRotationAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get rotator corresponding to rotation along spline at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get rotator corresponding to rotation along spline at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::SplineComponent_eventGetRotationAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetRotationAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the rotation at spline point as a rotator */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the rotation at spline point as a rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::SplineComponent_eventGetRotationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics
	{
		struct SplineComponent_eventGetRotationAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetRotationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetRotationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetRotationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetRotationAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::SplineComponent_eventGetRotationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetRotationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetRotationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the spline's scale there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the spline's scale there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::SplineComponent_eventGetScaleAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetScaleAtSplineInputKey_Parms
		{
			float InKey;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get scale at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get scale at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::SplineComponent_eventGetScaleAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetScaleAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the scale at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the scale at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::SplineComponent_eventGetScaleAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics
	{
		struct SplineComponent_eventGetScaleAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetScaleAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetScaleAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetScaleAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's scale there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's scale there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetScaleAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::SplineComponent_eventGetScaleAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetScaleAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetScaleAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics
	{
		struct SplineComponent_eventGetSplineLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetSplineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Returns total length along this spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Returns total length along this spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetSplineLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::SplineComponent_eventGetSplineLength_Parms), Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetSplineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetSplineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics
	{
		struct SplineComponent_eventGetSplinePointType_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplinePointType::Type> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetSplinePointType_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetSplinePointType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) }; // 1353148516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the type of a spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the type of a spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetSplinePointType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::SplineComponent_eventGetSplinePointType_Parms), Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetSplinePointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetSplinePointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the tangent vector of the spline there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the tangent vector of the spline there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::SplineComponent_eventGetTangentAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetTangentAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get tangent along spline at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get tangent along spline at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::SplineComponent_eventGetTangentAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the tangent at spline point. This fetches the Leave tangent of the point. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the tangent at spline point. This fetches the Leave tangent of the point." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::SplineComponent_eventGetTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics
	{
		struct SplineComponent_eventGetTangentAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTangentAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTangentAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTangentAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's tangent there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's tangent there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTangentAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::SplineComponent_eventGetTangentAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTangentAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTangentAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetTimeAtDistanceAlongSpline_Parms
		{
			float Distance;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTimeAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTimeAtDistanceAlongSpline_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the corresponding time at that point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the corresponding time at that point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTimeAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::SplineComponent_eventGetTimeAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms*)Obj)->bUseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_bUseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return an FTransform corresponding to that point on the spline. */" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return an FTransform corresponding to that point on the spline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::SplineComponent_eventGetTransformAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetTransformAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtSplineInputKey_Parms*)Obj)->bUseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtSplineInputKey_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_bUseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get transform at the provided input key value */" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get transform at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::SplineComponent_eventGetTransformAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetTransformAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtSplinePoint_Parms*)Obj)->bUseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_bUseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the transform at spline point */" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the transform at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::SplineComponent_eventGetTransformAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics
	{
		struct SplineComponent_eventGetTransformAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			bool bUseScale;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static void NewProp_bUseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale_SetBit(void* Obj)
	{
		((SplineComponent_eventGetTransformAtTime_Parms*)Obj)->bUseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale = { "bUseScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetTransformAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetTransformAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_bUseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's transform at the corresponding position. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "CPP_Default_bUseScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's transform at the corresponding position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetTransformAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::SplineComponent_eventGetTransformAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetTransformAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetTransformAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms
		{
			float Distance;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's up vector there. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector corresponding to the spline's up vector there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::SplineComponent_eventGetUpVectorAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetUpVectorAtSplineInputKey_Parms
		{
			float InKey;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplineInputKey_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get up vector at the provided input key value */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get up vector at the provided input key value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::SplineComponent_eventGetUpVectorAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetUpVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the up vector at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the up vector at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::SplineComponent_eventGetUpVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics
	{
		struct SplineComponent_eventGetUpVectorAtTime_Parms
		{
			float Time;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetUpVectorAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetUpVectorAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetUpVectorAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the spline's up vector there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the spline's up vector there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetUpVectorAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::SplineComponent_eventGetUpVectorAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics
	{
		struct SplineComponent_eventGetVectorPropertyAtSplineInputKey_Parms
		{
			float InKey;
			FName PropertyName;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplineInputKey_Parms, InKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplineInputKey_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplineInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get a metadata property vector value along the spline at spline input key */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get a metadata property vector value along the spline at spline input key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetVectorPropertyAtSplineInputKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::SplineComponent_eventGetVectorPropertyAtSplineInputKey_Parms), Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetVectorPropertyAtSplinePoint_Parms
		{
			int32 Index;
			FName PropertyName;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplinePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplinePoint_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetVectorPropertyAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get a metadata property vector value along the spline at spline point */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get a metadata property vector value along the spline at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetVectorPropertyAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::SplineComponent_eventGetVectorPropertyAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a unit direction vector of the spline tangent there, in world space. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetDirectionAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a unit direction vector of the spline tangent there, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldDirectionAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::SplineComponent_eventGetWorldDirectionAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics
	{
		struct SplineComponent_eventGetWorldDirectionAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldDirectionAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetWorldDirectionAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldDirectionAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetDirectionAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a unit direction vector of the spline tangent there." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldDirectionAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::SplineComponent_eventGetWorldDirectionAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the point in world space where this puts you */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the point in world space where this puts you" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::SplineComponent_eventGetWorldLocationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtSplinePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Get the world location at spline point */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Get the world location at spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::SplineComponent_eventGetWorldLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics
	{
		struct SplineComponent_eventGetWorldLocationAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldLocationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetWorldLocationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldLocationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return the point in space where this puts you */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetLocationAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return the point in space where this puts you" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldLocationAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::SplineComponent_eventGetWorldLocationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms
		{
			float Distance;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there, in world space. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetRotationAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return a rotation corresponding to the spline's rotation there, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldRotationAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::SplineComponent_eventGetWorldRotationAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics
	{
		struct SplineComponent_eventGetWorldRotationAtTime_Parms
		{
			float Time;
			bool bUseConstantVelocity;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bUseConstantVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit(void* Obj)
	{
		((SplineComponent_eventGetWorldRotationAtTime_Parms*)Obj)->bUseConstantVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity = { "bUseConstantVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventGetWorldRotationAtTime_Parms), &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldRotationAtTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_bUseConstantVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there, in world space. */" },
		{ "CPP_Default_bUseConstantVelocity", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetRotationAtTime, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a time from 0 to the spline duration, return a rotation corresponding to the spline's position and direction there, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldRotationAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::SplineComponent_eventGetWorldRotationAtTime_Parms), Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics
	{
		struct SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms
		{
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Given a distance along the length of this spline, return the tangent vector of the spline there, in world space. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetTangentAtDistanceAlongSpline, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Given a distance along the length of this spline, return the tangent vector of the spline there, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "GetWorldTangentAtDistanceAlongSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::SplineComponent_eventGetWorldTangentAtDistanceAlongSpline_Parms), Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics
	{
		struct SplineComponent_eventIsClosedLoop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineComponent_eventIsClosedLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventIsClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Check whether the spline is a closed loop or not */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Check whether the spline is a closed loop or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "IsClosedLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::SplineComponent_eventIsClosedLoop_Parms), Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_IsClosedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_IsClosedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics
	{
		struct SplineComponent_eventRemoveSplinePoint_Parms
		{
			int32 Index;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventRemoveSplinePoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventRemoveSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventRemoveSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Removes point at specified index from the spline */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Removes point at specified index from the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "RemoveSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::SplineComponent_eventRemoveSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_RemoveSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_RemoveSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics
	{
		struct SplineComponent_eventSetClosedLoop_Parms
		{
			bool bInClosedLoop;
			bool bUpdateSpline;
		};
		static void NewProp_bInClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInClosedLoop;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoop_Parms*)Obj)->bInClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop = { "bInClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoop_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoop_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bInClosedLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify whether the spline is a closed loop or not. The loop position will be at 1.0 after the last point's input key */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether the spline is a closed loop or not. The loop position will be at 1.0 after the last point's input key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetClosedLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::SplineComponent_eventSetClosedLoop_Parms), Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetClosedLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics
	{
		struct SplineComponent_eventSetClosedLoopAtPosition_Parms
		{
			bool bInClosedLoop;
			float Key;
			bool bUpdateSpline;
		};
		static void NewProp_bInClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInClosedLoop;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Key;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoopAtPosition_Parms*)Obj)->bInClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop = { "bInClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoopAtPosition_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetClosedLoopAtPosition_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetClosedLoopAtPosition_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetClosedLoopAtPosition_Parms), &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bInClosedLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify whether the spline is a closed loop or not, and if so, the input key corresponding to the loop point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether the spline is a closed loop or not, and if so, the input key corresponding to the loop point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetClosedLoopAtPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::SplineComponent_eventSetClosedLoopAtPosition_Parms), Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics
	{
		struct SplineComponent_eventSetDefaultUpVector_Parms
		{
			FVector UpVector;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetDefaultUpVector_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetDefaultUpVector_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::NewProp_CoordinateSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Sets the default up vector used by this spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the default up vector used by this spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetDefaultUpVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::SplineComponent_eventSetDefaultUpVector_Parms), Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetDefaultUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetDefaultUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics
	{
		struct SplineComponent_eventSetDrawDebug_Parms
		{
			bool bShow;
		};
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SplineComponent_eventSetDrawDebug_Parms*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetDrawDebug_Parms), &Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify whether this spline should be rendered when the Editor/Game spline show flag is set */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify whether this spline should be rendered when the Editor/Game spline show flag is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetDrawDebug", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::SplineComponent_eventSetDrawDebug_Parms), Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetDrawDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetDrawDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InLocation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetLocationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetLocationAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetLocationAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Move an existing point to a new location */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Move an existing point to a new location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetLocationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::SplineComponent_eventSetLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetRotationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FRotator InRotation;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetRotationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetRotationAtSplinePoint_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_InRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetRotationAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetRotationAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetRotationAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Set the rotation of an existing spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Set the rotation of an existing spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetRotationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::SplineComponent_eventSetRotationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetScaleAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InScaleVector;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScaleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScaleVector;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetScaleAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_InScaleVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_InScaleVector = { "InScaleVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetScaleAtSplinePoint_Parms, InScaleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_InScaleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_InScaleVector_MetaData)) };
	void Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetScaleAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetScaleAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_InScaleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Set the scale at a given spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Set the scale at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetScaleAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::SplineComponent_eventSetScaleAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics
	{
		struct SplineComponent_eventSetSelectedSplineSegmentColor_Parms
		{
			FLinearColor SegmentColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor = { "SegmentColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSelectedSplineSegmentColor_Parms, SegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::NewProp_SegmentColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Specify selected spline component segment color in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify selected spline component segment color in the editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSelectedSplineSegmentColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::SplineComponent_eventSetSelectedSplineSegmentColor_Parms), Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics
	{
		struct SplineComponent_eventSetSplineLocalPoints_Parms
		{
			TArray<FVector> Points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplineLocalPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Sets the spline to an array of local space points */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetSplinePoints, specifying SplineCoordinateSpace::Local" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of local space points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplineLocalPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::SplineComponent_eventSetSplineLocalPoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics
	{
		struct SplineComponent_eventSetSplinePoints_Parms
		{
			TArray<FVector> Points;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplinePoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplinePoints_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetSplinePoints_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetSplinePoints_Parms), &Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Sets the spline to an array of points */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplinePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::SplineComponent_eventSetSplinePoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplinePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics
	{
		struct SplineComponent_eventSetSplinePointType_Parms
		{
			int32 PointIndex;
			TEnumAsByte<ESplinePointType::Type> Type;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplinePointType_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplinePointType_Parms, Type), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) }; // 1353148516
	void Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetSplinePointType_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetSplinePointType_Parms), &Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify the type of a spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the type of a spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplinePointType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::SplineComponent_eventSetSplinePointType_Parms), Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplinePointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplinePointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics
	{
		struct SplineComponent_eventSetSplineWorldPoints_Parms
		{
			TArray<FVector> Points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetSplineWorldPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Sets the spline to an array of world space points */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetSplinePoints, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Sets the spline to an array of world space points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetSplineWorldPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::SplineComponent_eventSetSplineWorldPoints_Parms), Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetTangentAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InTangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTangent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent = { "InTangent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, InTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetTangentAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetTangentAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_InTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify the tangent at a given spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the tangent at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetTangentAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::SplineComponent_eventSetTangentAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics
	{
		struct SplineComponent_eventSetTangentColor_Parms
		{
			FLinearColor TangentColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::NewProp_TangentColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::NewProp_TangentColor = { "TangentColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentColor_Parms, TangentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::NewProp_TangentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::NewProp_TangentColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::NewProp_TangentColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Specify selected spline component segment color in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify selected spline component segment color in the editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetTangentColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::SplineComponent_eventSetTangentColor_Parms), Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetTangentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetTangentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetTangentsAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InArriveTangent;
			FVector InLeaveTangent;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLeaveTangent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent = { "InArriveTangent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, InArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent = { "InLeaveTangent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, InLeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetTangentsAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetTangentsAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetTangentsAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_InLeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify the tangents at a given spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the tangents at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetTangentsAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::SplineComponent_eventSetTangentsAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics
	{
		struct SplineComponent_eventSetUnselectedSplineSegmentColor_Parms
		{
			FLinearColor SegmentColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor = { "SegmentColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetUnselectedSplineSegmentColor_Parms, SegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::NewProp_SegmentColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Specify unselected spline component segment color in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify unselected spline component segment color in the editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetUnselectedSplineSegmentColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::SplineComponent_eventSetUnselectedSplineSegmentColor_Parms), Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetUpVectorAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InUpVector;
			TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
			bool bUpdateSpline;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUpVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static void NewProp_bUpdateSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector = { "InUpVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, InUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetUpVectorAtSplinePoint_Parms, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(nullptr, 0) }; // 3922911668
	void Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((SplineComponent_eventSetUpVectorAtSplinePoint_Parms*)Obj)->bUpdateSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineComponent_eventSetUpVectorAtSplinePoint_Parms), &Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_InUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_CoordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::NewProp_bUpdateSpline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specify the up vector at a given spline point */" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specify the up vector at a given spline point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetUpVectorAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::SplineComponent_eventSetUpVectorAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics
	{
		struct SplineComponent_eventSetWorldLocationAtSplinePoint_Parms
		{
			int32 PointIndex;
			FVector InLocation;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetWorldLocationAtSplinePoint_Parms, PointIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineComponent_eventSetWorldLocationAtSplinePoint_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_PointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Move an existing point to a new world location */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetLocationAtSplinePoint, specifying SplineCoordinateSpace::World" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Move an existing point to a new world location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "SetWorldLocationAtSplinePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::SplineComponent_eventSetWorldLocationAtSplinePoint_Parms), Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Update the spline tangents and SplineReparamTable */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Update the spline tangents and SplineReparamTable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineComponent, nullptr, "UpdateSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineComponent_UpdateSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineComponent_UpdateSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineComponent);
	UClass* Z_Construct_UClass_USplineComponent_NoRegister()
	{
		return USplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineRotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineRotInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineScaleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineScaleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineReparamTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineReparamTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSplineEditingPerInstance_MetaData[];
#endif
		static void NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSplineEditingPerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStationaryEndpoints_MetaData[];
#endif
		static void NewProp_bStationaryEndpoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStationaryEndpoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplineHasBeenEdited_MetaData[];
#endif
		static void NewProp_bSplineHasBeenEdited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineHasBeenEdited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModifiedByConstructionScript_MetaData[];
#endif
		static void NewProp_bModifiedByConstructionScript_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifiedByConstructionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputSplinePointsToConstructionScript_MetaData[];
#endif
		static void NewProp_bInputSplinePointsToConstructionScript_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputSplinePointsToConstructionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[];
#endif
		static void NewProp_bClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopPositionOverride_MetaData[];
#endif
		static void NewProp_bLoopPositionOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopPositionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultUpVector;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorUnselectedSplineSegmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorUnselectedSplineSegmentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSelectedSplineSegmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorSelectedSplineSegmentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTangentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorTangentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDiscontinuousSpline_MetaData[];
#endif
		static void NewProp_bAllowDiscontinuousSpline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDiscontinuousSpline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldVisualizeScale_MetaData[];
#endif
		static void NewProp_bShouldVisualizeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldVisualizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleVisualizationWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleVisualizationWidth;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineComponent_AddPoint, "AddPoint" }, // 3757653382
		{ &Z_Construct_UFunction_USplineComponent_AddPoints, "AddPoints" }, // 2596955040
		{ &Z_Construct_UFunction_USplineComponent_AddSplineLocalPoint, "AddSplineLocalPoint" }, // 3622003396
		{ &Z_Construct_UFunction_USplineComponent_AddSplinePoint, "AddSplinePoint" }, // 4188333259
		{ &Z_Construct_UFunction_USplineComponent_AddSplinePointAtIndex, "AddSplinePointAtIndex" }, // 3061456948
		{ &Z_Construct_UFunction_USplineComponent_AddSplineWorldPoint, "AddSplineWorldPoint" }, // 2584145527
		{ &Z_Construct_UFunction_USplineComponent_ClearSplinePoints, "ClearSplinePoints" }, // 634141337
		{ &Z_Construct_UFunction_USplineComponent_ConvertSplineSegmentToPolyLine, "ConvertSplineSegmentToPolyLine" }, // 2079269399
		{ &Z_Construct_UFunction_USplineComponent_ConvertSplineToPolyLine, "ConvertSplineToPolyLine" }, // 1714039210
		{ &Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursive, "DivideSplineIntoPolylineRecursive" }, // 473535765
		{ &Z_Construct_UFunction_USplineComponent_DivideSplineIntoPolylineRecursiveWithDistances, "DivideSplineIntoPolylineRecursiveWithDistances" }, // 2380448063
		{ &Z_Construct_UFunction_USplineComponent_FindDirectionClosestToWorldLocation, "FindDirectionClosestToWorldLocation" }, // 2824215080
		{ &Z_Construct_UFunction_USplineComponent_FindInputKeyClosestToWorldLocation, "FindInputKeyClosestToWorldLocation" }, // 3951290522
		{ &Z_Construct_UFunction_USplineComponent_FindLocationClosestToWorldLocation, "FindLocationClosestToWorldLocation" }, // 962921561
		{ &Z_Construct_UFunction_USplineComponent_FindRightVectorClosestToWorldLocation, "FindRightVectorClosestToWorldLocation" }, // 3328728828
		{ &Z_Construct_UFunction_USplineComponent_FindRollClosestToWorldLocation, "FindRollClosestToWorldLocation" }, // 1632932168
		{ &Z_Construct_UFunction_USplineComponent_FindRotationClosestToWorldLocation, "FindRotationClosestToWorldLocation" }, // 3230788892
		{ &Z_Construct_UFunction_USplineComponent_FindScaleClosestToWorldLocation, "FindScaleClosestToWorldLocation" }, // 2021732076
		{ &Z_Construct_UFunction_USplineComponent_FindTangentClosestToWorldLocation, "FindTangentClosestToWorldLocation" }, // 513990149
		{ &Z_Construct_UFunction_USplineComponent_FindTransformClosestToWorldLocation, "FindTransformClosestToWorldLocation" }, // 928940391
		{ &Z_Construct_UFunction_USplineComponent_FindUpVectorClosestToWorldLocation, "FindUpVectorClosestToWorldLocation" }, // 3718768125
		{ &Z_Construct_UFunction_USplineComponent_GetArriveTangentAtSplinePoint, "GetArriveTangentAtSplinePoint" }, // 3654489502
		{ &Z_Construct_UFunction_USplineComponent_GetDefaultUpVector, "GetDefaultUpVector" }, // 1450609316
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtDistanceAlongSpline, "GetDirectionAtDistanceAlongSpline" }, // 865083690
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtSplineInputKey, "GetDirectionAtSplineInputKey" }, // 2299481060
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtSplinePoint, "GetDirectionAtSplinePoint" }, // 2711231809
		{ &Z_Construct_UFunction_USplineComponent_GetDirectionAtTime, "GetDirectionAtTime" }, // 3944960237
		{ &Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplineInputKey, "GetDistanceAlongSplineAtSplineInputKey" }, // 2800840367
		{ &Z_Construct_UFunction_USplineComponent_GetDistanceAlongSplineAtSplinePoint, "GetDistanceAlongSplineAtSplinePoint" }, // 3773472141
		{ &Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplineInputKey, "GetFloatPropertyAtSplineInputKey" }, // 675201549
		{ &Z_Construct_UFunction_USplineComponent_GetFloatPropertyAtSplinePoint, "GetFloatPropertyAtSplinePoint" }, // 694423815
		{ &Z_Construct_UFunction_USplineComponent_GetInputKeyAtDistanceAlongSpline, "GetInputKeyAtDistanceAlongSpline" }, // 743695762
		{ &Z_Construct_UFunction_USplineComponent_GetInputKeyValueAtDistanceAlongSpline, "GetInputKeyValueAtDistanceAlongSpline" }, // 1852189550
		{ &Z_Construct_UFunction_USplineComponent_GetLeaveTangentAtSplinePoint, "GetLeaveTangentAtSplinePoint" }, // 777784114
		{ &Z_Construct_UFunction_USplineComponent_GetLocalLocationAndTangentAtSplinePoint, "GetLocalLocationAndTangentAtSplinePoint" }, // 948595629
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAndTangentAtSplinePoint, "GetLocationAndTangentAtSplinePoint" }, // 76845552
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtDistanceAlongSpline, "GetLocationAtDistanceAlongSpline" }, // 3487829029
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtSplineInputKey, "GetLocationAtSplineInputKey" }, // 2550771812
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtSplinePoint, "GetLocationAtSplinePoint" }, // 3792462206
		{ &Z_Construct_UFunction_USplineComponent_GetLocationAtTime, "GetLocationAtTime" }, // 3546679533
		{ &Z_Construct_UFunction_USplineComponent_GetNumberOfSplinePoints, "GetNumberOfSplinePoints" }, // 1072064441
		{ &Z_Construct_UFunction_USplineComponent_GetNumberOfSplineSegments, "GetNumberOfSplineSegments" }, // 2182329437
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtDistanceAlongSpline, "GetRightVectorAtDistanceAlongSpline" }, // 2346749694
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplineInputKey, "GetRightVectorAtSplineInputKey" }, // 2564623246
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtSplinePoint, "GetRightVectorAtSplinePoint" }, // 3491476638
		{ &Z_Construct_UFunction_USplineComponent_GetRightVectorAtTime, "GetRightVectorAtTime" }, // 2543450593
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtDistanceAlongSpline, "GetRollAtDistanceAlongSpline" }, // 116105442
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtSplineInputKey, "GetRollAtSplineInputKey" }, // 3805812502
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtSplinePoint, "GetRollAtSplinePoint" }, // 2580218085
		{ &Z_Construct_UFunction_USplineComponent_GetRollAtTime, "GetRollAtTime" }, // 3525742354
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtDistanceAlongSpline, "GetRotationAtDistanceAlongSpline" }, // 253154710
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtSplineInputKey, "GetRotationAtSplineInputKey" }, // 507278205
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtSplinePoint, "GetRotationAtSplinePoint" }, // 3478480719
		{ &Z_Construct_UFunction_USplineComponent_GetRotationAtTime, "GetRotationAtTime" }, // 2353812324
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtDistanceAlongSpline, "GetScaleAtDistanceAlongSpline" }, // 2611410288
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtSplineInputKey, "GetScaleAtSplineInputKey" }, // 2757265737
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtSplinePoint, "GetScaleAtSplinePoint" }, // 2623272571
		{ &Z_Construct_UFunction_USplineComponent_GetScaleAtTime, "GetScaleAtTime" }, // 2362361267
		{ &Z_Construct_UFunction_USplineComponent_GetSplineLength, "GetSplineLength" }, // 604076607
		{ &Z_Construct_UFunction_USplineComponent_GetSplinePointType, "GetSplinePointType" }, // 1839895893
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtDistanceAlongSpline, "GetTangentAtDistanceAlongSpline" }, // 1193508520
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtSplineInputKey, "GetTangentAtSplineInputKey" }, // 3664026913
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtSplinePoint, "GetTangentAtSplinePoint" }, // 127646142
		{ &Z_Construct_UFunction_USplineComponent_GetTangentAtTime, "GetTangentAtTime" }, // 1616078675
		{ &Z_Construct_UFunction_USplineComponent_GetTimeAtDistanceAlongSpline, "GetTimeAtDistanceAlongSpline" }, // 3098051816
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtDistanceAlongSpline, "GetTransformAtDistanceAlongSpline" }, // 2325946653
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtSplineInputKey, "GetTransformAtSplineInputKey" }, // 4292024044
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtSplinePoint, "GetTransformAtSplinePoint" }, // 854937321
		{ &Z_Construct_UFunction_USplineComponent_GetTransformAtTime, "GetTransformAtTime" }, // 341625505
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtDistanceAlongSpline, "GetUpVectorAtDistanceAlongSpline" }, // 448333128
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplineInputKey, "GetUpVectorAtSplineInputKey" }, // 1696275694
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtSplinePoint, "GetUpVectorAtSplinePoint" }, // 904877726
		{ &Z_Construct_UFunction_USplineComponent_GetUpVectorAtTime, "GetUpVectorAtTime" }, // 3486003997
		{ &Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplineInputKey, "GetVectorPropertyAtSplineInputKey" }, // 682001565
		{ &Z_Construct_UFunction_USplineComponent_GetVectorPropertyAtSplinePoint, "GetVectorPropertyAtSplinePoint" }, // 1900038183
		{ &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtDistanceAlongSpline, "GetWorldDirectionAtDistanceAlongSpline" }, // 2558444600
		{ &Z_Construct_UFunction_USplineComponent_GetWorldDirectionAtTime, "GetWorldDirectionAtTime" }, // 4001950326
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtDistanceAlongSpline, "GetWorldLocationAtDistanceAlongSpline" }, // 1094464823
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtSplinePoint, "GetWorldLocationAtSplinePoint" }, // 1790761262
		{ &Z_Construct_UFunction_USplineComponent_GetWorldLocationAtTime, "GetWorldLocationAtTime" }, // 1970076743
		{ &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtDistanceAlongSpline, "GetWorldRotationAtDistanceAlongSpline" }, // 2389443599
		{ &Z_Construct_UFunction_USplineComponent_GetWorldRotationAtTime, "GetWorldRotationAtTime" }, // 908769260
		{ &Z_Construct_UFunction_USplineComponent_GetWorldTangentAtDistanceAlongSpline, "GetWorldTangentAtDistanceAlongSpline" }, // 1287181849
		{ &Z_Construct_UFunction_USplineComponent_IsClosedLoop, "IsClosedLoop" }, // 3527997131
		{ &Z_Construct_UFunction_USplineComponent_RemoveSplinePoint, "RemoveSplinePoint" }, // 3384073744
		{ &Z_Construct_UFunction_USplineComponent_SetClosedLoop, "SetClosedLoop" }, // 466838189
		{ &Z_Construct_UFunction_USplineComponent_SetClosedLoopAtPosition, "SetClosedLoopAtPosition" }, // 1656237325
		{ &Z_Construct_UFunction_USplineComponent_SetDefaultUpVector, "SetDefaultUpVector" }, // 1530019558
		{ &Z_Construct_UFunction_USplineComponent_SetDrawDebug, "SetDrawDebug" }, // 936838511
		{ &Z_Construct_UFunction_USplineComponent_SetLocationAtSplinePoint, "SetLocationAtSplinePoint" }, // 3165307993
		{ &Z_Construct_UFunction_USplineComponent_SetRotationAtSplinePoint, "SetRotationAtSplinePoint" }, // 3109676988
		{ &Z_Construct_UFunction_USplineComponent_SetScaleAtSplinePoint, "SetScaleAtSplinePoint" }, // 3741106986
		{ &Z_Construct_UFunction_USplineComponent_SetSelectedSplineSegmentColor, "SetSelectedSplineSegmentColor" }, // 3854543657
		{ &Z_Construct_UFunction_USplineComponent_SetSplineLocalPoints, "SetSplineLocalPoints" }, // 858876447
		{ &Z_Construct_UFunction_USplineComponent_SetSplinePoints, "SetSplinePoints" }, // 479224467
		{ &Z_Construct_UFunction_USplineComponent_SetSplinePointType, "SetSplinePointType" }, // 881845064
		{ &Z_Construct_UFunction_USplineComponent_SetSplineWorldPoints, "SetSplineWorldPoints" }, // 1953116733
		{ &Z_Construct_UFunction_USplineComponent_SetTangentAtSplinePoint, "SetTangentAtSplinePoint" }, // 715809019
		{ &Z_Construct_UFunction_USplineComponent_SetTangentColor, "SetTangentColor" }, // 3196961436
		{ &Z_Construct_UFunction_USplineComponent_SetTangentsAtSplinePoint, "SetTangentsAtSplinePoint" }, // 1586232914
		{ &Z_Construct_UFunction_USplineComponent_SetUnselectedSplineSegmentColor, "SetUnselectedSplineSegmentColor" }, // 2790194789
		{ &Z_Construct_UFunction_USplineComponent_SetUpVectorAtSplinePoint, "SetUpVectorAtSplinePoint" }, // 2917947774
		{ &Z_Construct_UFunction_USplineComponent_SetWorldLocationAtSplinePoint, "SetWorldLocationAtSplinePoint" }, // 3614427716
		{ &Z_Construct_UFunction_USplineComponent_UpdateSpline, "UpdateSpline" }, // 1620263458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** \n *\x09""A spline component is a spline shape which can be used for other purposes (e.g. animating objects). It contains debug rendering capabilities.\n *\x09@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "Components/SplineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "A spline component is a spline shape which can be used for other purposes (e.g. animating objects). It contains debug rendering capabilities.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData[] = {
		{ "Category", "Points" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, SplineCurves), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves_MetaData)) }; // 4150481825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData[] = {
		{ "Comment", "/** Deprecated - please use GetSplinePointsPosition() to fetch this FInterpCurve */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsPosition() to fetch this FInterpCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo = { "SplineInfo", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, SplineInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData[] = {
		{ "Comment", "/** Deprecated - please use GetSplinePointsRotation() to fetch this FInterpCurve */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsRotation() to fetch this FInterpCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo = { "SplineRotInfo", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, SplineRotInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveQuat, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData[] = {
		{ "Comment", "/** Deprecated - please use GetSplinePointsScale() to fetch this FInterpCurve */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Deprecated - please use GetSplinePointsScale() to fetch this FInterpCurve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo = { "SplineScaleInfo", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, SplineScaleInfo_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable = { "SplineReparamTable", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, SplineReparamTable_DEPRECATED), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bAllowSplineEditingPerInstance_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance = { "bAllowSplineEditingPerInstance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "Category", "Spline" },
		{ "ClampMax", "100" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of steps per spline segment to place in the reparameterization table */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Number of steps per spline segment to place in the reparameterization table" },
		{ "UIMax", "100" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x0010040000000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, ReparamStepsPerSegment), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Specifies the duration of the spline in seconds */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Specifies the duration of the spline in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Whether the endpoints of the spline are considered stationary when traversing the spline at non-constant velocity.  Essentially this sets the endpoints' tangents to zero vectors. */" },
		{ "EditCondition", "!bClosedLoop" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the endpoints of the spline are considered stationary when traversing the spline at non-constant velocity.  Essentially this sets the endpoints' tangents to zero vectors." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bStationaryEndpoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints = { "bStationaryEndpoints", nullptr, (EPropertyFlags)0x0010040000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Whether the spline has been edited from its default by the spline component visualizer */" },
		{ "DisplayName", "Override Construction Script" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline has been edited from its default by the spline component visualizer" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bSplineHasBeenEdited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited = { "bSplineHasBeenEdited", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData[] = {
		{ "Comment", "/** Whether the UCS has made changes to the spline points */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the UCS has made changes to the spline points" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bModifiedByConstructionScript = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript = { "bModifiedByConstructionScript", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/**\n\x09 * Whether the spline points should be passed to the User Construction Script so they can be further manipulated by it.\n\x09 * If false, they will not be visible to it, and it will not be able to influence the per-instance positions set in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline points should be passed to the User Construction Script so they can be further manipulated by it.\nIf false, they will not be visible to it, and it will not be able to influence the per-instance positions set in the editor." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bInputSplinePointsToConstructionScript = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript = { "bInputSplinePointsToConstructionScript", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** If true, the spline will be rendered if the Splines showflag is set. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "If true, the spline will be rendered if the Splines showflag is set." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/**\n\x09 * Whether the spline is to be considered as a closed loop.\n\x09 * Use SetClosedLoop() to set this property, and IsClosedLoop() to read it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline is to be considered as a closed loop.\nUse SetClosedLoop() to set this property, and IsClosedLoop() to read it." },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData[] = {
		{ "Category", "Spline" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bLoopPositionOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride = { "bLoopPositionOverride", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditCondition", "bLoopPositionOverride" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition = { "LoopPosition", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, LoopPosition), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Default up vector in local space to be used when calculating transforms along the spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Default up vector in local space to be used when calculating transforms along the spline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector = { "DefaultUpVector", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, DefaultUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Color of unselected spline component parts in the editor */" },
		{ "DisplayName", "Editor Spline Unselected Color" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Color of unselected spline component parts in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor = { "EditorUnselectedSplineSegmentColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, EditorUnselectedSplineSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Color of selected spline component parts in the editor */" },
		{ "DisplayName", "Editor Spline Selected Color" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Color of selected spline component parts in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor = { "EditorSelectedSplineSegmentColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, EditorSelectedSplineSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorTangentColor_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Color of spline point tangents in the editor */" },
		{ "DisplayName", "Editor Spline Tangent Color" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Color of spline point tangents in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorTangentColor = { "EditorTangentColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, EditorTangentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorTangentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorTangentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Whether the spline's leave and arrive tangents can be different */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether the spline's leave and arrive tangents can be different" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bAllowDiscontinuousSpline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline = { "bAllowDiscontinuousSpline", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Whether scale visualization should be displayed */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Whether scale visualization should be displayed" },
	};
#endif
	void Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_SetBit(void* Obj)
	{
		((USplineComponent*)Obj)->bShouldVisualizeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale = { "bShouldVisualizeScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplineComponent), &Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Width of spline in editor for use with scale visualization */" },
		{ "EditCondition", "bShouldVisualizeScale" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Width of spline in editor for use with scale visualization" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth = { "ScaleVisualizationWidth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineComponent, ScaleVisualizationWidth), METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineRotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineScaleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_SplineReparamTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowSplineEditingPerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_ReparamStepsPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bStationaryEndpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bSplineHasBeenEdited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bModifiedByConstructionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bInputSplinePointsToConstructionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bClosedLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bLoopPositionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_LoopPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_DefaultUpVector,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorUnselectedSplineSegmentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorSelectedSplineSegmentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_EditorTangentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bAllowDiscontinuousSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_bShouldVisualizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineComponent_Statics::NewProp_ScaleVisualizationWidth,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineComponent_Statics::ClassParams = {
		&USplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineComponent()
	{
		if (!Z_Registration_Info_UClass_USplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineComponent.OuterSingleton, Z_Construct_UClass_USplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USplineComponent>()
	{
		return USplineComponent::StaticClass();
	}

	void USplineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SplineCurves(TEXT("SplineCurves"));
		static const FName Name_ReparamStepsPerSegment(TEXT("ReparamStepsPerSegment"));
		static const FName Name_bStationaryEndpoints(TEXT("bStationaryEndpoints"));
		static const FName Name_bSplineHasBeenEdited(TEXT("bSplineHasBeenEdited"));
		static const FName Name_bInputSplinePointsToConstructionScript(TEXT("bInputSplinePointsToConstructionScript"));
		static const FName Name_bClosedLoop(TEXT("bClosedLoop"));
		static const FName Name_bLoopPositionOverride(TEXT("bLoopPositionOverride"));
		static const FName Name_LoopPosition(TEXT("LoopPosition"));
		static const FName Name_DefaultUpVector(TEXT("DefaultUpVector"));

		const bool bIsValid = true
			&& Name_SplineCurves == ClassReps[(int32)ENetFields_Private::SplineCurves].Property->GetFName()
			&& Name_ReparamStepsPerSegment == ClassReps[(int32)ENetFields_Private::ReparamStepsPerSegment].Property->GetFName()
			&& Name_bStationaryEndpoints == ClassReps[(int32)ENetFields_Private::bStationaryEndpoints].Property->GetFName()
			&& Name_bSplineHasBeenEdited == ClassReps[(int32)ENetFields_Private::bSplineHasBeenEdited].Property->GetFName()
			&& Name_bInputSplinePointsToConstructionScript == ClassReps[(int32)ENetFields_Private::bInputSplinePointsToConstructionScript].Property->GetFName()
			&& Name_bClosedLoop == ClassReps[(int32)ENetFields_Private::bClosedLoop].Property->GetFName()
			&& Name_bLoopPositionOverride == ClassReps[(int32)ENetFields_Private::bLoopPositionOverride].Property->GetFName()
			&& Name_LoopPosition == ClassReps[(int32)ENetFields_Private::LoopPosition].Property->GetFName()
			&& Name_DefaultUpVector == ClassReps[(int32)ENetFields_Private::DefaultUpVector].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USplineComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineComponent);
	USplineComponent::~USplineComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USplineComponent)

static_assert(std::is_polymorphic<FSplineInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FSplineInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineInstanceData;
class UScriptStruct* FSplineInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SplineInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineInstanceData>()
{
	return FSplineInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplineInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplineHasBeenEdited_MetaData[];
#endif
		static void NewProp_bSplineHasBeenEdited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineHasBeenEdited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineCurvesPreUCS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineCurvesPreUCS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store spline data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
		{ "ToolTip", "Used to store spline data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_SetBit(void* Obj)
	{
		((FSplineInstanceData*)Obj)->bSplineHasBeenEdited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited = { "bSplineHasBeenEdited", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSplineInstanceData), &Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineInstanceData, SplineCurves), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves_MetaData)) }; // 4150481825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS = { "SplineCurvesPreUCS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineInstanceData, SplineCurvesPreUCS), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS_MetaData)) }; // 4150481825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_bSplineHasBeenEdited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewProp_SplineCurvesPreUCS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"SplineInstanceData",
		sizeof(FSplineInstanceData),
		alignof(FSplineInstanceData),
		Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SplineInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSplineInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplineInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::EnumInfo[] = {
		{ ESplinePointType_StaticEnum, TEXT("ESplinePointType"), &Z_Registration_Info_UEnum_ESplinePointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1353148516U) },
		{ ESplineCoordinateSpace_StaticEnum, TEXT("ESplineCoordinateSpace"), &Z_Registration_Info_UEnum_ESplineCoordinateSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3922911668U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ScriptStructInfo[] = {
		{ FSplineCurves::StaticStruct, Z_Construct_UScriptStruct_FSplineCurves_Statics::NewStructOps, TEXT("SplineCurves"), &Z_Registration_Info_UScriptStruct_SplineCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineCurves), 4150481825U) },
		{ FSplinePoint::StaticStruct, Z_Construct_UScriptStruct_FSplinePoint_Statics::NewStructOps, TEXT("SplinePoint"), &Z_Registration_Info_UScriptStruct_SplinePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplinePoint), 170360627U) },
		{ FSplineInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSplineInstanceData_Statics::NewStructOps, TEXT("SplineInstanceData"), &Z_Registration_Info_UScriptStruct_SplineInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineInstanceData), 2059775069U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplineMetadata, USplineMetadata::StaticClass, TEXT("USplineMetadata"), &Z_Registration_Info_UClass_USplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineMetadata), 3935378495U) },
		{ Z_Construct_UClass_USplineComponent, USplineComponent::StaticClass, TEXT("USplineComponent"), &Z_Registration_Info_UClass_USplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineComponent), 4131663702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_3791386240(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
