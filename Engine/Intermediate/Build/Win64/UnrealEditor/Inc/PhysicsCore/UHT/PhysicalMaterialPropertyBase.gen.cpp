// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalMaterials/PhysicalMaterialPropertyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	void UDEPRECATED_PhysicalMaterialPropertyBase::StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PhysicalMaterialPropertyBase);
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister()
	{
		return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PhysicalMaterialPropertyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams = {
		&UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass,
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
		0x020832A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton;
	}
	template<> PHYSICSCORE_API UClass* StaticClass<UDEPRECATED_PhysicalMaterialPropertyBase>()
	{
		return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PhysicalMaterialPropertyBase);
	UDEPRECATED_PhysicalMaterialPropertyBase::~UDEPRECATED_PhysicalMaterialPropertyBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass, TEXT("UDEPRECATED_PhysicalMaterialPropertyBase"), &Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PhysicalMaterialPropertyBase), 2263083333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_963470564(TEXT("/Script/PhysicsCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
