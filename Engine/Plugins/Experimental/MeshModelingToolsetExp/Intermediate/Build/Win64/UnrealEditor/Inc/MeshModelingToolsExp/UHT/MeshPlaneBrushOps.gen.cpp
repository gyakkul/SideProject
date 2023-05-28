// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sculpting/MeshPlaneBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPlaneBrushOps() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBasePlaneBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBasePlaneBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFixedPlaneBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UViewAlignedPlaneBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBasePlaneBrushOpProps::StaticRegisterNativesUBasePlaneBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePlaneBrushOpProps);
	UClass* Z_Construct_UClass_UBasePlaneBrushOpProps_NoRegister()
	{
		return UBasePlaneBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UBasePlaneBrushOpProps_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshPlaneBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePlaneBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::ClassParams = {
		&UBasePlaneBrushOpProps::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasePlaneBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton, Z_Construct_UClass_UBasePlaneBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasePlaneBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBasePlaneBrushOpProps>()
	{
		return UBasePlaneBrushOpProps::StaticClass();
	}
	UBasePlaneBrushOpProps::UBasePlaneBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePlaneBrushOpProps);
	UBasePlaneBrushOpProps::~UBasePlaneBrushOpProps() {}
	void UPlaneBrushOpProps::StaticRegisterNativesUPlaneBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneBrushOpProps);
	UClass* Z_Construct_UClass_UPlaneBrushOpProps_NoRegister()
	{
		return UPlaneBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneBrushOpProps_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhichSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePlaneBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshPlaneBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "PlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "PlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "PlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along surface normal */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface along surface normal" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData[] = {
		{ "Category", "PlaneBrush" },
		{ "Comment", "/** Control whether effect of brush should be limited to one side of the Plane  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Control whether effect of brush should be limited to one side of the Plane" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide = { "WhichSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneBrushOpProps, WhichSide), Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode, METADATA_PARAMS(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData)) }; // 865554240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneBrushOpProps_Statics::NewProp_WhichSide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneBrushOpProps_Statics::ClassParams = {
		&UPlaneBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaneBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton, Z_Construct_UClass_UPlaneBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneBrushOpProps>()
	{
		return UPlaneBrushOpProps::StaticClass();
	}
	UPlaneBrushOpProps::UPlaneBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneBrushOpProps);
	UPlaneBrushOpProps::~UPlaneBrushOpProps() {}
	void UViewAlignedPlaneBrushOpProps::StaticRegisterNativesUViewAlignedPlaneBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewAlignedPlaneBrushOpProps);
	UClass* Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister()
	{
		return UViewAlignedPlaneBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhichSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePlaneBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshPlaneBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "ViewPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewAlignedPlaneBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "ViewPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewAlignedPlaneBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "ViewPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewAlignedPlaneBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData[] = {
		{ "Category", "ViewPlaneBrush" },
		{ "Comment", "/** Control whether effect of brush should be limited to one side of the Plane  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Control whether effect of brush should be limited to one side of the Plane" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide = { "WhichSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewAlignedPlaneBrushOpProps, WhichSide), Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode, METADATA_PARAMS(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData)) }; // 865554240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::NewProp_WhichSide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewAlignedPlaneBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::ClassParams = {
		&UViewAlignedPlaneBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewAlignedPlaneBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton, Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UViewAlignedPlaneBrushOpProps>()
	{
		return UViewAlignedPlaneBrushOpProps::StaticClass();
	}
	UViewAlignedPlaneBrushOpProps::UViewAlignedPlaneBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewAlignedPlaneBrushOpProps);
	UViewAlignedPlaneBrushOpProps::~UViewAlignedPlaneBrushOpProps() {}
	void UFixedPlaneBrushOpProps::StaticRegisterNativesUFixedPlaneBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFixedPlaneBrushOpProps);
	UClass* Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister()
	{
		return UFixedPlaneBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhichSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichSide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePlaneBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshPlaneBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "FixedPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "FixedPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "FixedPlaneBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface relative to plane */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface relative to plane" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData[] = {
		{ "Category", "FixedPlaneBrush" },
		{ "Comment", "/** Control whether effect of brush should be limited to one side of the Plane  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPlaneBrushOps.h" },
		{ "ToolTip", "Control whether effect of brush should be limited to one side of the Plane" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide = { "WhichSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushOpProps, WhichSide), Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode, METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide_MetaData)) }; // 865554240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::NewProp_WhichSide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixedPlaneBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::ClassParams = {
		&UFixedPlaneBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixedPlaneBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton, Z_Construct_UClass_UFixedPlaneBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFixedPlaneBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UFixedPlaneBrushOpProps>()
	{
		return UFixedPlaneBrushOpProps::StaticClass();
	}
	UFixedPlaneBrushOpProps::UFixedPlaneBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixedPlaneBrushOpProps);
	UFixedPlaneBrushOpProps::~UFixedPlaneBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPlaneBrushOps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPlaneBrushOps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasePlaneBrushOpProps, UBasePlaneBrushOpProps::StaticClass, TEXT("UBasePlaneBrushOpProps"), &Z_Registration_Info_UClass_UBasePlaneBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePlaneBrushOpProps), 894368945U) },
		{ Z_Construct_UClass_UPlaneBrushOpProps, UPlaneBrushOpProps::StaticClass, TEXT("UPlaneBrushOpProps"), &Z_Registration_Info_UClass_UPlaneBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneBrushOpProps), 946020221U) },
		{ Z_Construct_UClass_UViewAlignedPlaneBrushOpProps, UViewAlignedPlaneBrushOpProps::StaticClass, TEXT("UViewAlignedPlaneBrushOpProps"), &Z_Registration_Info_UClass_UViewAlignedPlaneBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewAlignedPlaneBrushOpProps), 4065842879U) },
		{ Z_Construct_UClass_UFixedPlaneBrushOpProps, UFixedPlaneBrushOpProps::StaticClass, TEXT("UFixedPlaneBrushOpProps"), &Z_Registration_Info_UClass_UFixedPlaneBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFixedPlaneBrushOpProps), 776050548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPlaneBrushOps_h_1242445368(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPlaneBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPlaneBrushOps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
