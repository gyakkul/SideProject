// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EditorSupport/CompImageColorPickerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompImageColorPickerInterface() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompImageColorPickerInterface();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UCompImageColorPickerInterface::StaticRegisterNativesUCompImageColorPickerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompImageColorPickerInterface);
	UClass* Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister()
	{
		return UCompImageColorPickerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCompImageColorPickerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompImageColorPickerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompEditorImagePreviewInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompImageColorPickerInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/EditorSupport/CompImageColorPickerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompImageColorPickerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompImageColorPickerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompImageColorPickerInterface_Statics::ClassParams = {
		&UCompImageColorPickerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCompImageColorPickerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompImageColorPickerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompImageColorPickerInterface()
	{
		if (!Z_Registration_Info_UClass_UCompImageColorPickerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompImageColorPickerInterface.OuterSingleton, Z_Construct_UClass_UCompImageColorPickerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompImageColorPickerInterface.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompImageColorPickerInterface>()
	{
		return UCompImageColorPickerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompImageColorPickerInterface);
	UCompImageColorPickerInterface::~UCompImageColorPickerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompImageColorPickerInterface, UCompImageColorPickerInterface::StaticClass, TEXT("UCompImageColorPickerInterface"), &Z_Registration_Info_UClass_UCompImageColorPickerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompImageColorPickerInterface), 2773550083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_2060709596(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_EditorSupport_CompImageColorPickerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
