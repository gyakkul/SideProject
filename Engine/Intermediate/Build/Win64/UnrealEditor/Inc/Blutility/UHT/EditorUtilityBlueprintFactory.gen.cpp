// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityBlueprintFactory() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintFactory();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityBlueprintFactory::StaticRegisterNativesUEditorUtilityBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityBlueprintFactory);
	UClass* Z_Construct_UClass_UEditorUtilityBlueprintFactory_NoRegister()
	{
		return UEditorUtilityBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityBlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::ClassParams = {
		&UEditorUtilityBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityBlueprintFactory.OuterSingleton, Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityBlueprintFactory.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityBlueprintFactory>()
	{
		return UEditorUtilityBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityBlueprintFactory);
	UEditorUtilityBlueprintFactory::~UEditorUtilityBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityBlueprintFactory, UEditorUtilityBlueprintFactory::StaticClass, TEXT("UEditorUtilityBlueprintFactory"), &Z_Registration_Info_UClass_UEditorUtilityBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityBlueprintFactory), 1880367591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_2547008172(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
