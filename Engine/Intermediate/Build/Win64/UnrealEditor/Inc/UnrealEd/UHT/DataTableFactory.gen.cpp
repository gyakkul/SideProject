// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/DataTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDataTableFactory::StaticRegisterNativesUDataTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataTableFactory);
	UClass* Z_Construct_UClass_UDataTableFactory_NoRegister()
	{
		return UDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DataTableFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "Data Table Factory" },
		{ "ModuleRelativePath", "Classes/Factories/DataTableFactory.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTableFactory, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataTableFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataTableFactory_Statics::ClassParams = {
		&UDataTableFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataTableFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTableFactory()
	{
		if (!Z_Registration_Info_UClass_UDataTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataTableFactory.OuterSingleton, Z_Construct_UClass_UDataTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDataTableFactory>()
	{
		return UDataTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableFactory);
	UDataTableFactory::~UDataTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataTableFactory, UDataTableFactory::StaticClass, TEXT("UDataTableFactory"), &Z_Registration_Info_UClass_UDataTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataTableFactory), 2139305221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_385990854(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
