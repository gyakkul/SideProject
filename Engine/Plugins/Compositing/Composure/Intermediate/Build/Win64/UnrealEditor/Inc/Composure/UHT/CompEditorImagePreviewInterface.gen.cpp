// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EditorSupport/CompEditorImagePreviewInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompEditorImagePreviewInterface() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UCompEditorImagePreviewInterface::StaticRegisterNativesUCompEditorImagePreviewInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompEditorImagePreviewInterface);
	UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister()
	{
		return UCompEditorImagePreviewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EditorSupport/CompEditorImagePreviewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompEditorImagePreviewInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::ClassParams = {
		&UCompEditorImagePreviewInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface()
	{
		if (!Z_Registration_Info_UClass_UCompEditorImagePreviewInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompEditorImagePreviewInterface.OuterSingleton, Z_Construct_UClass_UCompEditorImagePreviewInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompEditorImagePreviewInterface.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompEditorImagePreviewInterface>()
	{
		return UCompEditorImagePreviewInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompEditorImagePreviewInterface);
	UCompEditorImagePreviewInterface::~UCompEditorImagePreviewInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompEditorImagePreviewInterface, UCompEditorImagePreviewInterface::StaticClass, TEXT("UCompEditorImagePreviewInterface"), &Z_Registration_Info_UClass_UCompEditorImagePreviewInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompEditorImagePreviewInterface), 454777561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_3901824562(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompEditorImagePreviewInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
