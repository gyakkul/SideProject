// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ControlRigGizmoLibraryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGizmoLibraryFactory() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigShapeLibraryFactory();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigShapeLibraryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigShapeLibraryFactory::StaticRegisterNativesUControlRigShapeLibraryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigShapeLibraryFactory);
	UClass* Z_Construct_UClass_UControlRigShapeLibraryFactory_NoRegister()
	{
		return UControlRigShapeLibraryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ControlRigGizmoLibraryFactory.h" },
		{ "ModuleRelativePath", "Private/ControlRigGizmoLibraryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigShapeLibraryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::ClassParams = {
		&UControlRigShapeLibraryFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigShapeLibraryFactory()
	{
		if (!Z_Registration_Info_UClass_UControlRigShapeLibraryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigShapeLibraryFactory.OuterSingleton, Z_Construct_UClass_UControlRigShapeLibraryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigShapeLibraryFactory.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigShapeLibraryFactory>()
	{
		return UControlRigShapeLibraryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigShapeLibraryFactory);
	UControlRigShapeLibraryFactory::~UControlRigShapeLibraryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigGizmoLibraryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigGizmoLibraryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigShapeLibraryFactory, UControlRigShapeLibraryFactory::StaticClass, TEXT("UControlRigShapeLibraryFactory"), &Z_Registration_Info_UClass_UControlRigShapeLibraryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigShapeLibraryFactory), 3211568926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigGizmoLibraryFactory_h_1153695689(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigGizmoLibraryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigGizmoLibraryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
