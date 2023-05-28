// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/UVToolSelectionHighlightMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVToolSelectionHighlightMechanic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionHighlightMechanic();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionHighlightMechanic_NoRegister();
// End Cross Module References
	void UUVToolSelectionHighlightMechanic::StaticRegisterNativesUUVToolSelectionHighlightMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolSelectionHighlightMechanic);
	UClass* Z_Construct_UClass_UUVToolSelectionHighlightMechanic_NoRegister()
	{
		return UUVToolSelectionHighlightMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwrapGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnwrapGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleSetMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriangleSetMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwrapStationaryGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnwrapStationaryGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewGeometryActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mechanic for highlighting mesh elements (usually selection) in the UV editor.\n */" },
		{ "IncludePath", "Selection/UVToolSelectionHighlightMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionHighlightMechanic.h" },
		{ "ToolTip", "Mechanic for highlighting mesh elements (usually selection) in the UV editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapGeometryActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionHighlightMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapGeometryActor = { "UnwrapGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionHighlightMechanic, UnwrapGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_TriangleSetMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionHighlightMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_TriangleSetMaterial = { "TriangleSetMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionHighlightMechanic, TriangleSetMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_TriangleSetMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_TriangleSetMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapStationaryGeometryActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionHighlightMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapStationaryGeometryActor = { "UnwrapStationaryGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionHighlightMechanic, UnwrapStationaryGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapStationaryGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapStationaryGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_LivePreviewGeometryActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionHighlightMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_LivePreviewGeometryActor = { "LivePreviewGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionHighlightMechanic, LivePreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_LivePreviewGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_LivePreviewGeometryActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_TriangleSetMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_UnwrapStationaryGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::NewProp_LivePreviewGeometryActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolSelectionHighlightMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::ClassParams = {
		&UUVToolSelectionHighlightMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolSelectionHighlightMechanic()
	{
		if (!Z_Registration_Info_UClass_UUVToolSelectionHighlightMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolSelectionHighlightMechanic.OuterSingleton, Z_Construct_UClass_UUVToolSelectionHighlightMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolSelectionHighlightMechanic.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolSelectionHighlightMechanic>()
	{
		return UUVToolSelectionHighlightMechanic::StaticClass();
	}
	UUVToolSelectionHighlightMechanic::UUVToolSelectionHighlightMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolSelectionHighlightMechanic);
	UUVToolSelectionHighlightMechanic::~UUVToolSelectionHighlightMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionHighlightMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionHighlightMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVToolSelectionHighlightMechanic, UUVToolSelectionHighlightMechanic::StaticClass, TEXT("UUVToolSelectionHighlightMechanic"), &Z_Registration_Info_UClass_UUVToolSelectionHighlightMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolSelectionHighlightMechanic), 508550272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionHighlightMechanic_h_338803361(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionHighlightMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionHighlightMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
