// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/WidgetCompilerRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetCompilerRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetCompilerRule::StaticRegisterNativesUWidgetCompilerRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetCompilerRule);
	UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister()
	{
		return UWidgetCompilerRule::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetCompilerRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetCompilerRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WidgetCompilerRule.h" },
		{ "ModuleRelativePath", "Public/WidgetCompilerRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetCompilerRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetCompilerRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetCompilerRule_Statics::ClassParams = {
		&UWidgetCompilerRule::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetCompilerRule()
	{
		if (!Z_Registration_Info_UClass_UWidgetCompilerRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetCompilerRule.OuterSingleton, Z_Construct_UClass_UWidgetCompilerRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetCompilerRule.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetCompilerRule>()
	{
		return UWidgetCompilerRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetCompilerRule);
	UWidgetCompilerRule::~UWidgetCompilerRule() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetCompilerRule, UWidgetCompilerRule::StaticClass, TEXT("UWidgetCompilerRule"), &Z_Registration_Info_UClass_UWidgetCompilerRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetCompilerRule), 2203508487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_3493400971(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetCompilerRule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
