// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/RepositionableTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepositionableTransformGizmo() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void URepositionableTransformGizmoBuilder::StaticRegisterNativesURepositionableTransformGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepositionableTransformGizmoBuilder);
	UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister()
	{
		return URepositionableTransformGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombinedTransformGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepositionableTransformGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::ClassParams = {
		&URepositionableTransformGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URepositionableTransformGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton, Z_Construct_UClass_URepositionableTransformGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<URepositionableTransformGizmoBuilder>()
	{
		return URepositionableTransformGizmoBuilder::StaticClass();
	}
	URepositionableTransformGizmoBuilder::URepositionableTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URepositionableTransformGizmoBuilder);
	URepositionableTransformGizmoBuilder::~URepositionableTransformGizmoBuilder() {}
	void URepositionableTransformGizmo::StaticRegisterNativesURepositionableTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URepositionableTransformGizmo);
	UClass* Z_Construct_UClass_URepositionableTransformGizmo_NoRegister()
	{
		return URepositionableTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_URepositionableTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositionStateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RepositionStateTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URepositionableTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombinedTransformGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepositionableTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transform gizmo that also allows the user to reposition it by middle-clicking rotation/translation components.\n */" },
		{ "IncludePath", "BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
		{ "ToolTip", "A transform gizmo that also allows the user to reposition it by middle-clicking rotation/translation components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/RepositionableTransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget = { "RepositionStateTarget", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URepositionableTransformGizmo, RepositionStateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URepositionableTransformGizmo_Statics::NewProp_RepositionStateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URepositionableTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URepositionableTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URepositionableTransformGizmo_Statics::ClassParams = {
		&URepositionableTransformGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URepositionableTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URepositionableTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URepositionableTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton, Z_Construct_UClass_URepositionableTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URepositionableTransformGizmo.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<URepositionableTransformGizmo>()
	{
		return URepositionableTransformGizmo::StaticClass();
	}
	URepositionableTransformGizmo::URepositionableTransformGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URepositionableTransformGizmo);
	URepositionableTransformGizmo::~URepositionableTransformGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URepositionableTransformGizmoBuilder, URepositionableTransformGizmoBuilder::StaticClass, TEXT("URepositionableTransformGizmoBuilder"), &Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepositionableTransformGizmoBuilder), 1219018513U) },
		{ Z_Construct_UClass_URepositionableTransformGizmo, URepositionableTransformGizmo::StaticClass, TEXT("URepositionableTransformGizmo"), &Z_Registration_Info_UClass_URepositionableTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URepositionableTransformGizmo), 2867386757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_2782943286(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_RepositionableTransformGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
