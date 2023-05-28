// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Component/ComponentElementEditorWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementEditorWorldInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementWorldInterface();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorWorldInterface();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementEditorWorldInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UComponentElementEditorWorldInterface::StaticRegisterNativesUComponentElementEditorWorldInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementEditorWorldInterface);
	UClass* Z_Construct_UClass_UComponentElementEditorWorldInterface_NoRegister()
	{
		return UComponentElementEditorWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComponentElementWorldInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementEditorWorldInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementEditorWorldInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementEditorWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::ClassParams = {
		&UComponentElementEditorWorldInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementEditorWorldInterface()
	{
		if (!Z_Registration_Info_UClass_UComponentElementEditorWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementEditorWorldInterface.OuterSingleton, Z_Construct_UClass_UComponentElementEditorWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementEditorWorldInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UComponentElementEditorWorldInterface>()
	{
		return UComponentElementEditorWorldInterface::StaticClass();
	}
	UComponentElementEditorWorldInterface::UComponentElementEditorWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementEditorWorldInterface);
	UComponentElementEditorWorldInterface::~UComponentElementEditorWorldInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementEditorWorldInterface, UComponentElementEditorWorldInterface::StaticClass, TEXT("UComponentElementEditorWorldInterface"), &Z_Registration_Info_UClass_UComponentElementEditorWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementEditorWorldInterface), 87799264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_2215817486(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
