// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TypedElementSubsystems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSubsystems() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageSubsystem();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageSubsystem_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiSubsystem();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	void UTypedElementDataStorageSubsystem::StaticRegisterNativesUTypedElementDataStorageSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageSubsystem);
	UClass* Z_Construct_UClass_UTypedElementDataStorageSubsystem_NoRegister()
	{
		return UTypedElementDataStorageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem to provide alternative access to the Typed Elements Data Storage. This can be used in situations where directly accessing\n * the Data Storage from the Typed Elements Registry is not recommended, such as for MASS.\n */" },
		{ "IncludePath", "TypedElementSubsystems.h" },
		{ "ModuleRelativePath", "Public/TypedElementSubsystems.h" },
		{ "ToolTip", "A subsystem to provide alternative access to the Typed Elements Data Storage. This can be used in situations where directly accessing\nthe Data Storage from the Typed Elements Registry is not recommended, such as for MASS." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDataStorageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::ClassParams = {
		&UTypedElementDataStorageSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageSubsystem.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageSubsystem.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementDataStorageSubsystem>()
	{
		return UTypedElementDataStorageSubsystem::StaticClass();
	}
	UTypedElementDataStorageSubsystem::UTypedElementDataStorageSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageSubsystem);
	void UTypedElementDataStorageUiSubsystem::StaticRegisterNativesUTypedElementDataStorageUiSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageUiSubsystem);
	UClass* Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_NoRegister()
	{
		return UTypedElementDataStorageUiSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem to provide alternative access to the Typed Elements Data Storage UI. This can be used in situations where directly \n * accessing the UI from the Typed Elements Registry is not recommended, such as for MASS.\n */" },
		{ "IncludePath", "TypedElementSubsystems.h" },
		{ "ModuleRelativePath", "Public/TypedElementSubsystems.h" },
		{ "ToolTip", "A subsystem to provide alternative access to the Typed Elements Data Storage UI. This can be used in situations where directly\naccessing the UI from the Typed Elements Registry is not recommended, such as for MASS." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDataStorageUiSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::ClassParams = {
		&UTypedElementDataStorageUiSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageUiSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageUiSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageUiSubsystem.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageUiSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageUiSubsystem.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementDataStorageUiSubsystem>()
	{
		return UTypedElementDataStorageUiSubsystem::StaticClass();
	}
	UTypedElementDataStorageUiSubsystem::UTypedElementDataStorageUiSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageUiSubsystem);
	void UTypedElementDataStorageCompatibilitySubsystem::StaticRegisterNativesUTypedElementDataStorageCompatibilitySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageCompatibilitySubsystem);
	UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_NoRegister()
	{
		return UTypedElementDataStorageCompatibilitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem to provide alternative access to the Typed Elements Data Storage Compatiblity. This can be used in situations where directly \n * accessing the Compatiblity extension from the Typed Elements Registry is not recommended, such as for MASS.\n */" },
		{ "IncludePath", "TypedElementSubsystems.h" },
		{ "ModuleRelativePath", "Public/TypedElementSubsystems.h" },
		{ "ToolTip", "A subsystem to provide alternative access to the Typed Elements Data Storage Compatiblity. This can be used in situations where directly\naccessing the Compatiblity extension from the Typed Elements Registry is not recommended, such as for MASS." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementDataStorageCompatibilitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::ClassParams = {
		&UTypedElementDataStorageCompatibilitySubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilitySubsystem.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilitySubsystem.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementDataStorageCompatibilitySubsystem>()
	{
		return UTypedElementDataStorageCompatibilitySubsystem::StaticClass();
	}
	UTypedElementDataStorageCompatibilitySubsystem::UTypedElementDataStorageCompatibilitySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageCompatibilitySubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Public_TypedElementSubsystems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Public_TypedElementSubsystems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageSubsystem, UTypedElementDataStorageSubsystem::StaticClass, TEXT("UTypedElementDataStorageSubsystem"), &Z_Registration_Info_UClass_UTypedElementDataStorageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageSubsystem), 4042273175U) },
		{ Z_Construct_UClass_UTypedElementDataStorageUiSubsystem, UTypedElementDataStorageUiSubsystem::StaticClass, TEXT("UTypedElementDataStorageUiSubsystem"), &Z_Registration_Info_UClass_UTypedElementDataStorageUiSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageUiSubsystem), 3139038046U) },
		{ Z_Construct_UClass_UTypedElementDataStorageCompatibilitySubsystem, UTypedElementDataStorageCompatibilitySubsystem::StaticClass, TEXT("UTypedElementDataStorageCompatibilitySubsystem"), &Z_Registration_Info_UClass_UTypedElementDataStorageCompatibilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageCompatibilitySubsystem), 790671568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Public_TypedElementSubsystems_h_3503119613(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Public_TypedElementSubsystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Public_TypedElementSubsystems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
