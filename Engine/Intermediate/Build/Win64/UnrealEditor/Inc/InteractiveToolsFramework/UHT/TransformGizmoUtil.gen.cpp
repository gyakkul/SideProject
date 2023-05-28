// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/TransformGizmoUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformGizmoUtil() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoContextObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoContextObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UCombinedTransformGizmoContextObject::StaticRegisterNativesUCombinedTransformGizmoContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedTransformGizmoContextObject);
	UClass* Z_Construct_UClass_UCombinedTransformGizmoContextObject_NoRegister()
	{
		return UCombinedTransformGizmoContextObject::StaticClass();
	}
	struct Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCombinedTransformGizmoContextObject is a utility object that registers a set of Gizmo Builders\n * for UCombinedTransformGizmo and variants. The intended usage is to call RegisterGizmosWithManager(),\n * and then the UCombinedTransformGizmoContextObject will register itself as a ContextObject in the\n * InteractiveToolsContext's ContextObjectStore. Then the Create3AxisTransformGizmo()/etc functions\n * will spawn different variants of UCombinedTransformGizmo. The above UE::TransformGizmoUtil:: functions\n * will look up the UCombinedTransformGizmoContextObject instance in the ContextObjectStore and then\n * call the associated function below.\n */" },
		{ "IncludePath", "BaseGizmos/TransformGizmoUtil.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/TransformGizmoUtil.h" },
		{ "ToolTip", "UCombinedTransformGizmoContextObject is a utility object that registers a set of Gizmo Builders\nfor UCombinedTransformGizmo and variants. The intended usage is to call RegisterGizmosWithManager(),\nand then the UCombinedTransformGizmoContextObject will register itself as a ContextObject in the\nInteractiveToolsContext's ContextObjectStore. Then the Create3AxisTransformGizmo()/etc functions\nwill spawn different variants of UCombinedTransformGizmo. The above UE::TransformGizmoUtil:: functions\nwill look up the UCombinedTransformGizmoContextObject instance in the ContextObjectStore and then\ncall the associated function below." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedTransformGizmoContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::ClassParams = {
		&UCombinedTransformGizmoContextObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombinedTransformGizmoContextObject()
	{
		if (!Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton, Z_Construct_UClass_UCombinedTransformGizmoContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UCombinedTransformGizmoContextObject>()
	{
		return UCombinedTransformGizmoContextObject::StaticClass();
	}
	UCombinedTransformGizmoContextObject::UCombinedTransformGizmoContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedTransformGizmoContextObject);
	UCombinedTransformGizmoContextObject::~UCombinedTransformGizmoContextObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombinedTransformGizmoContextObject, UCombinedTransformGizmoContextObject::StaticClass, TEXT("UCombinedTransformGizmoContextObject"), &Z_Registration_Info_UClass_UCombinedTransformGizmoContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedTransformGizmoContextObject), 3656360472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h_517772486(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformGizmoUtil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
