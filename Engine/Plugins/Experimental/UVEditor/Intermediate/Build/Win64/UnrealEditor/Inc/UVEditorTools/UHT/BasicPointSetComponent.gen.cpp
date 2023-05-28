// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/BasicPointSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPointSetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DPointSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DPointSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DPointSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DPointSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicPointSetComponentBase();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicPointSetComponentBase_NoRegister();
// End Cross Module References
	void UBasicPointSetComponentBase::StaticRegisterNativesUBasicPointSetComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicPointSetComponentBase);
	UClass* Z_Construct_UClass_UBasicPointSetComponentBase_NoRegister()
	{
		return UBasicPointSetComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UBasicPointSetComponentBase_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicPointSetComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for component specific functionality independent of the type of point stored in the component. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicPointSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
		{ "ToolTip", "Base class for component specific functionality independent of the type of point stored in the component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_PointMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_PointMaterial = { "PointMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicPointSetComponentBase, PointMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_PointMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_PointMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicPointSetComponentBase, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
	{
		((UBasicPointSetComponentBase*)Obj)->bBoundsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBasicPointSetComponentBase), &Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicPointSetComponentBase, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicPointSetComponentBase, Size), METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_DepthBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicPointSetComponentBase, DepthBias), METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_DepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_DepthBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicPointSetComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_PointMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_bBoundsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicPointSetComponentBase_Statics::NewProp_DepthBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicPointSetComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicPointSetComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicPointSetComponentBase_Statics::ClassParams = {
		&UBasicPointSetComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicPointSetComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicPointSetComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicPointSetComponentBase()
	{
		if (!Z_Registration_Info_UClass_UBasicPointSetComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicPointSetComponentBase.OuterSingleton, Z_Construct_UClass_UBasicPointSetComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicPointSetComponentBase.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasicPointSetComponentBase>()
	{
		return UBasicPointSetComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicPointSetComponentBase);
	UBasicPointSetComponentBase::~UBasicPointSetComponentBase() {}
	void UBasic2DPointSetComponent::StaticRegisterNativesUBasic2DPointSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic2DPointSetComponent);
	UClass* Z_Construct_UClass_UBasic2DPointSetComponent_NoRegister()
	{
		return UBasic2DPointSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic2DPointSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic2DPointSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicPointSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic2DPointSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic point set component in 2D using FVector2f for point positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicPointSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic point set component in 2D using FVector2f for point positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic2DPointSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic2DPointSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic2DPointSetComponent_Statics::ClassParams = {
		&UBasic2DPointSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasic2DPointSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic2DPointSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic2DPointSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic2DPointSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic2DPointSetComponent.OuterSingleton, Z_Construct_UClass_UBasic2DPointSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic2DPointSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic2DPointSetComponent>()
	{
		return UBasic2DPointSetComponent::StaticClass();
	}
	UBasic2DPointSetComponent::UBasic2DPointSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic2DPointSetComponent);
	UBasic2DPointSetComponent::~UBasic2DPointSetComponent() {}
	void UBasic3DPointSetComponent::StaticRegisterNativesUBasic3DPointSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic3DPointSetComponent);
	UClass* Z_Construct_UClass_UBasic3DPointSetComponent_NoRegister()
	{
		return UBasic3DPointSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic3DPointSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic3DPointSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicPointSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic3DPointSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic point set component in 3D using FVector3f for point positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicPointSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicPointSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic point set component in 3D using FVector3f for point positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic3DPointSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic3DPointSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic3DPointSetComponent_Statics::ClassParams = {
		&UBasic3DPointSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasic3DPointSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic3DPointSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic3DPointSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic3DPointSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic3DPointSetComponent.OuterSingleton, Z_Construct_UClass_UBasic3DPointSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic3DPointSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic3DPointSetComponent>()
	{
		return UBasic3DPointSetComponent::StaticClass();
	}
	UBasic3DPointSetComponent::UBasic3DPointSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic3DPointSetComponent);
	UBasic3DPointSetComponent::~UBasic3DPointSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicPointSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicPointSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicPointSetComponentBase, UBasicPointSetComponentBase::StaticClass, TEXT("UBasicPointSetComponentBase"), &Z_Registration_Info_UClass_UBasicPointSetComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicPointSetComponentBase), 1418604734U) },
		{ Z_Construct_UClass_UBasic2DPointSetComponent, UBasic2DPointSetComponent::StaticClass, TEXT("UBasic2DPointSetComponent"), &Z_Registration_Info_UClass_UBasic2DPointSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic2DPointSetComponent), 3605951407U) },
		{ Z_Construct_UClass_UBasic3DPointSetComponent, UBasic3DPointSetComponent::StaticClass, TEXT("UBasic3DPointSetComponent"), &Z_Registration_Info_UClass_UBasic3DPointSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic3DPointSetComponent), 3971673202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicPointSetComponent_h_2041623009(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicPointSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicPointSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
