// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementDataStorageCompatibilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageCompatibilityInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	void UTypedElementDataStorageCompatibilityInterface::StaticRegisterNativesUTypedElementDataStorageCompatibilityInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageCompatibilityInterface);
	UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister()
	{
		return UTypedElementDataStorageCompatibilityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageCompatibilityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageCompatibilityInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::ClassParams = {
		&UTypedElementDataStorageCompatibilityInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageCompatibilityInterface>()
	{
		return UTypedElementDataStorageCompatibilityInterface::StaticClass();
	}
	UTypedElementDataStorageCompatibilityInterface::UTypedElementDataStorageCompatibilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageCompatibilityInterface);
	UTypedElementDataStorageCompatibilityInterface::~UTypedElementDataStorageCompatibilityInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface, UTypedElementDataStorageCompatibilityInterface::StaticClass, TEXT("UTypedElementDataStorageCompatibilityInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageCompatibilityInterface), 2115573677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_1064624897(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageCompatibilityInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
