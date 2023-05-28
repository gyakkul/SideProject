// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransformConstraint.h"
#include "Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableLookAtConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableLookAtConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableParentConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableParentConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableRotationConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableRotationConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableScaleConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableScaleConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTranslationConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTranslationConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References
	void UTickableTransformConstraint::StaticRegisterNativesUTickableTransformConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableTransformConstraint);
	UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister()
	{
		return UTickableTransformConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableTransformConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentTRSHandle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentTRSHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildTRSHandle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildTRSHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicOffset_MetaData[];
#endif
		static void NewProp_bDynamicOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableTransformConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableTransformConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableTransformConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle_MetaData[] = {
		{ "Category", "Handle" },
		{ "Comment", "/** The transformable handle representing the parent of that constraint. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "The transformable handle representing the parent of that constraint." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle = { "ParentTRSHandle", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTransformConstraint, ParentTRSHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle_MetaData[] = {
		{ "Category", "Handle" },
		{ "Comment", "/** The transformable handle representing the child of that constraint. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "The transformable handle representing the child of that constraint." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle = { "ChildTRSHandle", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTransformConstraint, ChildTRSHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Should that constraint maintain the default offset.  */" },
		{ "EditCondition", "Type!=ETransformConstraintType::LookAt" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Should that constraint maintain the default offset." },
	};
#endif
	void Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((UTickableTransformConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTickableTransformConstraint), &Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines how much the constraint will be applied. */// UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Weight\", meta = (Input, ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n//@benoit when not EditAnywhere?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines how much the constraint will be applied. // UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Weight\", meta = (Input, ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n//@benoit when not EditAnywhere?" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTransformConstraint, Weight), METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Should the child be able to change it's offset dynamically. */" },
		{ "EditCondition", "(Type!=ETransformConstraintType::LookAt) && bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Should the child be able to change it's offset dynamically." },
	};
#endif
	void Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_SetBit(void* Obj)
	{
		((UTickableTransformConstraint*)Obj)->bDynamicOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset = { "bDynamicOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTickableTransformConstraint), &Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Defines the constraint's type (Position, Parent, Aim...). */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the constraint's type (Position, Parent, Aim...)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTransformConstraint, Type), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_MetaData)) }; // 2587833052
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableTransformConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableTransformConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableTransformConstraint_Statics::ClassParams = {
		&UTickableTransformConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableTransformConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableTransformConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton, Z_Construct_UClass_UTickableTransformConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableTransformConstraint>()
	{
		return UTickableTransformConstraint::StaticClass();
	}
	UTickableTransformConstraint::UTickableTransformConstraint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableTransformConstraint);
	UTickableTransformConstraint::~UTickableTransformConstraint() {}
	void UTickableTranslationConstraint::StaticRegisterNativesUTickableTranslationConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableTranslationConstraint);
	UClass* Z_Construct_UClass_UTickableTranslationConstraint_NoRegister()
	{
		return UTickableTranslationConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableTranslationConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableTranslationConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTranslationConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableTranslationConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableTranslationConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's translation offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's translation offset in the parent space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation = { "OffsetTranslation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTranslationConstraint, OffsetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which translation axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which translation axis is constrained." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableTranslationConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableTranslationConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableTranslationConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::ClassParams = {
		&UTickableTranslationConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableTranslationConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableTranslationConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton, Z_Construct_UClass_UTickableTranslationConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableTranslationConstraint>()
	{
		return UTickableTranslationConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableTranslationConstraint);
	UTickableTranslationConstraint::~UTickableTranslationConstraint() {}
	void UTickableRotationConstraint::StaticRegisterNativesUTickableRotationConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableRotationConstraint);
	UClass* Z_Construct_UClass_UTickableRotationConstraint_NoRegister()
	{
		return UTickableRotationConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableRotationConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableRotationConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableRotationConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableRotationConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableRotationConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's rotation offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's rotation offset in the parent space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableRotationConstraint, OffsetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which rotation axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which rotation axis is constrained." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableRotationConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableRotationConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableRotationConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableRotationConstraint_Statics::ClassParams = {
		&UTickableRotationConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableRotationConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableRotationConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton, Z_Construct_UClass_UTickableRotationConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableRotationConstraint>()
	{
		return UTickableRotationConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableRotationConstraint);
	UTickableRotationConstraint::~UTickableRotationConstraint() {}
	void UTickableScaleConstraint::StaticRegisterNativesUTickableScaleConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableScaleConstraint);
	UClass* Z_Construct_UClass_UTickableScaleConstraint_NoRegister()
	{
		return UTickableScaleConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableScaleConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableScaleConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableScaleConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableScaleConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableScaleConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's scale offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's scale offset in the parent space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale = { "OffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableScaleConstraint, OffsetScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which scale axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which scale axis is constrained." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableScaleConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableScaleConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableScaleConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableScaleConstraint_Statics::ClassParams = {
		&UTickableScaleConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableScaleConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableScaleConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton, Z_Construct_UClass_UTickableScaleConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableScaleConstraint>()
	{
		return UTickableScaleConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableScaleConstraint);
	UTickableScaleConstraint::~UTickableScaleConstraint() {}
	void UTickableParentConstraint::StaticRegisterNativesUTickableParentConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableParentConstraint);
	UClass* Z_Construct_UClass_UTickableParentConstraint_NoRegister()
	{
		return UTickableParentConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableParentConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaling_MetaData[];
#endif
		static void NewProp_bScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableParentConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableParentConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableParentConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableParentConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's transform offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's transform offset in the parent space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableParentConstraint, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Defines whether we propagate the parent scale. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines whether we propagate the parent scale." },
	};
#endif
	void Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_SetBit(void* Obj)
	{
		((UTickableParentConstraint*)Obj)->bScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling = { "bScaling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTickableParentConstraint), &Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which translation/rotation/scale axis are constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which translation/rotation/scale axis are constrained." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter = { "TransformFilter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableParentConstraint, TransformFilter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter_MetaData)) }; // 3739889549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableParentConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableParentConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableParentConstraint_Statics::ClassParams = {
		&UTickableParentConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableParentConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableParentConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton, Z_Construct_UClass_UTickableParentConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableParentConstraint>()
	{
		return UTickableParentConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableParentConstraint);
	UTickableParentConstraint::~UTickableParentConstraint() {}
	void UTickableLookAtConstraint::StaticRegisterNativesUTickableLookAtConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableLookAtConstraint);
	UClass* Z_Construct_UClass_UTickableLookAtConstraint_NoRegister()
	{
		return UTickableLookAtConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableLookAtConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableLookAtConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableLookAtConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableLookAtConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableLookAtConstraint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/** Defines the aiming axis. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the aiming axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableLookAtConstraint, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableLookAtConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableLookAtConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableLookAtConstraint_Statics::ClassParams = {
		&UTickableLookAtConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableLookAtConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableLookAtConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton, Z_Construct_UClass_UTickableLookAtConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableLookAtConstraint>()
	{
		return UTickableLookAtConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableLookAtConstraint);
	UTickableLookAtConstraint::~UTickableLookAtConstraint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTickableTransformConstraint, UTickableTransformConstraint::StaticClass, TEXT("UTickableTransformConstraint"), &Z_Registration_Info_UClass_UTickableTransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableTransformConstraint), 609630923U) },
		{ Z_Construct_UClass_UTickableTranslationConstraint, UTickableTranslationConstraint::StaticClass, TEXT("UTickableTranslationConstraint"), &Z_Registration_Info_UClass_UTickableTranslationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableTranslationConstraint), 1812183607U) },
		{ Z_Construct_UClass_UTickableRotationConstraint, UTickableRotationConstraint::StaticClass, TEXT("UTickableRotationConstraint"), &Z_Registration_Info_UClass_UTickableRotationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableRotationConstraint), 2818259540U) },
		{ Z_Construct_UClass_UTickableScaleConstraint, UTickableScaleConstraint::StaticClass, TEXT("UTickableScaleConstraint"), &Z_Registration_Info_UClass_UTickableScaleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableScaleConstraint), 1904747223U) },
		{ Z_Construct_UClass_UTickableParentConstraint, UTickableParentConstraint::StaticClass, TEXT("UTickableParentConstraint"), &Z_Registration_Info_UClass_UTickableParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableParentConstraint), 685596938U) },
		{ Z_Construct_UClass_UTickableLookAtConstraint, UTickableLookAtConstraint::StaticClass, TEXT("UTickableLookAtConstraint"), &Z_Registration_Info_UClass_UTickableLookAtConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableLookAtConstraint), 4274228107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_2690465438(TEXT("/Script/Constraints"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
