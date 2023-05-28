// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TypedElementDatabaseCompatibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDatabaseCompatibility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDatabaseCompatibility();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDatabaseCompatibility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementDatabaseCompatibility::StaticRegisterNativesUTypedElementDatabaseCompatibility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDatabaseCompatibility);
	UClass* Z_Construct_UClass_UTypedElementDatabaseCompatibility_NoRegister()
	{
		return UTypedElementDatabaseCompatibility::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementDatabaseCompatibility.h" },
		{ "ModuleRelativePath", "Private/TypedElementDatabaseCompatibility.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDataStorageCompatibilityInterface_NoRegister, (int32)VTABLE_OFFSET(UTypedElementDatabaseCompatibility, ITypedElementDataStorageCompatibilityInterface), false },  // 2115573677
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDatabaseCompatibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::ClassParams = {
		&UTypedElementDatabaseCompatibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDatabaseCompatibility()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDatabaseCompatibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDatabaseCompatibility.OuterSingleton, Z_Construct_UClass_UTypedElementDatabaseCompatibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDatabaseCompatibility.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementDatabaseCompatibility>()
	{
		return UTypedElementDatabaseCompatibility::StaticClass();
	}
	UTypedElementDatabaseCompatibility::UTypedElementDatabaseCompatibility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDatabaseCompatibility);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseCompatibility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseCompatibility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDatabaseCompatibility, UTypedElementDatabaseCompatibility::StaticClass, TEXT("UTypedElementDatabaseCompatibility"), &Z_Registration_Info_UClass_UTypedElementDatabaseCompatibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDatabaseCompatibility), 333777211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseCompatibility_h_3537073101(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseCompatibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseCompatibility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
