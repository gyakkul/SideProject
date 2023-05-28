// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditorContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorMenuContext();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
// End Cross Module References
	void UMaterialEditorMenuContext::StaticRegisterNativesUMaterialEditorMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorMenuContext);
	UClass* Z_Construct_UClass_UMaterialEditorMenuContext_NoRegister()
	{
		return UMaterialEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialEditorContext.h" },
		{ "ModuleRelativePath", "Public/MaterialEditorContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorMenuContext_Statics::ClassParams = {
		&UMaterialEditorMenuContext::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorMenuContext.OuterSingleton, Z_Construct_UClass_UMaterialEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorMenuContext.OuterSingleton;
	}
	template<> MATERIALEDITOR_API UClass* StaticClass<UMaterialEditorMenuContext>()
	{
		return UMaterialEditorMenuContext::StaticClass();
	}
	UMaterialEditorMenuContext::UMaterialEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorMenuContext);
	UMaterialEditorMenuContext::~UMaterialEditorMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorMenuContext, UMaterialEditorMenuContext::StaticClass, TEXT("UMaterialEditorMenuContext"), &Z_Registration_Info_UClass_UMaterialEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorMenuContext), 2088544258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_3231763672(TEXT("/Script/MaterialEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
