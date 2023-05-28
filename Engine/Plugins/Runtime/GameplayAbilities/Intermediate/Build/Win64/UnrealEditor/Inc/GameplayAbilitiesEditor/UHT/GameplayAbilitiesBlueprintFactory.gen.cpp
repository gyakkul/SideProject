// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitiesBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitiesBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References
	void UGameplayAbilitiesBlueprintFactory::StaticRegisterNativesUGameplayAbilitiesBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilitiesBlueprintFactory);
	UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_NoRegister()
	{
		return UGameplayAbilitiesBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameplayAbilitiesBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "GameplayAbilitiesBlueprintFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbilitiesBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "GameplayAbilitiesBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbilitiesBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilitiesBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::ClassParams = {
		&UGameplayAbilitiesBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton, Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory.OuterSingleton;
	}
	template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UGameplayAbilitiesBlueprintFactory>()
	{
		return UGameplayAbilitiesBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilitiesBlueprintFactory);
	UGameplayAbilitiesBlueprintFactory::~UGameplayAbilitiesBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilitiesBlueprintFactory, UGameplayAbilitiesBlueprintFactory::StaticClass, TEXT("UGameplayAbilitiesBlueprintFactory"), &Z_Registration_Info_UClass_UGameplayAbilitiesBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilitiesBlueprintFactory), 3697189496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_3187977604(TEXT("/Script/GameplayAbilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayAbilitiesBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
