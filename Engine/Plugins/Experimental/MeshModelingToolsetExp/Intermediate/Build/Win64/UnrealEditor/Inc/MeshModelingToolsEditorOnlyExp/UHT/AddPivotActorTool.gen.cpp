// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddPivotActorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddPivotActorTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAddPivotActorTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAddPivotActorTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAddPivotActorToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UAddPivotActorToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPivotActorTransformProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPivotActorTransformProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UPivotActorTransformProperties::StaticRegisterNativesUPivotActorTransformProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotActorTransformProperties);
	UClass* Z_Construct_UClass_UPivotActorTransformProperties_NoRegister()
	{
		return UPivotActorTransformProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPivotActorTransformProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotActorTransformProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotActorTransformProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AddPivotActorTool.h" },
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PivotLocation" },
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotActorTransformProperties, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "PivotLocation" },
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotActorTransformProperties, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPivotActorTransformProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotActorTransformProperties_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotActorTransformProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotActorTransformProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotActorTransformProperties_Statics::ClassParams = {
		&UPivotActorTransformProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPivotActorTransformProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPivotActorTransformProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotActorTransformProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotActorTransformProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotActorTransformProperties()
	{
		if (!Z_Registration_Info_UClass_UPivotActorTransformProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotActorTransformProperties.OuterSingleton, Z_Construct_UClass_UPivotActorTransformProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotActorTransformProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UPivotActorTransformProperties>()
	{
		return UPivotActorTransformProperties::StaticClass();
	}
	UPivotActorTransformProperties::UPivotActorTransformProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotActorTransformProperties);
	UPivotActorTransformProperties::~UPivotActorTransformProperties() {}
	void UAddPivotActorToolBuilder::StaticRegisterNativesUAddPivotActorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddPivotActorToolBuilder);
	UClass* Z_Construct_UClass_UAddPivotActorToolBuilder_NoRegister()
	{
		return UAddPivotActorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAddPivotActorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AddPivotActorTool.h" },
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddPivotActorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::ClassParams = {
		&UAddPivotActorToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddPivotActorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UAddPivotActorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddPivotActorToolBuilder.OuterSingleton, Z_Construct_UClass_UAddPivotActorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddPivotActorToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAddPivotActorToolBuilder>()
	{
		return UAddPivotActorToolBuilder::StaticClass();
	}
	UAddPivotActorToolBuilder::UAddPivotActorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddPivotActorToolBuilder);
	UAddPivotActorToolBuilder::~UAddPivotActorToolBuilder() {}
	void UAddPivotActorTool::StaticRegisterNativesUAddPivotActorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddPivotActorTool);
	UClass* Z_Construct_UClass_UAddPivotActorTool_NoRegister()
	{
		return UAddPivotActorTool::StaticClass();
	}
	struct Z_Construct_UClass_UAddPivotActorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddPivotActorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Given selected actors, creates an empty actor as the parent of those actors, at a location\n * specified using the gizmo. This is useful for creating a permanent alternate pivot to use in\n * animation.\n */" },
		{ "IncludePath", "AddPivotActorTool.h" },
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
		{ "ToolTip", "Given selected actors, creates an empty actor as the parent of those actors, at a location\nspecified using the gizmo. This is useful for creating a permanent alternate pivot to use in\nanimation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPivotActorTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_DragAlignmentMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_DragAlignmentMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPivotActorTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPivotActorTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/AddPivotActorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProperties = { "TransformProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAddPivotActorTool, TransformProperties), Z_Construct_UClass_UPivotActorTransformProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddPivotActorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_DragAlignmentMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddPivotActorTool_Statics::NewProp_TransformProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddPivotActorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddPivotActorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddPivotActorTool_Statics::ClassParams = {
		&UAddPivotActorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddPivotActorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAddPivotActorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddPivotActorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddPivotActorTool()
	{
		if (!Z_Registration_Info_UClass_UAddPivotActorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddPivotActorTool.OuterSingleton, Z_Construct_UClass_UAddPivotActorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddPivotActorTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UAddPivotActorTool>()
	{
		return UAddPivotActorTool::StaticClass();
	}
	UAddPivotActorTool::UAddPivotActorTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddPivotActorTool);
	UAddPivotActorTool::~UAddPivotActorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AddPivotActorTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AddPivotActorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPivotActorTransformProperties, UPivotActorTransformProperties::StaticClass, TEXT("UPivotActorTransformProperties"), &Z_Registration_Info_UClass_UPivotActorTransformProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotActorTransformProperties), 3103698610U) },
		{ Z_Construct_UClass_UAddPivotActorToolBuilder, UAddPivotActorToolBuilder::StaticClass, TEXT("UAddPivotActorToolBuilder"), &Z_Registration_Info_UClass_UAddPivotActorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddPivotActorToolBuilder), 2955601903U) },
		{ Z_Construct_UClass_UAddPivotActorTool, UAddPivotActorTool::StaticClass, TEXT("UAddPivotActorTool"), &Z_Registration_Info_UClass_UAddPivotActorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddPivotActorTool), 2867515955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AddPivotActorTool_h_3518770066(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AddPivotActorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_AddPivotActorTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
