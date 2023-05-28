// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/SEditorViewportViewMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSEditorViewportViewMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UEditorViewportViewMenuContext();
	UNREALED_API UClass* Z_Construct_UClass_UEditorViewportViewMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorViewportViewMenuContext::StaticRegisterNativesUEditorViewportViewMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorViewportViewMenuContext);
	UClass* Z_Construct_UClass_UEditorViewportViewMenuContext_NoRegister()
	{
		return UEditorViewportViewMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UEditorViewportViewMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SEditorViewportViewMenuContext.h" },
		{ "ModuleRelativePath", "Public/SEditorViewportViewMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorViewportViewMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::ClassParams = {
		&UEditorViewportViewMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorViewportViewMenuContext()
	{
		if (!Z_Registration_Info_UClass_UEditorViewportViewMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorViewportViewMenuContext.OuterSingleton, Z_Construct_UClass_UEditorViewportViewMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorViewportViewMenuContext.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorViewportViewMenuContext>()
	{
		return UEditorViewportViewMenuContext::StaticClass();
	}
	UEditorViewportViewMenuContext::UEditorViewportViewMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorViewportViewMenuContext);
	UEditorViewportViewMenuContext::~UEditorViewportViewMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SEditorViewportViewMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SEditorViewportViewMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorViewportViewMenuContext, UEditorViewportViewMenuContext::StaticClass, TEXT("UEditorViewportViewMenuContext"), &Z_Registration_Info_UClass_UEditorViewportViewMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorViewportViewMenuContext), 3284623567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SEditorViewportViewMenuContext_h_3632962754(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SEditorViewportViewMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SEditorViewportViewMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
