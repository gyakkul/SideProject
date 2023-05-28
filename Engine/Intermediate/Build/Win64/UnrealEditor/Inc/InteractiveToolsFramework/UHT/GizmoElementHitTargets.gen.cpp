// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementHitTargets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementHitTargets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementHitTarget::StaticRegisterNativesUGizmoElementHitTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementHitTarget);
	UClass* Z_Construct_UClass_UGizmoElementHitTarget_NoRegister()
	{
		return UGizmoElementHitTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementHitTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoTransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementHitTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoElementHitTarget is an IGizmoClickTarget implementation that\n * hit-tests any object derived from UGizmoElementBase\n * This hit target should be used for hitting a whole gizmo element hierarchy.\n * Use UGizmoElementHitMultiTarget, for hit targets that support hitting parts within a gizmo element hierarchy.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementHitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "UGizmoElementHitTarget is an IGizmoClickTarget implementation that\nhit-tests any object derived from UGizmoElementBase\nThis hit target should be used for hitting a whole gizmo element hierarchy.\nUse UGizmoElementHitMultiTarget, for hit targets that support hitting parts within a gizmo element hierarchy." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement_MetaData[] = {
		{ "Comment", "/**\n\x09 * Gizmo element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "Gizmo element." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement = { "GizmoElement", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoElement), Z_Construct_UClass_UGizmoElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy = { "GizmoTransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitTarget, GizmoTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitTarget_Statics::NewProp_GizmoTransformProxy,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoElementHitTarget, IGizmoClickTarget), false },  // 3567146117
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementHitTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementHitTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementHitTarget_Statics::ClassParams = {
		&UGizmoElementHitTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementHitTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton, Z_Construct_UClass_UGizmoElementHitTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementHitTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementHitTarget>()
	{
		return UGizmoElementHitTarget::StaticClass();
	}
	UGizmoElementHitTarget::UGizmoElementHitTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementHitTarget);
	UGizmoElementHitTarget::~UGizmoElementHitTarget() {}
	void UGizmoElementHitMultiTarget::StaticRegisterNativesUGizmoElementHitMultiTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementHitMultiTarget);
	UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister()
	{
		return UGizmoElementHitMultiTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoTransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoElementHitMultiTarget is an IGizmoClickMultiTarget implementation that\n * hit-tests any object derived from UGizmoElementBase. This implementation is used for \n * HitTargets which support hitting multiple parts within a gizmo element hierarchy. \n *\n * For a gizmo with multiple parts, the part identifier establishes a correspondence between a gizmo part \n * and the elements representing that part within the hit target. The valid part identifiers should \n * be defined in the gizmo. Identifier 0 is reserved for the default ID which should be assigned to \n * elements that do not correspond to any gizmo part, such as non-hittable decorative elements.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementHitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "UGizmoElementHitMultiTarget is an IGizmoClickMultiTarget implementation that\nhit-tests any object derived from UGizmoElementBase. This implementation is used for\nHitTargets which support hitting multiple parts within a gizmo element hierarchy.\n\nFor a gizmo with multiple parts, the part identifier establishes a correspondence between a gizmo part\nand the elements representing that part within the hit target. The valid part identifiers should\nbe defined in the gizmo. Identifier 0 is reserved for the default ID which should be assigned to\nelements that do not correspond to any gizmo part, such as non-hittable decorative elements." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement_MetaData[] = {
		{ "Comment", "/**\n\x09 * Gizmo element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
		{ "ToolTip", "Gizmo element." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement = { "GizmoElement", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoElement), Z_Construct_UClass_UGizmoElementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementHitTargets.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy = { "GizmoTransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementHitMultiTarget, GizmoTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::NewProp_GizmoTransformProxy,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoElementHitMultiTarget, IGizmoClickMultiTarget), false },  // 3930136021
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementHitMultiTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::ClassParams = {
		&UGizmoElementHitMultiTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton, Z_Construct_UClass_UGizmoElementHitMultiTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementHitMultiTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementHitMultiTarget>()
	{
		return UGizmoElementHitMultiTarget::StaticClass();
	}
	UGizmoElementHitMultiTarget::UGizmoElementHitMultiTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementHitMultiTarget);
	UGizmoElementHitMultiTarget::~UGizmoElementHitMultiTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementHitTarget, UGizmoElementHitTarget::StaticClass, TEXT("UGizmoElementHitTarget"), &Z_Registration_Info_UClass_UGizmoElementHitTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementHitTarget), 2832884153U) },
		{ Z_Construct_UClass_UGizmoElementHitMultiTarget, UGizmoElementHitMultiTarget::StaticClass, TEXT("UGizmoElementHitMultiTarget"), &Z_Registration_Info_UClass_UGizmoElementHitMultiTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementHitMultiTarget), 1515890012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_1112844135(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementHitTargets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
