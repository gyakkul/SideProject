// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Framework/TypedElementViewportInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementViewportInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementViewportInteraction();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementViewportInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	void UTypedElementViewportInteraction::StaticRegisterNativesUTypedElementViewportInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementViewportInteraction);
	UClass* Z_Construct_UClass_UTypedElementViewportInteraction_NoRegister()
	{
		return UTypedElementViewportInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementViewportInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementViewportInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementViewportInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A utility to handle higher-level viewport interactions, but default via UTypedElementWorldInterface,\n * but asset editors can customize this behavior via FTypedElementViewportInteractionCustomization.\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementViewportInteraction.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementViewportInteraction.h" },
		{ "ToolTip", "A utility to handle higher-level viewport interactions, but default via UTypedElementWorldInterface,\nbut asset editors can customize this behavior via FTypedElementViewportInteractionCustomization." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementViewportInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementViewportInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementViewportInteraction_Statics::ClassParams = {
		&UTypedElementViewportInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementViewportInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementViewportInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementViewportInteraction()
	{
		if (!Z_Registration_Info_UClass_UTypedElementViewportInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementViewportInteraction.OuterSingleton, Z_Construct_UClass_UTypedElementViewportInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementViewportInteraction.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UTypedElementViewportInteraction>()
	{
		return UTypedElementViewportInteraction::StaticClass();
	}
	UTypedElementViewportInteraction::UTypedElementViewportInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementViewportInteraction);
	UTypedElementViewportInteraction::~UTypedElementViewportInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Framework_TypedElementViewportInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Framework_TypedElementViewportInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementViewportInteraction, UTypedElementViewportInteraction::StaticClass, TEXT("UTypedElementViewportInteraction"), &Z_Registration_Info_UClass_UTypedElementViewportInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementViewportInteraction), 3013187304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Framework_TypedElementViewportInteraction_h_3618538344(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Framework_TypedElementViewportInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Framework_TypedElementViewportInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
