// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineGeneratorPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineGeneratorPanel() {}
// Cross Module References
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UArcSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UArcSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UCircleSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UCircleSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UEllipseSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_UEllipseSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_ULineSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_ULineSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_URectangleSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_URectangleSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineGeneratorBase();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineGeneratorBase_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USquareSplineGenerator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USquareSplineGenerator_NoRegister();
	COMPONENTVISUALIZERS_API UEnum* Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComponentVisualizers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShapeAddMode;
	static UEnum* EShapeAddMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShapeAddMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShapeAddMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode, (UObject*)Z_Construct_UPackage__Script_ComponentVisualizers(), TEXT("EShapeAddMode"));
		}
		return Z_Registration_Info_UEnum_EShapeAddMode.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UEnum* StaticEnum<EShapeAddMode>()
	{
		return EShapeAddMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enumerators[] = {
		{ "EShapeAddMode::AppendAfter", (int64)EShapeAddMode::AppendAfter },
		{ "EShapeAddMode::AppendBefore", (int64)EShapeAddMode::AppendBefore },
		{ "EShapeAddMode::InsertAfter", (int64)EShapeAddMode::InsertAfter },
		{ "EShapeAddMode::InsertBefore", (int64)EShapeAddMode::InsertBefore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enum_MetaDataParams[] = {
		{ "AppendAfter.Name", "EShapeAddMode::AppendAfter" },
		{ "AppendBefore.Name", "EShapeAddMode::AppendBefore" },
		{ "InsertAfter.Name", "EShapeAddMode::InsertAfter" },
		{ "InsertBefore.Name", "EShapeAddMode::InsertBefore" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComponentVisualizers,
		nullptr,
		"EShapeAddMode",
		"EShapeAddMode",
		Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode()
	{
		if (!Z_Registration_Info_UEnum_EShapeAddMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShapeAddMode.InnerSingleton, Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShapeAddMode.InnerSingleton;
	}
	void USplineGeneratorBase::StaticRegisterNativesUSplineGeneratorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineGeneratorBase);
	UClass* Z_Construct_UClass_USplineGeneratorBase_NoRegister()
	{
		return USplineGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_USplineGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeAddMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeAddMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeAddMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode_MetaData[] = {
		{ "Category", "GenerateOptions" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "How to add the shape to the selection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode = { "ShapeAddMode", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineGeneratorBase, ShapeAddMode), Z_Construct_UEnum_ComponentVisualizers_EShapeAddMode, METADATA_PARAMS(Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode_MetaData)) }; // 138783170
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineGeneratorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineGeneratorBase_Statics::NewProp_ShapeAddMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineGeneratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineGeneratorBase_Statics::ClassParams = {
		&USplineGeneratorBase::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplineGeneratorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplineGeneratorBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USplineGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineGeneratorBase()
	{
		if (!Z_Registration_Info_UClass_USplineGeneratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineGeneratorBase.OuterSingleton, Z_Construct_UClass_USplineGeneratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineGeneratorBase.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<USplineGeneratorBase>()
	{
		return USplineGeneratorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineGeneratorBase);
	USplineGeneratorBase::~USplineGeneratorBase() {}
	void UCircleSplineGenerator::StaticRegisterNativesUCircleSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircleSplineGenerator);
	UClass* Z_Construct_UClass_UCircleSplineGenerator_NoRegister()
	{
		return UCircleSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UCircleSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseDir_MetaData[];
#endif
		static void NewProp_bReverseDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepFirstKeyTangent_MetaData[];
#endif
		static void NewProp_bKeepFirstKeyTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepFirstKeyTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBranchRight_MetaData[];
#endif
		static void NewProp_bBranchRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBranchRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircleSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Circle" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "Number of points making up shape" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCircleSplineGenerator, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "Radius of circle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCircleSplineGenerator, Radius), METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will reverse the direction of the circle" },
	};
#endif
	void Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir_SetBit(void* Obj)
	{
		((UCircleSplineGenerator*)Obj)->bReverseDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir = { "bReverseDir", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCircleSplineGenerator), &Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will start the shape tangent to the current path" },
	};
#endif
	void Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit(void* Obj)
	{
		((UCircleSplineGenerator*)Obj)->bKeepFirstKeyTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent = { "bKeepFirstKeyTangent", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCircleSplineGenerator), &Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "EditCondition", "bKeepFirstKeyTangent" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will switch the circle's center to the right of the curve" },
	};
#endif
	void Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight_SetBit(void* Obj)
	{
		((UCircleSplineGenerator*)Obj)->bBranchRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight = { "bBranchRight", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCircleSplineGenerator), &Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircleSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bReverseDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircleSplineGenerator_Statics::NewProp_bBranchRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircleSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircleSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircleSplineGenerator_Statics::ClassParams = {
		&UCircleSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCircleSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircleSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCircleSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircleSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_UCircleSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircleSplineGenerator.OuterSingleton, Z_Construct_UClass_UCircleSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCircleSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<UCircleSplineGenerator>()
	{
		return UCircleSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircleSplineGenerator);
	UCircleSplineGenerator::~UCircleSplineGenerator() {}
	void UArcSplineGenerator::StaticRegisterNativesUArcSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArcSplineGenerator);
	UClass* Z_Construct_UClass_UArcSplineGenerator_NoRegister()
	{
		return UArcSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UArcSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Degrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Degrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseDir_MetaData[];
#endif
		static void NewProp_bReverseDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepFirstKeyTangent_MetaData[];
#endif
		static void NewProp_bKeepFirstKeyTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepFirstKeyTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBranchRight_MetaData[];
#endif
		static void NewProp_bBranchRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBranchRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArcSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Arc" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "Number of points making up shape" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArcSplineGenerator, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "Radius of arc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArcSplineGenerator, Radius), METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Degrees_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "Degree of arc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Degrees = { "Degrees", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArcSplineGenerator, Degrees), METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Degrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Degrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will reverse the direction of the arc" },
	};
#endif
	void Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir_SetBit(void* Obj)
	{
		((UArcSplineGenerator*)Obj)->bReverseDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir = { "bReverseDir", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArcSplineGenerator), &Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will start the shape tangent to the current path" },
	};
#endif
	void Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit(void* Obj)
	{
		((UArcSplineGenerator*)Obj)->bKeepFirstKeyTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent = { "bKeepFirstKeyTangent", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArcSplineGenerator), &Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "EditCondition", "bKeepFirstKeyTangent" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will switch the arc's center to the right of the curve" },
	};
#endif
	void Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight_SetBit(void* Obj)
	{
		((UArcSplineGenerator*)Obj)->bBranchRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight = { "bBranchRight", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArcSplineGenerator), &Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_Degrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bReverseDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcSplineGenerator_Statics::NewProp_bBranchRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArcSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArcSplineGenerator_Statics::ClassParams = {
		&UArcSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArcSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArcSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArcSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArcSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_UArcSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArcSplineGenerator.OuterSingleton, Z_Construct_UClass_UArcSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArcSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<UArcSplineGenerator>()
	{
		return UArcSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArcSplineGenerator);
	UArcSplineGenerator::~UArcSplineGenerator() {}
	void USquareSplineGenerator::StaticRegisterNativesUSquareSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USquareSplineGenerator);
	UClass* Z_Construct_UClass_USquareSplineGenerator_NoRegister()
	{
		return USquareSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_USquareSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBranchRight_MetaData[];
#endif
		static void NewProp_bBranchRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBranchRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USquareSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquareSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Square" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USquareSplineGenerator, Length), METADATA_PARAMS(Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will switch the shape's center to the right of the curve" },
	};
#endif
	void Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight_SetBit(void* Obj)
	{
		((USquareSplineGenerator*)Obj)->bBranchRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight = { "bBranchRight", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USquareSplineGenerator), &Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USquareSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USquareSplineGenerator_Statics::NewProp_bBranchRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USquareSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USquareSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USquareSplineGenerator_Statics::ClassParams = {
		&USquareSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USquareSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USquareSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USquareSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USquareSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USquareSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_USquareSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USquareSplineGenerator.OuterSingleton, Z_Construct_UClass_USquareSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USquareSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<USquareSplineGenerator>()
	{
		return USquareSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USquareSplineGenerator);
	USquareSplineGenerator::~USquareSplineGenerator() {}
	void UEllipseSplineGenerator::StaticRegisterNativesUEllipseSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEllipseSplineGenerator);
	UClass* Z_Construct_UClass_UEllipseSplineGenerator_NoRegister()
	{
		return UEllipseSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UEllipseSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseDir_MetaData[];
#endif
		static void NewProp_bReverseDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepFirstKeyTangent_MetaData[];
#endif
		static void NewProp_bKeepFirstKeyTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepFirstKeyTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBranchRight_MetaData[];
#endif
		static void NewProp_bBranchRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBranchRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEllipseSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ellipse" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEllipseSplineGenerator, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEllipseSplineGenerator, Length), METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEllipseSplineGenerator, Width), METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will reverse the direction of the arc" },
	};
#endif
	void Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir_SetBit(void* Obj)
	{
		((UEllipseSplineGenerator*)Obj)->bReverseDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir = { "bReverseDir", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEllipseSplineGenerator), &Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will start the shape tangent to the current path" },
	};
#endif
	void Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit(void* Obj)
	{
		((UEllipseSplineGenerator*)Obj)->bKeepFirstKeyTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent = { "bKeepFirstKeyTangent", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEllipseSplineGenerator), &Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "EditCondition", "bKeepFirstKeyTangent" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will switch the shape's center to the right of the curve" },
	};
#endif
	void Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight_SetBit(void* Obj)
	{
		((UEllipseSplineGenerator*)Obj)->bBranchRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight = { "bBranchRight", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEllipseSplineGenerator), &Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEllipseSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bReverseDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bKeepFirstKeyTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipseSplineGenerator_Statics::NewProp_bBranchRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEllipseSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEllipseSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEllipseSplineGenerator_Statics::ClassParams = {
		&UEllipseSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEllipseSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEllipseSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEllipseSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEllipseSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_UEllipseSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEllipseSplineGenerator.OuterSingleton, Z_Construct_UClass_UEllipseSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEllipseSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<UEllipseSplineGenerator>()
	{
		return UEllipseSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEllipseSplineGenerator);
	UEllipseSplineGenerator::~UEllipseSplineGenerator() {}
	void URectangleSplineGenerator::StaticRegisterNativesURectangleSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleSplineGenerator);
	UClass* Z_Construct_UClass_URectangleSplineGenerator_NoRegister()
	{
		return URectangleSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_URectangleSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBranchRight_MetaData[];
#endif
		static void NewProp_bBranchRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBranchRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rectangle" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleSplineGenerator, Length), METADATA_PARAMS(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleSplineGenerator, Width), METADATA_PARAMS(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight_MetaData[] = {
		{ "Category", "OtherParameters" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will switch the shape's center to the right of the curve" },
	};
#endif
	void Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight_SetBit(void* Obj)
	{
		((URectangleSplineGenerator*)Obj)->bBranchRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight = { "bBranchRight", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URectangleSplineGenerator), &Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectangleSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleSplineGenerator_Statics::NewProp_bBranchRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleSplineGenerator_Statics::ClassParams = {
		&URectangleSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URectangleSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URectangleSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_URectangleSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleSplineGenerator.OuterSingleton, Z_Construct_UClass_URectangleSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<URectangleSplineGenerator>()
	{
		return URectangleSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleSplineGenerator);
	URectangleSplineGenerator::~URectangleSplineGenerator() {}
	void ULineSplineGenerator::StaticRegisterNativesULineSplineGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineSplineGenerator);
	UClass* Z_Construct_UClass_ULineSplineGenerator_NoRegister()
	{
		return ULineSplineGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ULineSplineGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUpToNextPoint_MetaData[];
#endif
		static void NewProp_bEnableUpToNextPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUpToNextPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpToNextPoint_MetaData[];
#endif
		static void NewProp_bUpToNextPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpToNextPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineSplineGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineSplineGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Line" },
		{ "IncludePath", "SplineGeneratorPanel.h" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULineSplineGenerator, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bUpToNextPoint" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULineSplineGenerator, Length), METADATA_PARAMS(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
	};
#endif
	void Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint_SetBit(void* Obj)
	{
		((ULineSplineGenerator*)Obj)->bEnableUpToNextPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint = { "bEnableUpToNextPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULineSplineGenerator), &Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint_MetaData[] = {
		{ "Category", "ShapeParameters" },
		{ "EditCondition", "bEnableUpToNextPoint" },
		{ "ModuleRelativePath", "Public/SplineGeneratorPanel.h" },
		{ "ToolTip", "If enabled, will add points up until the next existing point" },
	};
#endif
	void Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint_SetBit(void* Obj)
	{
		((ULineSplineGenerator*)Obj)->bUpToNextPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint = { "bUpToNextPoint", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULineSplineGenerator), &Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineSplineGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bEnableUpToNextPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSplineGenerator_Statics::NewProp_bUpToNextPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineSplineGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineSplineGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineSplineGenerator_Statics::ClassParams = {
		&ULineSplineGenerator::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULineSplineGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULineSplineGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineSplineGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineSplineGenerator()
	{
		if (!Z_Registration_Info_UClass_ULineSplineGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineSplineGenerator.OuterSingleton, Z_Construct_UClass_ULineSplineGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineSplineGenerator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<ULineSplineGenerator>()
	{
		return ULineSplineGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineSplineGenerator);
	ULineSplineGenerator::~ULineSplineGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::EnumInfo[] = {
		{ EShapeAddMode_StaticEnum, TEXT("EShapeAddMode"), &Z_Registration_Info_UEnum_EShapeAddMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 138783170U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplineGeneratorBase, USplineGeneratorBase::StaticClass, TEXT("USplineGeneratorBase"), &Z_Registration_Info_UClass_USplineGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineGeneratorBase), 3297121663U) },
		{ Z_Construct_UClass_UCircleSplineGenerator, UCircleSplineGenerator::StaticClass, TEXT("UCircleSplineGenerator"), &Z_Registration_Info_UClass_UCircleSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircleSplineGenerator), 3752368247U) },
		{ Z_Construct_UClass_UArcSplineGenerator, UArcSplineGenerator::StaticClass, TEXT("UArcSplineGenerator"), &Z_Registration_Info_UClass_UArcSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArcSplineGenerator), 3696129342U) },
		{ Z_Construct_UClass_USquareSplineGenerator, USquareSplineGenerator::StaticClass, TEXT("USquareSplineGenerator"), &Z_Registration_Info_UClass_USquareSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USquareSplineGenerator), 1643270195U) },
		{ Z_Construct_UClass_UEllipseSplineGenerator, UEllipseSplineGenerator::StaticClass, TEXT("UEllipseSplineGenerator"), &Z_Registration_Info_UClass_UEllipseSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEllipseSplineGenerator), 3032827057U) },
		{ Z_Construct_UClass_URectangleSplineGenerator, URectangleSplineGenerator::StaticClass, TEXT("URectangleSplineGenerator"), &Z_Registration_Info_UClass_URectangleSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleSplineGenerator), 3952995744U) },
		{ Z_Construct_UClass_ULineSplineGenerator, ULineSplineGenerator::StaticClass, TEXT("ULineSplineGenerator"), &Z_Registration_Info_UClass_ULineSplineGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineSplineGenerator), 2003745411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_2988365667(TEXT("/Script/ComponentVisualizers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineGeneratorPanel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
