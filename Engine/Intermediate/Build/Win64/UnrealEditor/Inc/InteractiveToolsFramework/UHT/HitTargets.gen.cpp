// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/HitTargets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitTargets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentHitTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaHitTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoLambdaHitTarget::StaticRegisterNativesUGizmoLambdaHitTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLambdaHitTarget);
	UClass* Z_Construct_UClass_UGizmoLambdaHitTarget_NoRegister()
	{
		return UGizmoLambdaHitTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLambdaHitTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLambdaHitTarget is an IGizmoClickTarget implementation that\n * forwards the hit-test function to a TFunction\n */" },
		{ "IncludePath", "BaseGizmos/HitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "UGizmoLambdaHitTarget is an IGizmoClickTarget implementation that\nforwards the hit-test function to a TFunction" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoLambdaHitTarget, IGizmoClickTarget), false },  // 3567146117
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLambdaHitTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::ClassParams = {
		&UGizmoLambdaHitTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLambdaHitTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton, Z_Construct_UClass_UGizmoLambdaHitTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoLambdaHitTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLambdaHitTarget>()
	{
		return UGizmoLambdaHitTarget::StaticClass();
	}
	UGizmoLambdaHitTarget::UGizmoLambdaHitTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLambdaHitTarget);
	UGizmoLambdaHitTarget::~UGizmoLambdaHitTarget() {}
	void UGizmoComponentHitTarget::StaticRegisterNativesUGizmoComponentHitTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoComponentHitTarget);
	UClass* Z_Construct_UClass_UGizmoComponentHitTarget_NoRegister()
	{
		return UGizmoComponentHitTarget::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoComponentHitTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoComponentHitTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoComponentHitTarget is an IGizmoClickTarget implementation that\n * hit-tests a UPrimitiveComponent\n */" },
		{ "IncludePath", "BaseGizmos/HitTargets.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "UGizmoComponentHitTarget is an IGizmoClickTarget implementation that\nhit-tests a UPrimitiveComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData[] = {
		{ "Comment", "/**\n\x09 * Component->LineTraceComponent() is called to determine if the target is hit\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/HitTargets.h" },
		{ "ToolTip", "Component->LineTraceComponent() is called to determine if the target is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoComponentHitTarget, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoComponentHitTarget_Statics::NewProp_Component,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoClickTarget_NoRegister, (int32)VTABLE_OFFSET(UGizmoComponentHitTarget, IGizmoClickTarget), false },  // 3567146117
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoComponentHitTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoComponentHitTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoComponentHitTarget_Statics::ClassParams = {
		&UGizmoComponentHitTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoComponentHitTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoComponentHitTarget()
	{
		if (!Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton, Z_Construct_UClass_UGizmoComponentHitTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoComponentHitTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoComponentHitTarget>()
	{
		return UGizmoComponentHitTarget::StaticClass();
	}
	UGizmoComponentHitTarget::UGizmoComponentHitTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoComponentHitTarget);
	UGizmoComponentHitTarget::~UGizmoComponentHitTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoLambdaHitTarget, UGizmoLambdaHitTarget::StaticClass, TEXT("UGizmoLambdaHitTarget"), &Z_Registration_Info_UClass_UGizmoLambdaHitTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLambdaHitTarget), 1593482772U) },
		{ Z_Construct_UClass_UGizmoComponentHitTarget, UGizmoComponentHitTarget::StaticClass, TEXT("UGizmoComponentHitTarget"), &Z_Registration_Info_UClass_UGizmoComponentHitTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoComponentHitTarget), 3295890034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h_2238210558(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_HitTargets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
