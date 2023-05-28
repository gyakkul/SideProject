// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TypedElementDatabaseUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDatabaseUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDatabaseUi();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDatabaseUi_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementDatabaseUi::StaticRegisterNativesUTypedElementDatabaseUi()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDatabaseUi);
	UClass* Z_Construct_UClass_UTypedElementDatabaseUi_NoRegister()
	{
		return UTypedElementDatabaseUi::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDatabaseUi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDatabaseUi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDatabaseUi_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TypedElementDatabaseUI.h" },
		{ "ModuleRelativePath", "Private/TypedElementDatabaseUI.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTypedElementDatabaseUi_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister, (int32)VTABLE_OFFSET(UTypedElementDatabaseUi, ITypedElementDataStorageUiInterface), false },  // 2905502795
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDatabaseUi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDatabaseUi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDatabaseUi_Statics::ClassParams = {
		&UTypedElementDatabaseUi::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDatabaseUi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDatabaseUi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDatabaseUi()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDatabaseUi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDatabaseUi.OuterSingleton, Z_Construct_UClass_UTypedElementDatabaseUi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDatabaseUi.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementDatabaseUi>()
	{
		return UTypedElementDatabaseUi::StaticClass();
	}
	UTypedElementDatabaseUi::UTypedElementDatabaseUi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDatabaseUi);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDatabaseUi, UTypedElementDatabaseUi::StaticClass, TEXT("UTypedElementDatabaseUi"), &Z_Registration_Info_UClass_UTypedElementDatabaseUi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDatabaseUi), 2861933580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseUI_h_4099468373(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_TypedElementDatabaseUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
