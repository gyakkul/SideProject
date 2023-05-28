// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/PointSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointSetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UPointSetComponent::StaticRegisterNativesUPointSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointSetComponent);
	UClass* Z_Construct_UClass_UPointSetComponent_NoRegister()
	{
		return UPointSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsDirty_MetaData[];
#endif
		static void NewProp_bBoundsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPointSetComponent is a Component that draws a set of points, as small squares.\n * Per-point Color and (view-space) Size is supported. Normals are not supported.\n * \n * Points are inserted with an externally-defined ID, internally this is done via\n * a TSparseArray. This class allocates a contiguous TArray large enugh to hold the \n * largest ID. Using ReservePoints() may be beneficial for huge arrays.\n *\n * The points are drawn as two triangles (ie a square) orthogonal to the view direction. \n * The actual point size is calculated in the shader, and so a custom material must be used.\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/PointSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/PointSetComponent.h" },
		{ "ToolTip", "UPointSetComponent is a Component that draws a set of points, as small squares.\nPer-point Color and (view-space) Size is supported. Normals are not supported.\n\nPoints are inserted with an externally-defined ID, internally this is done via\na TSparseArray. This class allocates a contiguous TArray large enugh to hold the\nlargest ID. Using ReservePoints() may be beneficial for huge arrays.\n\nThe points are drawn as two triangles (ie a square) orthogonal to the view direction.\nThe actual point size is calculated in the shader, and so a custom material must be used." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointSetComponent_Statics::NewProp_PointMaterial_MetaData[] = {
		{ "Comment", "//~ Begin USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Drawing/PointSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointSetComponent_Statics::NewProp_PointMaterial = { "PointMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointSetComponent, PointMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_PointMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_PointMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointSetComponent_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/PointSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointSetComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointSetComponent, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/PointSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
	{
		((UPointSetComponent*)Obj)->bBoundsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPointSetComponent), &Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointSetComponent_Statics::NewProp_PointMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointSetComponent_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointSetComponent_Statics::NewProp_bBoundsDirty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointSetComponent_Statics::ClassParams = {
		&UPointSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPointSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointSetComponent()
	{
		if (!Z_Registration_Info_UClass_UPointSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointSetComponent.OuterSingleton, Z_Construct_UClass_UPointSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointSetComponent.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPointSetComponent>()
	{
		return UPointSetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointSetComponent);
	UPointSetComponent::~UPointSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointSetComponent, UPointSetComponent::StaticClass, TEXT("UPointSetComponent"), &Z_Registration_Info_UClass_UPointSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointSetComponent), 809560018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_3427894951(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PointSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
