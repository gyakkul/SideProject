// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/BasicLineSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicLineSetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DLineSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DLineSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DLineSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DLineSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicLineSetComponentBase();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicLineSetComponentBase_NoRegister();
// End Cross Module References
	void UBasicLineSetComponentBase::StaticRegisterNativesUBasicLineSetComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicLineSetComponentBase);
	UClass* Z_Construct_UClass_UBasicLineSetComponentBase_NoRegister()
	{
		return UBasicLineSetComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UBasicLineSetComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
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
	UObject* (*const Z_Construct_UClass_UBasicLineSetComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for component specific functionality independent of the type of line stored in the component. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicLineSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
		{ "ToolTip", "Base class for component specific functionality independent of the type of line stored in the component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicLineSetComponentBase, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicLineSetComponentBase, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
	{
		((UBasicLineSetComponentBase*)Obj)->bBoundsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBasicLineSetComponentBase), &Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicLineSetComponentBase, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicLineSetComponentBase, Size), METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_DepthBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicLineSetComponentBase, DepthBias), METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_DepthBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_DepthBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicLineSetComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_bBoundsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicLineSetComponentBase_Statics::NewProp_DepthBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicLineSetComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicLineSetComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicLineSetComponentBase_Statics::ClassParams = {
		&UBasicLineSetComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicLineSetComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicLineSetComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicLineSetComponentBase()
	{
		if (!Z_Registration_Info_UClass_UBasicLineSetComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicLineSetComponentBase.OuterSingleton, Z_Construct_UClass_UBasicLineSetComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicLineSetComponentBase.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasicLineSetComponentBase>()
	{
		return UBasicLineSetComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicLineSetComponentBase);
	UBasicLineSetComponentBase::~UBasicLineSetComponentBase() {}
	void UBasic2DLineSetComponent::StaticRegisterNativesUBasic2DLineSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic2DLineSetComponent);
	UClass* Z_Construct_UClass_UBasic2DLineSetComponent_NoRegister()
	{
		return UBasic2DLineSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic2DLineSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic2DLineSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicLineSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic2DLineSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic line set component in 2D using FVector2f for line positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicLineSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic line set component in 2D using FVector2f for line positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic2DLineSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic2DLineSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic2DLineSetComponent_Statics::ClassParams = {
		&UBasic2DLineSetComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasic2DLineSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic2DLineSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic2DLineSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic2DLineSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic2DLineSetComponent.OuterSingleton, Z_Construct_UClass_UBasic2DLineSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic2DLineSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic2DLineSetComponent>()
	{
		return UBasic2DLineSetComponent::StaticClass();
	}
	UBasic2DLineSetComponent::UBasic2DLineSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic2DLineSetComponent);
	UBasic2DLineSetComponent::~UBasic2DLineSetComponent() {}
	void UBasic3DLineSetComponent::StaticRegisterNativesUBasic3DLineSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic3DLineSetComponent);
	UClass* Z_Construct_UClass_UBasic3DLineSetComponent_NoRegister()
	{
		return UBasic3DLineSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic3DLineSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic3DLineSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicLineSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic3DLineSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic line set component in 3D using FVector3f for line positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicLineSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicLineSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic line set component in 3D using FVector3f for line positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic3DLineSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic3DLineSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic3DLineSetComponent_Statics::ClassParams = {
		&UBasic3DLineSetComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasic3DLineSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic3DLineSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic3DLineSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic3DLineSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic3DLineSetComponent.OuterSingleton, Z_Construct_UClass_UBasic3DLineSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic3DLineSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic3DLineSetComponent>()
	{
		return UBasic3DLineSetComponent::StaticClass();
	}
	UBasic3DLineSetComponent::UBasic3DLineSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic3DLineSetComponent);
	UBasic3DLineSetComponent::~UBasic3DLineSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicLineSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicLineSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicLineSetComponentBase, UBasicLineSetComponentBase::StaticClass, TEXT("UBasicLineSetComponentBase"), &Z_Registration_Info_UClass_UBasicLineSetComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicLineSetComponentBase), 3266664441U) },
		{ Z_Construct_UClass_UBasic2DLineSetComponent, UBasic2DLineSetComponent::StaticClass, TEXT("UBasic2DLineSetComponent"), &Z_Registration_Info_UClass_UBasic2DLineSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic2DLineSetComponent), 4004834995U) },
		{ Z_Construct_UClass_UBasic3DLineSetComponent, UBasic3DLineSetComponent::StaticClass, TEXT("UBasic3DLineSetComponent"), &Z_Registration_Info_UClass_UBasic3DLineSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic3DLineSetComponent), 435081122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicLineSetComponent_h_2942909356(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicLineSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicLineSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
