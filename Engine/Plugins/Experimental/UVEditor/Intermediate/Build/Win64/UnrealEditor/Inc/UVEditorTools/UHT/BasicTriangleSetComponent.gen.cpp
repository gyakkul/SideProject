// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/BasicTriangleSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicTriangleSetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DTriangleSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic2DTriangleSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DTriangleSetComponent();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasic3DTriangleSetComponent_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicTriangleSetComponentBase();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UBasicTriangleSetComponentBase_NoRegister();
// End Cross Module References
	void UBasicTriangleSetComponentBase::StaticRegisterNativesUBasicTriangleSetComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicTriangleSetComponentBase);
	UClass* Z_Construct_UClass_UBasicTriangleSetComponentBase_NoRegister()
	{
		return UBasicTriangleSetComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriangleMaterial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for component specific functionality independent of the type of line stored in the component. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicTriangleSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
		{ "ToolTip", "Base class for component specific functionality independent of the type of line stored in the component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_TriangleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_TriangleMaterial = { "TriangleMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicTriangleSetComponentBase, TriangleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_TriangleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_TriangleMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicTriangleSetComponentBase, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
	{
		((UBasicTriangleSetComponentBase*)Obj)->bBoundsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBasicTriangleSetComponentBase), &Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicTriangleSetComponentBase, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicTriangleSetComponentBase, Normal), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Normal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_TriangleMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_bBoundsDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::NewProp_Normal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicTriangleSetComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::ClassParams = {
		&UBasicTriangleSetComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicTriangleSetComponentBase()
	{
		if (!Z_Registration_Info_UClass_UBasicTriangleSetComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicTriangleSetComponentBase.OuterSingleton, Z_Construct_UClass_UBasicTriangleSetComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicTriangleSetComponentBase.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasicTriangleSetComponentBase>()
	{
		return UBasicTriangleSetComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicTriangleSetComponentBase);
	UBasicTriangleSetComponentBase::~UBasicTriangleSetComponentBase() {}
	void UBasic2DTriangleSetComponent::StaticRegisterNativesUBasic2DTriangleSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic2DTriangleSetComponent);
	UClass* Z_Construct_UClass_UBasic2DTriangleSetComponent_NoRegister()
	{
		return UBasic2DTriangleSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicTriangleSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic line set component in 2D using FVector2f for line positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicTriangleSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic line set component in 2D using FVector2f for line positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic2DTriangleSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::ClassParams = {
		&UBasic2DTriangleSetComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic2DTriangleSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic2DTriangleSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic2DTriangleSetComponent.OuterSingleton, Z_Construct_UClass_UBasic2DTriangleSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic2DTriangleSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic2DTriangleSetComponent>()
	{
		return UBasic2DTriangleSetComponent::StaticClass();
	}
	UBasic2DTriangleSetComponent::UBasic2DTriangleSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic2DTriangleSetComponent);
	UBasic2DTriangleSetComponent::~UBasic2DTriangleSetComponent() {}
	void UBasic3DTriangleSetComponent::StaticRegisterNativesUBasic3DTriangleSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasic3DTriangleSetComponent);
	UClass* Z_Construct_UClass_UBasic3DTriangleSetComponent_NoRegister()
	{
		return UBasic3DTriangleSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicTriangleSetComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Instantiation of a basic line set component in 3D using FVector3f for line positions. */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/BasicTriangleSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/BasicTriangleSetComponent.h" },
		{ "ToolTip", "Instantiation of a basic line set component in 3D using FVector3f for line positions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasic3DTriangleSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::ClassParams = {
		&UBasic3DTriangleSetComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasic3DTriangleSetComponent()
	{
		if (!Z_Registration_Info_UClass_UBasic3DTriangleSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasic3DTriangleSetComponent.OuterSingleton, Z_Construct_UClass_UBasic3DTriangleSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasic3DTriangleSetComponent.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UBasic3DTriangleSetComponent>()
	{
		return UBasic3DTriangleSetComponent::StaticClass();
	}
	UBasic3DTriangleSetComponent::UBasic3DTriangleSetComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasic3DTriangleSetComponent);
	UBasic3DTriangleSetComponent::~UBasic3DTriangleSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicTriangleSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicTriangleSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicTriangleSetComponentBase, UBasicTriangleSetComponentBase::StaticClass, TEXT("UBasicTriangleSetComponentBase"), &Z_Registration_Info_UClass_UBasicTriangleSetComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicTriangleSetComponentBase), 1509790133U) },
		{ Z_Construct_UClass_UBasic2DTriangleSetComponent, UBasic2DTriangleSetComponent::StaticClass, TEXT("UBasic2DTriangleSetComponent"), &Z_Registration_Info_UClass_UBasic2DTriangleSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic2DTriangleSetComponent), 2124684569U) },
		{ Z_Construct_UClass_UBasic3DTriangleSetComponent, UBasic3DTriangleSetComponent::StaticClass, TEXT("UBasic3DTriangleSetComponent"), &Z_Registration_Info_UClass_UBasic3DTriangleSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasic3DTriangleSetComponent), 144524913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicTriangleSetComponent_h_2596229550(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicTriangleSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Drawing_BasicTriangleSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
