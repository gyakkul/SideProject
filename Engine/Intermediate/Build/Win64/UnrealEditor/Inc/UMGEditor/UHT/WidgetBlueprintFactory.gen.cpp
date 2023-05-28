// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintFactory();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetBlueprintFactory::StaticRegisterNativesUWidgetBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintFactory);
	UClass* Z_Construct_UClass_UWidgetBlueprintFactory_NoRegister()
	{
		return UWidgetBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RootWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WidgetBlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/WidgetBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Classes/WidgetBlueprintFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/WidgetBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_RootWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/WidgetBlueprintFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_RootWidgetClass = { "RootWidgetClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintFactory, RootWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_RootWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_RootWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintFactory_Statics::NewProp_RootWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintFactory_Statics::ClassParams = {
		&UWidgetBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintFactory.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintFactory.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprintFactory>()
	{
		return UWidgetBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintFactory);
	UWidgetBlueprintFactory::~UWidgetBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintFactory, UWidgetBlueprintFactory::StaticClass, TEXT("UWidgetBlueprintFactory"), &Z_Registration_Info_UClass_UWidgetBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintFactory), 479789836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_1629155358(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
