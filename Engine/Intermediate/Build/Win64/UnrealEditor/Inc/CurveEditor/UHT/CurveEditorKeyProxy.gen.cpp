// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveEditorKeyProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorKeyProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorKeyProxy::StaticRegisterNativesUCurveEditorKeyProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorKeyProxy);
	UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister()
	{
		return UCurveEditorKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorKeyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurveEditorKeyProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICurveEditorKeyProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorKeyProxy_Statics::ClassParams = {
		&UCurveEditorKeyProxy::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorKeyProxy()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorKeyProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorKeyProxy.OuterSingleton, Z_Construct_UClass_UCurveEditorKeyProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorKeyProxy.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorKeyProxy>()
	{
		return UCurveEditorKeyProxy::StaticClass();
	}
	UCurveEditorKeyProxy::UCurveEditorKeyProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorKeyProxy);
	UCurveEditorKeyProxy::~UCurveEditorKeyProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorKeyProxy, UCurveEditorKeyProxy::StaticClass, TEXT("UCurveEditorKeyProxy"), &Z_Registration_Info_UClass_UCurveEditorKeyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorKeyProxy), 626884676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_2739354787(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorKeyProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
