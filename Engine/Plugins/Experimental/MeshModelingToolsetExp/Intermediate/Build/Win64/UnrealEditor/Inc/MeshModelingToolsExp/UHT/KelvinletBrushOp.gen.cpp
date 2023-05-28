// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sculpting/KelvinletBrushOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKelvinletBrushOp() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBaseKelvinletBrushOpProps::StaticRegisterNativesUBaseKelvinletBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseKelvinletBrushOpProps);
	UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister()
	{
		return UBaseKelvinletBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Incompressiblity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Incompressiblity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BrushSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Comment", "/** How much the mesh resists shear */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "How much the mesh resists shear" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, Stiffness), METADATA_PARAMS(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity_MetaData[] = {
		{ "Comment", "/** How compressible the spatial region is: 1 - 2 x Poisson ratio */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "How compressible the spatial region is: 1 - 2 x Poisson ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity = { "Incompressiblity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, Incompressiblity), METADATA_PARAMS(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps_MetaData[] = {
		{ "Comment", "/** Integration steps*/" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Integration steps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps = { "BrushSteps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, BrushSteps), METADATA_PARAMS(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseKelvinletBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::ClassParams = {
		&UBaseKelvinletBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBaseKelvinletBrushOpProps>()
	{
		return UBaseKelvinletBrushOpProps::StaticClass();
	}
	UBaseKelvinletBrushOpProps::UBaseKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseKelvinletBrushOpProps);
	UBaseKelvinletBrushOpProps::~UBaseKelvinletBrushOpProps() {}
	void UScaleKelvinletBrushOpProps::StaticRegisterNativesUScaleKelvinletBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleKelvinletBrushOpProps);
	UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister()
	{
		return UScaleKelvinletBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "KelvinScaleBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScaleKelvinletBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinScaleBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScaleKelvinletBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleKelvinletBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::ClassParams = {
		&UScaleKelvinletBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UScaleKelvinletBrushOpProps>()
	{
		return UScaleKelvinletBrushOpProps::StaticClass();
	}
	UScaleKelvinletBrushOpProps::UScaleKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleKelvinletBrushOpProps);
	UScaleKelvinletBrushOpProps::~UScaleKelvinletBrushOpProps() {}
	void UPullKelvinletBrushOpProps::StaticRegisterNativesUPullKelvinletBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPullKelvinletBrushOpProps);
	UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister()
	{
		return UPullKelvinletBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPullKelvinletBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "KelvinGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPullKelvinletBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPullKelvinletBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::ClassParams = {
		&UPullKelvinletBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPullKelvinletBrushOpProps>()
	{
		return UPullKelvinletBrushOpProps::StaticClass();
	}
	UPullKelvinletBrushOpProps::UPullKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPullKelvinletBrushOpProps);
	UPullKelvinletBrushOpProps::~UPullKelvinletBrushOpProps() {}
	void USharpPullKelvinletBrushOpProps::StaticRegisterNativesUSharpPullKelvinletBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharpPullKelvinletBrushOpProps);
	UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister()
	{
		return USharpPullKelvinletBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinSharpGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharpPullKelvinletBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "KelvinSharpGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharpPullKelvinletBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharpPullKelvinletBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::ClassParams = {
		&USharpPullKelvinletBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USharpPullKelvinletBrushOpProps>()
	{
		return USharpPullKelvinletBrushOpProps::StaticClass();
	}
	USharpPullKelvinletBrushOpProps::USharpPullKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharpPullKelvinletBrushOpProps);
	USharpPullKelvinletBrushOpProps::~USharpPullKelvinletBrushOpProps() {}
	void UTwistKelvinletBrushOpProps::StaticRegisterNativesUTwistKelvinletBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwistKelvinletBrushOpProps);
	UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister()
	{
		return UTwistKelvinletBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "KelvinTwistBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Twisting strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Twisting strength of the Brush" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTwistKelvinletBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinTwistBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTwistKelvinletBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwistKelvinletBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::ClassParams = {
		&UTwistKelvinletBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTwistKelvinletBrushOpProps>()
	{
		return UTwistKelvinletBrushOpProps::StaticClass();
	}
	UTwistKelvinletBrushOpProps::UTwistKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwistKelvinletBrushOpProps);
	UTwistKelvinletBrushOpProps::~UTwistKelvinletBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseKelvinletBrushOpProps, UBaseKelvinletBrushOpProps::StaticClass, TEXT("UBaseKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseKelvinletBrushOpProps), 3350481666U) },
		{ Z_Construct_UClass_UScaleKelvinletBrushOpProps, UScaleKelvinletBrushOpProps::StaticClass, TEXT("UScaleKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleKelvinletBrushOpProps), 1894630282U) },
		{ Z_Construct_UClass_UPullKelvinletBrushOpProps, UPullKelvinletBrushOpProps::StaticClass, TEXT("UPullKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UPullKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPullKelvinletBrushOpProps), 3709593505U) },
		{ Z_Construct_UClass_USharpPullKelvinletBrushOpProps, USharpPullKelvinletBrushOpProps::StaticClass, TEXT("USharpPullKelvinletBrushOpProps"), &Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharpPullKelvinletBrushOpProps), 3400366745U) },
		{ Z_Construct_UClass_UTwistKelvinletBrushOpProps, UTwistKelvinletBrushOpProps::StaticClass, TEXT("UTwistKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwistKelvinletBrushOpProps), 394598397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_2492353804(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
