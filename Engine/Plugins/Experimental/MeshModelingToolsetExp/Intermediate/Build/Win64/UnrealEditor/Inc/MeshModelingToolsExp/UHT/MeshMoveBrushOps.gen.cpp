// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sculpting/MeshMoveBrushOps.h"
#include "PropertySets/AxisFilterPropertyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMoveBrushOps() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMoveBrushOpProps();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMoveBrushOpProps_NoRegister();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsAxisFilter();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMoveBrushOpProps::StaticRegisterNativesUMoveBrushOpProps()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveBrushOpProps);
	UClass* Z_Construct_UClass_UMoveBrushOpProps_NoRegister()
	{
		return UMoveBrushOpProps::StaticClass();
	}
	struct Z_Construct_UClass_UMoveBrushOpProps_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveBrushOpProps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBrushOpProps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshMoveBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshMoveBrushOps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "MoveBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshMoveBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBrushOpProps, Strength), METADATA_PARAMS(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "MoveBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshMoveBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBrushOpProps, Falloff), METADATA_PARAMS(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "MoveBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshMoveBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBrushOpProps, Depth), METADATA_PARAMS(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_AxisFilters_MetaData[] = {
		{ "Category", "MoveBrush" },
		{ "Comment", "/** Axis filters restrict mesh movement to World X/Y/Z axes */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshMoveBrushOps.h" },
		{ "ToolTip", "Axis filters restrict mesh movement to World X/Y/Z axes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_AxisFilters = { "AxisFilters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoveBrushOpProps, AxisFilters), Z_Construct_UScriptStruct_FModelingToolsAxisFilter, METADATA_PARAMS(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_AxisFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_AxisFilters_MetaData)) }; // 1834689654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveBrushOpProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveBrushOpProps_Statics::NewProp_AxisFilters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveBrushOpProps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveBrushOpProps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveBrushOpProps_Statics::ClassParams = {
		&UMoveBrushOpProps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoveBrushOpProps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveBrushOpProps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveBrushOpProps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveBrushOpProps()
	{
		if (!Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton, Z_Construct_UClass_UMoveBrushOpProps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveBrushOpProps.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMoveBrushOpProps>()
	{
		return UMoveBrushOpProps::StaticClass();
	}
	UMoveBrushOpProps::UMoveBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveBrushOpProps);
	UMoveBrushOpProps::~UMoveBrushOpProps() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshMoveBrushOps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshMoveBrushOps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveBrushOpProps, UMoveBrushOpProps::StaticClass, TEXT("UMoveBrushOpProps"), &Z_Registration_Info_UClass_UMoveBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveBrushOpProps), 1451853003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshMoveBrushOps_h_1244695623(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshMoveBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshMoveBrushOps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
