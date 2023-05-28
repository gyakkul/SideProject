// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CurveEditorFilterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorFilterBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorFilterBase::StaticRegisterNativesUCurveEditorFilterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorFilterBase);
	UClass* Z_Construct_UClass_UCurveEditorFilterBase_NoRegister()
	{
		return UCurveEditorFilterBase::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorFilterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorFilterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFilterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* An abstract base class for Curve Editor Filtering. If you inherit from this class your class will automatically\n* show up in the Curve Editor's Filter dropdown. This allows projects to easily create custom filters to edit curve\n* data as they only have to implement this class. Any UPROPERTY(EditAnywhere) properties exposed on the class will\n* show up in the Curve Editor Filter panel which allows you to easily create customizable properties or advanced filters\n* that rely on user supplied settings.\n*\n* The CDO is directly edited in the Curve Editor Filter panel so if you wish to save user settings between runs you can\n* add the \"config\" property to your UPROPERTY() and it will automatically get saved.\n*/" },
		{ "IncludePath", "Filters/CurveEditorFilterBase.h" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorFilterBase.h" },
		{ "ToolTip", "An abstract base class for Curve Editor Filtering. If you inherit from this class your class will automatically\nshow up in the Curve Editor's Filter dropdown. This allows projects to easily create custom filters to edit curve\ndata as they only have to implement this class. Any UPROPERTY(EditAnywhere) properties exposed on the class will\nshow up in the Curve Editor Filter panel which allows you to easily create customizable properties or advanced filters\nthat rely on user supplied settings.\n\nThe CDO is directly edited in the Curve Editor Filter panel so if you wish to save user settings between runs you can\nadd the \"config\" property to your UPROPERTY() and it will automatically get saved." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorFilterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorFilterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorFilterBase_Statics::ClassParams = {
		&UCurveEditorFilterBase::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFilterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFilterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorFilterBase()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorFilterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorFilterBase.OuterSingleton, Z_Construct_UClass_UCurveEditorFilterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorFilterBase.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorFilterBase>()
	{
		return UCurveEditorFilterBase::StaticClass();
	}
	UCurveEditorFilterBase::UCurveEditorFilterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorFilterBase);
	UCurveEditorFilterBase::~UCurveEditorFilterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorFilterBase, UCurveEditorFilterBase::StaticClass, TEXT("UCurveEditorFilterBase"), &Z_Registration_Info_UClass_UCurveEditorFilterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorFilterBase), 3970287809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_1742417002(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorFilterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
