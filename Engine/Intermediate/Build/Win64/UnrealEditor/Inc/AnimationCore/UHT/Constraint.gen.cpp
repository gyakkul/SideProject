// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constraint.h"
#include "CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraint() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterOptionPerAxis;
class UScriptStruct* FFilterOptionPerAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("FilterOptionPerAxis"));
	}
	return Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FFilterOptionPerAxis>()
{
	return FFilterOptionPerAxis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filter Option Per Axis\n * \n * This is used to filter per axis for constraint options\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Filter Option Per Axis\n\nThis is used to filter per axis for constraint options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FFilterOptionPerAxis*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"FilterOptionPerAxis",
		sizeof(FFilterOptionPerAxis),
		alignof(FFilterOptionPerAxis),
		Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis()
	{
		if (!Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton, Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformFilter;
class UScriptStruct* FTransformFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformFilter, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformFilter"));
	}
	return Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformFilter>()
{
	return FTransformFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A filter for a whole transform */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A filter for a whole transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter = { "TranslationFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformFilter, TranslationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter_MetaData)) }; // 161454124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter = { "RotationFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformFilter, RotationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter_MetaData)) }; // 161454124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter = { "ScaleFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformFilter, ScaleFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"TransformFilter",
		sizeof(FTransformFilter),
		alignof(FTransformFilter),
		Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton, Z_Construct_UScriptStruct_FTransformFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescription;
class UScriptStruct* FConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescription>()
{
	return FConstraintDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslation_MetaData[];
#endif
		static void NewProp_bTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[];
#endif
		static void NewProp_bRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[];
#endif
		static void NewProp_bScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParent_MetaData[];
#endif
		static void NewProp_bParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAxes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAxes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleAxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation = { "bTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation = { "bRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale = { "bScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// this does composed transform - where as individual will accumulate per component\n" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "this does composed transform - where as individual will accumulate per component" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit(void* Obj)
	{
		((FConstraintDescription*)Obj)->bParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent = { "bParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes = { "TranslationAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDescription, TranslationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes_MetaData)) }; // 161454124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes = { "RotationAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDescription, RotationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes_MetaData)) }; // 161454124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes = { "ScaleAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDescription, ScaleAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescription",
		sizeof(FConstraintDescription),
		alignof(FConstraintDescription),
		Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintOffset;
class UScriptStruct* FConstraintOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintOffset"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintOffset>()
{
	return FConstraintOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the offset for constraint\n *\n * Saves individual component (translation, rotation, scale or parent)\n * Used by Constraint for saving the offset, and recovering the offset\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "This is the offset for constraint\n\nSaves individual component (translation, rotation, scale or parent)\nUsed by Constraint for saving the offset, and recovering the offset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintOffset, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintOffset, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintOffset, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintOffset, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintOffset",
		sizeof(FConstraintOffset),
		alignof(FConstraintOffset),
		Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton, Z_Construct_UScriptStruct_FConstraintOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformConstraint;
class UScriptStruct* FTransformConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraint, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformConstraint>()
{
	return FTransformConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "Comment", "// @note thought of separating this out per each but we'll have an issue with applying transform in what order\n// but something to think about if that seems better\n" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "@note thought of separating this out per each but we'll have an issue with applying transform in what order\nbut something to think about if that seems better" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformConstraint, Operator), Z_Construct_UScriptStruct_FConstraintDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator_MetaData)) }; // 454149854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformConstraint, SourceNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode = { "TargetNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformConstraint, TargetNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformConstraint, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "Comment", "/** When the constraint is first applied, maintain the offset from the target node */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
#endif
	void Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FTransformConstraint*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTransformConstraint), &Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"TransformConstraint",
		sizeof(FTransformConstraint),
		alignof(FTransformConstraint),
		Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton, Z_Construct_UScriptStruct_FTransformConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintType;
	static UEnum* EConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("EConstraintType"));
		}
		return Z_Registration_Info_UEnum_EConstraintType.OuterSingleton;
	}
	template<> ANIMATIONCORE_API UEnum* StaticEnum<EConstraintType>()
	{
		return EConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationCore_EConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enumerators[] = {
		{ "EConstraintType::Transform", (int64)EConstraintType::Transform },
		{ "EConstraintType::Aim", (int64)EConstraintType::Aim },
		{ "EConstraintType::MAX", (int64)EConstraintType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Aim.Comment", "/** Aim Constraint*/" },
		{ "Aim.Name", "EConstraintType::Aim" },
		{ "Aim.ToolTip", "Aim Constraint" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Constraint Types*/" },
		{ "MAX.Comment", "/** MAX - invalid */" },
		{ "MAX.Name", "EConstraintType::MAX" },
		{ "MAX.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Types" },
		{ "Transform.Comment", "/** Transform Constraint */" },
		{ "Transform.Name", "EConstraintType::Transform" },
		{ "Transform.ToolTip", "Transform Constraint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		"EConstraintType",
		"EConstraintType",
		Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintType.InnerSingleton, Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstraintType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx;
class UScriptStruct* FConstraintDescriptionEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptionEx, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptionEx"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescriptionEx>()
{
	return FConstraintDescriptionEx::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxesFilterOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxesFilterOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption = { "AxesFilterOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDescriptionEx, AxesFilterOption), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption_MetaData)) }; // 161454124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescriptionEx",
		sizeof(FConstraintDescriptionEx),
		alignof(FConstraintDescriptionEx),
		Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformConstraintType;
	static UEnum* ETransformConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ETransformConstraintType"));
		}
		return Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton;
	}
	template<> ANIMATIONCORE_API UEnum* StaticEnum<ETransformConstraintType>()
	{
		return ETransformConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enumerators[] = {
		{ "ETransformConstraintType::Translation", (int64)ETransformConstraintType::Translation },
		{ "ETransformConstraintType::Rotation", (int64)ETransformConstraintType::Rotation },
		{ "ETransformConstraintType::Scale", (int64)ETransformConstraintType::Scale },
		{ "ETransformConstraintType::Parent", (int64)ETransformConstraintType::Parent },
		{ "ETransformConstraintType::LookAt", (int64)ETransformConstraintType::LookAt },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform Constraint Types*/" },
		{ "IsBlueprintBase", "true" },
		{ "LookAt.Name", "ETransformConstraintType::LookAt" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "Parent.Name", "ETransformConstraintType::Parent" },
		{ "Rotation.Name", "ETransformConstraintType::Rotation" },
		{ "Scale.Name", "ETransformConstraintType::Scale" },
		{ "ToolTip", "Transform Constraint Types" },
		{ "Translation.Name", "ETransformConstraintType::Translation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		"ETransformConstraintType",
		"ETransformConstraintType",
		Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType()
	{
		if (!Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton, Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTransformConstraintDescription>() == std::is_polymorphic<FConstraintDescriptionEx>(), "USTRUCT FTransformConstraintDescription cannot be polymorphic unless super FConstraintDescriptionEx is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformConstraintDescription;
class UScriptStruct* FTransformConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformConstraintDescription>()
{
	return FTransformConstraintDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraintDescription>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformConstraintDescription, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_MetaData)) }; // 2587833052
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		Z_Construct_UScriptStruct_FConstraintDescriptionEx,
		&NewStructOps,
		"TransformConstraintDescription",
		sizeof(FTransformConstraintDescription),
		alignof(FTransformConstraintDescription),
		Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAimConstraintDescription>() == std::is_polymorphic<FConstraintDescriptionEx>(), "USTRUCT FAimConstraintDescription cannot be polymorphic unless super FConstraintDescriptionEx is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AimConstraintDescription;
class UScriptStruct* FAimConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("AimConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FAimConstraintDescription>()
{
	return FAimConstraintDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookUp_MetaData[];
#endif
		static void NewProp_bUseLookUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookUpTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply aim constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply aim constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimConstraintDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis_MetaData)) }; // 1038789888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis_MetaData)) }; // 1038789888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit(void* Obj)
	{
		((FAimConstraintDescription*)Obj)->bUseLookUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp = { "bUseLookUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAimConstraintDescription), &Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget = { "LookUpTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAimConstraintDescription, LookUpTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		Z_Construct_UScriptStruct_FConstraintDescriptionEx,
		&NewStructOps,
		"AimConstraintDescription",
		sizeof(FAimConstraintDescription),
		alignof(FAimConstraintDescription),
		Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescriptor;
class UScriptStruct* FConstraintDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptor, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescriptor>()
{
	return FConstraintDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Constraint data container. It contains union of Constraints and node will contain array of these. \n * \n * These are the one contained in NodeData, and it will be iterated via evaluate process\n * The goal is to have contiguous memory location where they can iterate through linearly\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint data container. It contains union of Constraints and node will contain array of these.\n\nThese are the one contained in NodeData, and it will be iterated via evaluate process\nThe goal is to have contiguous memory location where they can iterate through linearly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptor>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintDescriptor, Type), Z_Construct_UEnum_AnimationCore_EConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_MetaData)) }; // 65349578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintDescriptor",
		sizeof(FConstraintDescriptor),
		alignof(FConstraintDescriptor),
		Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintData;
class UScriptStruct* FConstraintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintData, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintData"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintData>()
{
	return FConstraintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Constraint Data that is contained in Node Datat\n * You can have as many of these per node\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Data that is contained in Node Datat\nYou can have as many of these per node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData[] = {
		{ "Comment", "/** Constraint Description */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Description" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintData, Constraint), Z_Construct_UScriptStruct_FConstraintDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint_MetaData)) }; // 2021018873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/** Weight of the constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Weight of the constraint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintData, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "Comment", "/** When the constraint is first applied, maintain the offset from the target node */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((FConstraintData*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstraintData), &Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Constraint offset if bMaintainOffset is used */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint offset if bMaintainOffset is used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintData, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"ConstraintData",
		sizeof(FConstraintData),
		alignof(FConstraintData),
		Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton, Z_Construct_UScriptStruct_FConstraintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::EnumInfo[] = {
		{ EConstraintType_StaticEnum, TEXT("EConstraintType"), &Z_Registration_Info_UEnum_EConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 65349578U) },
		{ ETransformConstraintType_StaticEnum, TEXT("ETransformConstraintType"), &Z_Registration_Info_UEnum_ETransformConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2587833052U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::ScriptStructInfo[] = {
		{ FFilterOptionPerAxis::StaticStruct, Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewStructOps, TEXT("FilterOptionPerAxis"), &Z_Registration_Info_UScriptStruct_FilterOptionPerAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterOptionPerAxis), 161454124U) },
		{ FTransformFilter::StaticStruct, Z_Construct_UScriptStruct_FTransformFilter_Statics::NewStructOps, TEXT("TransformFilter"), &Z_Registration_Info_UScriptStruct_TransformFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformFilter), 3739889549U) },
		{ FConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps, TEXT("ConstraintDescription"), &Z_Registration_Info_UScriptStruct_ConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescription), 454149854U) },
		{ FConstraintOffset::StaticStruct, Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewStructOps, TEXT("ConstraintOffset"), &Z_Registration_Info_UScriptStruct_ConstraintOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintOffset), 623899924U) },
		{ FTransformConstraint::StaticStruct, Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewStructOps, TEXT("TransformConstraint"), &Z_Registration_Info_UScriptStruct_TransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformConstraint), 1786735244U) },
		{ FConstraintDescriptionEx::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewStructOps, TEXT("ConstraintDescriptionEx"), &Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescriptionEx), 363734386U) },
		{ FTransformConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewStructOps, TEXT("TransformConstraintDescription"), &Z_Registration_Info_UScriptStruct_TransformConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformConstraintDescription), 2797484359U) },
		{ FAimConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewStructOps, TEXT("AimConstraintDescription"), &Z_Registration_Info_UScriptStruct_AimConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimConstraintDescription), 1410374721U) },
		{ FConstraintDescriptor::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewStructOps, TEXT("ConstraintDescriptor"), &Z_Registration_Info_UScriptStruct_ConstraintDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescriptor), 2021018873U) },
		{ FConstraintData::StaticStruct, Z_Construct_UScriptStruct_FConstraintData_Statics::NewStructOps, TEXT("ConstraintData"), &Z_Registration_Info_UScriptStruct_ConstraintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintData), 2348633886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_4155925964(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
