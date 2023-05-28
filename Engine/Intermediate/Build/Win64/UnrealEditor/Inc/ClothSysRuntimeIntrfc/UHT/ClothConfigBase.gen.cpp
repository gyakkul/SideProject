// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothConfigBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigBase() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References
	void UClothConfigBase::StaticRegisterNativesUClothConfigBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigBase);
	UClass* Z_Construct_UClass_UClothConfigBase_NoRegister()
	{
		return UClothConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for simulator specific simulation controls.\n * Each cloth instance on a skeletal mesh can have a unique cloth config\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "Base class for simulator specific simulation controls.\nEach cloth instance on a skeletal mesh can have a unique cloth config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigBase_Statics::ClassParams = {
		&UClothConfigBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigBase()
	{
		if (!Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton, Z_Construct_UClass_UClothConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothConfigBase.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothConfigBase>()
	{
		return UClothConfigBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigBase);
	void UDEPRECATED_ClothSharedSimConfigBase::StaticRegisterNativesUDEPRECATED_ClothSharedSimConfigBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ClothSharedSimConfigBase);
	UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_NoRegister()
	{
		return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * These settings are shared between all instances on a skeletal mesh\n * Deprecated, use UClothConfigBase instead.\n */" },
		{ "IncludePath", "ClothConfigBase.h" },
		{ "ModuleRelativePath", "Public/ClothConfigBase.h" },
		{ "ToolTip", "These settings are shared between all instances on a skeletal mesh\nDeprecated, use UClothConfigBase instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ClothSharedSimConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams = {
		&UDEPRECATED_ClothSharedSimConfigBase::StaticClass,
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
		0x021002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UDEPRECATED_ClothSharedSimConfigBase>()
	{
		return UDEPRECATED_ClothSharedSimConfigBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ClothSharedSimConfigBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigBase, UClothConfigBase::StaticClass, TEXT("UClothConfigBase"), &Z_Registration_Info_UClass_UClothConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigBase), 3234368605U) },
		{ Z_Construct_UClass_UDEPRECATED_ClothSharedSimConfigBase, UDEPRECATED_ClothSharedSimConfigBase::StaticClass, TEXT("UDEPRECATED_ClothSharedSimConfigBase"), &Z_Registration_Info_UClass_UDEPRECATED_ClothSharedSimConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ClothSharedSimConfigBase), 2093522644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_2427646347(TEXT("/Script/ClothingSystemRuntimeInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothConfigBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
