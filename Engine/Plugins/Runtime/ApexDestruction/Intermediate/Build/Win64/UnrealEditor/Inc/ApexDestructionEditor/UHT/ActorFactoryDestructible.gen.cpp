// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryDestructible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryDestructible() {}
// Cross Module References
	APEXDESTRUCTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryDestructible();
	APEXDESTRUCTIONEDITOR_API UClass* Z_Construct_UClass_UActorFactoryDestructible_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ApexDestructionEditor();
// End Cross Module References
	void UActorFactoryDestructible::StaticRegisterNativesUActorFactoryDestructible()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryDestructible);
	UClass* Z_Construct_UClass_UActorFactoryDestructible_NoRegister()
	{
		return UActorFactoryDestructible::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestructionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryDestructible_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryDestructible.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryDestructible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryDestructible>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryDestructible_Statics::ClassParams = {
		&UActorFactoryDestructible::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryDestructible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryDestructible()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryDestructible.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryDestructible.OuterSingleton, Z_Construct_UClass_UActorFactoryDestructible_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryDestructible.OuterSingleton;
	}
	template<> APEXDESTRUCTIONEDITOR_API UClass* StaticClass<UActorFactoryDestructible>()
	{
		return UActorFactoryDestructible::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryDestructible);
	UActorFactoryDestructible::~UActorFactoryDestructible() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryDestructible, UActorFactoryDestructible::StaticClass, TEXT("UActorFactoryDestructible"), &Z_Registration_Info_UClass_UActorFactoryDestructible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryDestructible), 2284938931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_2049813746(TEXT("/Script/ApexDestructionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestructionEditor_Private_ActorFactoryDestructible_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
