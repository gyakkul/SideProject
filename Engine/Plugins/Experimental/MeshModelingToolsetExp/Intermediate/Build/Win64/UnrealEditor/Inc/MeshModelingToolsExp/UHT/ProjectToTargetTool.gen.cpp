// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToTargetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectToTargetTool() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UProjectToTargetToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UProjectToTargetToolBuilder::StaticRegisterNativesUProjectToTargetToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectToTargetToolBuilder);
	UClass* Z_Construct_UClass_UProjectToTargetToolBuilder_NoRegister()
	{
		return UProjectToTargetToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UProjectToTargetToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Determine if/how we can build UProjectToTargetTool. It requires two selected mesh components.\n */" },
		{ "IncludePath", "ProjectToTargetTool.h" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "ToolTip", "Determine if/how we can build UProjectToTargetTool. It requires two selected mesh components." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectToTargetToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::ClassParams = {
		&UProjectToTargetToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectToTargetToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UProjectToTargetToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectToTargetToolBuilder.OuterSingleton, Z_Construct_UClass_UProjectToTargetToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectToTargetToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UProjectToTargetToolBuilder>()
	{
		return UProjectToTargetToolBuilder::StaticClass();
	}
	UProjectToTargetToolBuilder::UProjectToTargetToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectToTargetToolBuilder);
	UProjectToTargetToolBuilder::~UProjectToTargetToolBuilder() {}
	void UProjectToTargetToolProperties::StaticRegisterNativesUProjectToTargetToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectToTargetToolProperties);
	UClass* Z_Construct_UClass_UProjectToTargetToolProperties_NoRegister()
	{
		return UProjectToTargetToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UProjectToTargetToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldSpace_MetaData[];
#endif
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParallel_MetaData[];
#endif
		static void NewProp_bParallel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParallel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceProjectionPassesPerRemeshIteration_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceProjectionPassesPerRemeshIteration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceProjectionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceProjectionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalAlignmentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalAlignmentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothInFillAreas_MetaData[];
#endif
		static void NewProp_bSmoothInFillAreas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothInFillAreas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillAreaDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FillAreaDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillAreaSmoothMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FillAreaSmoothMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectToTargetToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemeshMeshToolProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subclass URemeshMeshToolProperties just so we can set default values for some properties. Setting these values in the\n * Setup function of UProjectToTargetTool turns out to be tricky to achieve with the property cache.\n */" },
		{ "IncludePath", "ProjectToTargetTool.h" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "ToolTip", "Subclass URemeshMeshToolProperties just so we can set default values for some properties. Setting these values in the\nSetup function of UProjectToTargetTool turns out to be tricky to achieve with the property cache." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace_MetaData[] = {
		{ "Category", "ProjectionSpace" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
	};
#endif
	void Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((UProjectToTargetToolProperties*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectToTargetToolProperties), &Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
	};
#endif
	void Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel_SetBit(void* Obj)
	{
		((UProjectToTargetToolProperties*)Obj)->bParallel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel = { "bParallel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectToTargetToolProperties), &Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FaceProjectionPassesPerRemeshIteration_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FaceProjectionPassesPerRemeshIteration = { "FaceProjectionPassesPerRemeshIteration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectToTargetToolProperties, FaceProjectionPassesPerRemeshIteration), METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FaceProjectionPassesPerRemeshIteration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FaceProjectionPassesPerRemeshIteration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_SurfaceProjectionSpeed_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_SurfaceProjectionSpeed = { "SurfaceProjectionSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectToTargetToolProperties, SurfaceProjectionSpeed), METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_SurfaceProjectionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_SurfaceProjectionSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_NormalAlignmentSpeed_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_NormalAlignmentSpeed = { "NormalAlignmentSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectToTargetToolProperties, NormalAlignmentSpeed), METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_NormalAlignmentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_NormalAlignmentSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
	};
#endif
	void Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas_SetBit(void* Obj)
	{
		((UProjectToTargetToolProperties*)Obj)->bSmoothInFillAreas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas = { "bSmoothInFillAreas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProjectToTargetToolProperties), &Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaDistanceMultiplier_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaDistanceMultiplier = { "FillAreaDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectToTargetToolProperties, FillAreaDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaSmoothMultiplier_MetaData[] = {
		{ "Category", "NormalFlow" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaSmoothMultiplier = { "FillAreaSmoothMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProjectToTargetToolProperties, FillAreaSmoothMultiplier), METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaSmoothMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaSmoothMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectToTargetToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bParallel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FaceProjectionPassesPerRemeshIteration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_SurfaceProjectionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_NormalAlignmentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_bSmoothInFillAreas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectToTargetToolProperties_Statics::NewProp_FillAreaSmoothMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectToTargetToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectToTargetToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectToTargetToolProperties_Statics::ClassParams = {
		&UProjectToTargetToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectToTargetToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectToTargetToolProperties()
	{
		if (!Z_Registration_Info_UClass_UProjectToTargetToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectToTargetToolProperties.OuterSingleton, Z_Construct_UClass_UProjectToTargetToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectToTargetToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UProjectToTargetToolProperties>()
	{
		return UProjectToTargetToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectToTargetToolProperties);
	UProjectToTargetToolProperties::~UProjectToTargetToolProperties() {}
	void UProjectToTargetTool::StaticRegisterNativesUProjectToTargetTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectToTargetTool);
	UClass* Z_Construct_UClass_UProjectToTargetTool_NoRegister()
	{
		return UProjectToTargetTool::StaticClass();
	}
	struct Z_Construct_UClass_UProjectToTargetTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectToTargetTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemeshMeshTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectToTargetTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project one mesh surface onto another, while undergoing remeshing. Subclass of URemeshMeshTool to avoid duplication.\n */" },
		{ "IncludePath", "ProjectToTargetTool.h" },
		{ "ModuleRelativePath", "Public/ProjectToTargetTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Project one mesh surface onto another, while undergoing remeshing. Subclass of URemeshMeshTool to avoid duplication." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectToTargetTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectToTargetTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectToTargetTool_Statics::ClassParams = {
		&UProjectToTargetTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProjectToTargetTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectToTargetTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectToTargetTool()
	{
		if (!Z_Registration_Info_UClass_UProjectToTargetTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectToTargetTool.OuterSingleton, Z_Construct_UClass_UProjectToTargetTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectToTargetTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UProjectToTargetTool>()
	{
		return UProjectToTargetTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectToTargetTool);
	UProjectToTargetTool::~UProjectToTargetTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ProjectToTargetTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ProjectToTargetTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectToTargetToolBuilder, UProjectToTargetToolBuilder::StaticClass, TEXT("UProjectToTargetToolBuilder"), &Z_Registration_Info_UClass_UProjectToTargetToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectToTargetToolBuilder), 3215379789U) },
		{ Z_Construct_UClass_UProjectToTargetToolProperties, UProjectToTargetToolProperties::StaticClass, TEXT("UProjectToTargetToolProperties"), &Z_Registration_Info_UClass_UProjectToTargetToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectToTargetToolProperties), 3027487234U) },
		{ Z_Construct_UClass_UProjectToTargetTool, UProjectToTargetTool::StaticClass, TEXT("UProjectToTargetTool"), &Z_Registration_Info_UClass_UProjectToTargetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectToTargetTool), 558755522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ProjectToTargetTool_h_3969826738(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ProjectToTargetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ProjectToTargetTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
