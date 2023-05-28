// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PrecachePayloadsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecachePayloadsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_VirtualizationEditor();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UPrecachePayloadsCommandlet();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UPrecachePayloadsCommandlet_NoRegister();
// End Cross Module References
	void UPrecachePayloadsCommandlet::StaticRegisterNativesUPrecachePayloadsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrecachePayloadsCommandlet);
	UClass* Z_Construct_UClass_UPrecachePayloadsCommandlet_NoRegister()
	{
		return UPrecachePayloadsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualizationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PrecachePayloadsCommandlet.h" },
		{ "ModuleRelativePath", "Private/PrecachePayloadsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrecachePayloadsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::ClassParams = {
		&UPrecachePayloadsCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrecachePayloadsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UPrecachePayloadsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrecachePayloadsCommandlet.OuterSingleton, Z_Construct_UClass_UPrecachePayloadsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrecachePayloadsCommandlet.OuterSingleton;
	}
	template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<UPrecachePayloadsCommandlet>()
	{
		return UPrecachePayloadsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrecachePayloadsCommandlet);
	UPrecachePayloadsCommandlet::~UPrecachePayloadsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPrecachePayloadsCommandlet, UPrecachePayloadsCommandlet::StaticClass, TEXT("UPrecachePayloadsCommandlet"), &Z_Registration_Info_UClass_UPrecachePayloadsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrecachePayloadsCommandlet), 3234382601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_1343297752(TEXT("/Script/VirtualizationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_PrecachePayloadsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
