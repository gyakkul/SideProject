// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/BrushStampIndicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushStampIndicator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UBrushStampIndicatorBuilder::StaticRegisterNativesUBrushStampIndicatorBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushStampIndicatorBuilder);
	UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister()
	{
		return UBrushStampIndicatorBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicatorBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams = {
		&UBrushStampIndicatorBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder()
	{
		if (!Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton, Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicatorBuilder>()
	{
		return UBrushStampIndicatorBuilder::StaticClass();
	}
	UBrushStampIndicatorBuilder::UBrushStampIndicatorBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicatorBuilder);
	UBrushStampIndicatorBuilder::~UBrushStampIndicatorBuilder() {}
	void UBrushStampIndicator::StaticRegisterNativesUBrushStampIndicator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushStampIndicator);
	UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister()
	{
		return UBrushStampIndicator::StaticClass();
	}
	struct Z_Construct_UClass_UBrushStampIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawIndicatorLines_MetaData[];
#endif
		static void NewProp_bDrawIndicatorLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawIndicatorLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawRadiusCircle_MetaData[];
#endif
		static void NewProp_bDrawRadiusCircle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawRadiusCircle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleStepCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleStepCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDepthTested_MetaData[];
#endif
		static void NewProp_bDepthTested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondaryLines_MetaData[];
#endif
		static void NewProp_bDrawSecondaryLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondaryLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushStampIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UBrushStampIndicator is a simple 3D brush indicator. \n */" },
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "* UBrushStampIndicator is a simple 3D brush indicator." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Controls whether Gizmo will draw visual elements. Does not currently affect AttachedComponent. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "Controls whether Gizmo will draw visual elements. Does not currently affect AttachedComponent." },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff = { "BrushFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, BrushFalloff), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition = { "BrushPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, BrushPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal = { "BrushNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, BrushNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawIndicatorLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines = { "bDrawIndicatorLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawRadiusCircle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle = { "bDrawRadiusCircle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount = { "SampleStepCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, SampleStepCount), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDepthTested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested = { "bDepthTested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit(void* Obj)
	{
		((UBrushStampIndicator*)Obj)->bDrawSecondaryLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines = { "bDrawSecondaryLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness = { "SecondaryLineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineThickness), METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor = { "SecondaryLineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional Component that will be transformed such that it tracks the Radius/Position/Normal\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "Optional Component that will be transformed such that it tracks the Radius/Position/Normal" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent = { "AttachedComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushStampIndicator, AttachedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushStampIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams = {
		&UBrushStampIndicator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushStampIndicator()
	{
		if (!Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton, Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicator>()
	{
		return UBrushStampIndicator::StaticClass();
	}
	UBrushStampIndicator::UBrushStampIndicator() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicator);
	UBrushStampIndicator::~UBrushStampIndicator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushStampIndicatorBuilder, UBrushStampIndicatorBuilder::StaticClass, TEXT("UBrushStampIndicatorBuilder"), &Z_Registration_Info_UClass_UBrushStampIndicatorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushStampIndicatorBuilder), 1064495983U) },
		{ Z_Construct_UClass_UBrushStampIndicator, UBrushStampIndicator::StaticClass, TEXT("UBrushStampIndicator"), &Z_Registration_Info_UClass_UBrushStampIndicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushStampIndicator), 2669531983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_149996607(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
