// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityWidgetBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityWidgetBlueprintFactory() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityWidgetBlueprintFactory::StaticRegisterNativesUEditorUtilityWidgetBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityWidgetBlueprintFactory);
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_NoRegister()
	{
		return UEditorUtilityWidgetBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorUtilityWidgetBlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprintFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityWidgetBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "WidgetBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityWidgetBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityWidgetBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::ClassParams = {
		&UEditorUtilityWidgetBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprintFactory.OuterSingleton, Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprintFactory.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityWidgetBlueprintFactory>()
	{
		return UEditorUtilityWidgetBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityWidgetBlueprintFactory);
	UEditorUtilityWidgetBlueprintFactory::~UEditorUtilityWidgetBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityWidgetBlueprintFactory, UEditorUtilityWidgetBlueprintFactory::StaticClass, TEXT("UEditorUtilityWidgetBlueprintFactory"), &Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityWidgetBlueprintFactory), 2446079408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprintFactory_h_3291373054(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
