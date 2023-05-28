// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Component/ComponentElementEditorSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementEditorSelectionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorSelectionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UComponentElementEditorSelectionInterface::StaticRegisterNativesUComponentElementEditorSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementEditorSelectionInterface);
	UClass* Z_Construct_UClass_UComponentElementEditorSelectionInterface_NoRegister()
	{
		return UComponentElementEditorSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComponentElementSelectionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementEditorSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementEditorSelectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementEditorSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::ClassParams = {
		&UComponentElementEditorSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementEditorSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_UComponentElementEditorSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementEditorSelectionInterface.OuterSingleton, Z_Construct_UClass_UComponentElementEditorSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementEditorSelectionInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UComponentElementEditorSelectionInterface>()
	{
		return UComponentElementEditorSelectionInterface::StaticClass();
	}
	UComponentElementEditorSelectionInterface::UComponentElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementEditorSelectionInterface);
	UComponentElementEditorSelectionInterface::~UComponentElementEditorSelectionInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementEditorSelectionInterface, UComponentElementEditorSelectionInterface::StaticClass, TEXT("UComponentElementEditorSelectionInterface"), &Z_Registration_Info_UClass_UComponentElementEditorSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementEditorSelectionInterface), 1987372537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_542064597(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorSelectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
