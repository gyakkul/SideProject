// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/SMInstance/SMInstanceElementEditorSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementEditorSelectionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementEditorSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USMInstanceElementEditorSelectionInterface::StaticRegisterNativesUSMInstanceElementEditorSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementEditorSelectionInterface);
	UClass* Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_NoRegister()
	{
		return USMInstanceElementEditorSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMInstanceElementSelectionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementEditorSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementEditorSelectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementEditorSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::ClassParams = {
		&USMInstanceElementEditorSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceElementEditorSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_USMInstanceElementEditorSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementEditorSelectionInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMInstanceElementEditorSelectionInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USMInstanceElementEditorSelectionInterface>()
	{
		return USMInstanceElementEditorSelectionInterface::StaticClass();
	}
	USMInstanceElementEditorSelectionInterface::USMInstanceElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementEditorSelectionInterface);
	USMInstanceElementEditorSelectionInterface::~USMInstanceElementEditorSelectionInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementEditorSelectionInterface, USMInstanceElementEditorSelectionInterface::StaticClass, TEXT("USMInstanceElementEditorSelectionInterface"), &Z_Registration_Info_UClass_USMInstanceElementEditorSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementEditorSelectionInterface), 1744546233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_1445125803(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
