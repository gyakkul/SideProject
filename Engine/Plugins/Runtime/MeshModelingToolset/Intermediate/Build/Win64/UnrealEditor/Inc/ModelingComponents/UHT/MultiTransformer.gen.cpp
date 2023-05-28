// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transforms/MultiTransformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiTransformer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTransformer();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTransformer_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiTransformerMode;
	static UEnum* EMultiTransformerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EMultiTransformerMode"));
		}
		return Z_Registration_Info_UEnum_EMultiTransformerMode.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EMultiTransformerMode>()
	{
		return EMultiTransformerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enumerators[] = {
		{ "EMultiTransformerMode::DefaultGizmo", (int64)EMultiTransformerMode::DefaultGizmo },
		{ "EMultiTransformerMode::QuickAxisTranslation", (int64)EMultiTransformerMode::QuickAxisTranslation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enum_MetaDataParams[] = {
		{ "DefaultGizmo.Name", "EMultiTransformerMode::DefaultGizmo" },
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
		{ "QuickAxisTranslation.Name", "EMultiTransformerMode::QuickAxisTranslation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EMultiTransformerMode",
		"EMultiTransformerMode",
		Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode()
	{
		if (!Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EMultiTransformerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiTransformerMode.InnerSingleton;
	}
	void UMultiTransformer::StaticRegisterNativesUMultiTransformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiTransformer);
	UClass* Z_Construct_UClass_UMultiTransformer_NoRegister()
	{
		return UMultiTransformer::StaticClass();
	}
	struct Z_Construct_UClass_UMultiTransformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiTransformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTransformer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiTransformer abstracts both a default TRS Gizmo, and the \"Quick\" translate/rotate Gizmos.\n * The \"Quick\" part is not yet implemented, and we might end up phasing out this class.\n */" },
		{ "IncludePath", "Transforms/MultiTransformer.h" },
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
		{ "ToolTip", "UMultiTransformer abstracts both a default TRS Gizmo, and the \"Quick\" translate/rotate Gizmos.\nThe \"Quick\" part is not yet implemented, and we might end up phasing out this class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTransformer_Statics::NewProp_GizmoManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiTransformer_Statics::NewProp_GizmoManager = { "GizmoManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiTransformer, GizmoManager), Z_Construct_UClass_UInteractiveGizmoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_GizmoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_GizmoManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiTransformer, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiTransformer, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTransformer_Statics::NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "Comment", "// We have to hold on to the mechanic only because the MultiTransformer has the capacity to delete and\n// recreate its gizmo, in which case we'll need to attach the alignment mechanic again.\n" },
		{ "ModuleRelativePath", "Public/Transforms/MultiTransformer.h" },
		{ "ToolTip", "We have to hold on to the mechanic only because the MultiTransformer has the capacity to delete and\nrecreate its gizmo, in which case we'll need to attach the alignment mechanic again." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiTransformer_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiTransformer, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_DragAlignmentMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::NewProp_DragAlignmentMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiTransformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTransformer_Statics::NewProp_GizmoManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTransformer_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTransformer_Statics::NewProp_DragAlignmentMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiTransformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTransformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiTransformer_Statics::ClassParams = {
		&UMultiTransformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiTransformer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiTransformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTransformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiTransformer()
	{
		if (!Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton, Z_Construct_UClass_UMultiTransformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiTransformer.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiTransformer>()
	{
		return UMultiTransformer::StaticClass();
	}
	UMultiTransformer::UMultiTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTransformer);
	UMultiTransformer::~UMultiTransformer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::EnumInfo[] = {
		{ EMultiTransformerMode_StaticEnum, TEXT("EMultiTransformerMode"), &Z_Registration_Info_UEnum_EMultiTransformerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3417735968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiTransformer, UMultiTransformer::StaticClass, TEXT("UMultiTransformer"), &Z_Registration_Info_UClass_UMultiTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiTransformer), 2517205799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_2505172789(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
