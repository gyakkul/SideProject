// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryTriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryTriggerBox() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerBox();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryTriggerBox::StaticRegisterNativesUActorFactoryTriggerBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryTriggerBox);
	UClass* Z_Construct_UClass_UActorFactoryTriggerBox_NoRegister()
	{
		return UActorFactoryTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryTriggerBox.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryTriggerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryTriggerBox_Statics::ClassParams = {
		&UActorFactoryTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryTriggerBox()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryTriggerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryTriggerBox.OuterSingleton, Z_Construct_UClass_UActorFactoryTriggerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryTriggerBox.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryTriggerBox>()
	{
		return UActorFactoryTriggerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryTriggerBox);
	UActorFactoryTriggerBox::~UActorFactoryTriggerBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryTriggerBox, UActorFactoryTriggerBox::StaticClass, TEXT("UActorFactoryTriggerBox"), &Z_Registration_Info_UClass_UActorFactoryTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryTriggerBox), 2422729368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_228347951(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
