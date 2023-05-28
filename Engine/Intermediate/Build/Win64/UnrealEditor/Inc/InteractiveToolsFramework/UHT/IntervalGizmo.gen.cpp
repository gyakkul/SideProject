// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/IntervalGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntervalGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AIntervalGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AIntervalGizmoActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisIntervalParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisIntervalParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void AIntervalGizmoActor::StaticRegisterNativesAIntervalGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIntervalGizmoActor);
	UClass* Z_Construct_UClass_AIntervalGizmoActor_NoRegister()
	{
		return AIntervalGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AIntervalGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpIntervalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpIntervalComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownIntervalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DownIntervalComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardIntervalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForwardIntervalComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntervalGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntervalGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AIntervalGizmoActor is an Actor type intended to be used with UIntervalGizmo,\n * as the in-scene visual representation of the Gizmo.\n *\n * FIntervalGizmoActorFactory returns an instance of this Actor type (or a subclass).\n *\n * If a particular sub-Gizmo is not required, simply set that UProperty to null.\n\n */" },
		{ "IncludePath", "BaseGizmos/IntervalGizmo.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "AIntervalGizmoActor is an Actor type intended to be used with UIntervalGizmo,\nas the in-scene visual representation of the Gizmo.\n\nFIntervalGizmoActorFactory returns an instance of this Actor type (or a subclass).\n\nIf a particular sub-Gizmo is not required, simply set that UProperty to null." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_UpIntervalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_UpIntervalComponent = { "UpIntervalComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIntervalGizmoActor, UpIntervalComponent), Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_UpIntervalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_UpIntervalComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_DownIntervalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_DownIntervalComponent = { "DownIntervalComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIntervalGizmoActor, DownIntervalComponent), Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_DownIntervalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_DownIntervalComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_ForwardIntervalComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_ForwardIntervalComponent = { "ForwardIntervalComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIntervalGizmoActor, ForwardIntervalComponent), Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_ForwardIntervalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_ForwardIntervalComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntervalGizmoActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_UpIntervalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_DownIntervalComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntervalGizmoActor_Statics::NewProp_ForwardIntervalComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntervalGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntervalGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntervalGizmoActor_Statics::ClassParams = {
		&AIntervalGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIntervalGizmoActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIntervalGizmoActor_Statics::PropPointers),
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIntervalGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIntervalGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntervalGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton, Z_Construct_UClass_AIntervalGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIntervalGizmoActor.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AIntervalGizmoActor>()
	{
		return AIntervalGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntervalGizmoActor);
	AIntervalGizmoActor::~AIntervalGizmoActor() {}
	void UIntervalGizmoBuilder::StaticRegisterNativesUIntervalGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntervalGizmoBuilder);
	UClass* Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister()
	{
		return UIntervalGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UIntervalGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntervalGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/IntervalGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntervalGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntervalGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntervalGizmoBuilder_Statics::ClassParams = {
		&UIntervalGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntervalGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton, Z_Construct_UClass_UIntervalGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIntervalGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UIntervalGizmoBuilder>()
	{
		return UIntervalGizmoBuilder::StaticClass();
	}
	UIntervalGizmoBuilder::UIntervalGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntervalGizmoBuilder);
	UIntervalGizmoBuilder::~UIntervalGizmoBuilder() {}
	void UIntervalGizmo::StaticRegisterNativesUIntervalGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntervalGizmo);
	UClass* Z_Construct_UClass_UIntervalGizmo_NoRegister()
	{
		return UIntervalGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UIntervalGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisYSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisYSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisZSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisZSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntervalGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/IntervalGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** State target is shared across gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "State target is shared across gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, StateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "Comment", "/** The gizmo tracks the location and orientation of the transform in this TransformProxy. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "The gizmo tracks the location and orientation of the transform in this TransformProxy." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_TransformProxy_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents_MetaData[] = {
		{ "Comment", "/** list of current-active child components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "list of current-active child components" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** list of currently-active child gizmos */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "list of currently-active child gizmos" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisYSource_MetaData[] = {
		{ "Comment", "/** Y-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "Y-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisYSource = { "AxisYSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, AxisYSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisYSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisYSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisZSource_MetaData[] = {
		{ "Comment", "/** Z-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "Z-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisZSource = { "AxisZSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntervalGizmo, AxisZSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisZSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisZSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntervalGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_StateTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_ActiveGizmos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisYSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntervalGizmo_Statics::NewProp_AxisZSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntervalGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntervalGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntervalGizmo_Statics::ClassParams = {
		&UIntervalGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIntervalGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIntervalGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIntervalGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntervalGizmo()
	{
		if (!Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton, Z_Construct_UClass_UIntervalGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIntervalGizmo.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UIntervalGizmo>()
	{
		return UIntervalGizmo::StaticClass();
	}
	UIntervalGizmo::UIntervalGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntervalGizmo);
	UIntervalGizmo::~UIntervalGizmo() {}
	void UGizmoAxisIntervalParameterSource::StaticRegisterNativesUGizmoAxisIntervalParameterSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoAxisIntervalParameterSource);
	UClass* Z_Construct_UClass_UGizmoAxisIntervalParameterSource_NoRegister()
	{
		return UGizmoAxisIntervalParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameterSource_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_FloatParameterSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisIntervalParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation\n * along a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Axis Interval Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/IntervalGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
		{ "ToolTip", "UGizmoAxisIntervalParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation\nalong a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Axis Interval Gizmos." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_FloatParameterSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_FloatParameterSource = { "FloatParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoAxisIntervalParameterSource, FloatParameterSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_FloatParameterSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_FloatParameterSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MinParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MinParameter = { "MinParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoAxisIntervalParameterSource, MinParameter), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MinParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MinParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MaxParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/IntervalGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MaxParameter = { "MaxParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoAxisIntervalParameterSource, MaxParameter), METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MaxParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MaxParameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_FloatParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MinParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::NewProp_MaxParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisIntervalParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::ClassParams = {
		&UGizmoAxisIntervalParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoAxisIntervalParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoAxisIntervalParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisIntervalParameterSource>()
	{
		return UGizmoAxisIntervalParameterSource::StaticClass();
	}
	UGizmoAxisIntervalParameterSource::UGizmoAxisIntervalParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisIntervalParameterSource);
	UGizmoAxisIntervalParameterSource::~UGizmoAxisIntervalParameterSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIntervalGizmoActor, AIntervalGizmoActor::StaticClass, TEXT("AIntervalGizmoActor"), &Z_Registration_Info_UClass_AIntervalGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntervalGizmoActor), 2658069106U) },
		{ Z_Construct_UClass_UIntervalGizmoBuilder, UIntervalGizmoBuilder::StaticClass, TEXT("UIntervalGizmoBuilder"), &Z_Registration_Info_UClass_UIntervalGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntervalGizmoBuilder), 62825755U) },
		{ Z_Construct_UClass_UIntervalGizmo, UIntervalGizmo::StaticClass, TEXT("UIntervalGizmo"), &Z_Registration_Info_UClass_UIntervalGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntervalGizmo), 3666881508U) },
		{ Z_Construct_UClass_UGizmoAxisIntervalParameterSource, UGizmoAxisIntervalParameterSource::StaticClass, TEXT("UGizmoAxisIntervalParameterSource"), &Z_Registration_Info_UClass_UGizmoAxisIntervalParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoAxisIntervalParameterSource), 35479178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h_50896835(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_IntervalGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
