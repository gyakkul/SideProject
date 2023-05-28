// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryTriggerSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryTriggerSphere() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerSphere();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTriggerSphere_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryTriggerSphere::StaticRegisterNativesUActorFactoryTriggerSphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryTriggerSphere);
	UClass* Z_Construct_UClass_UActorFactoryTriggerSphere_NoRegister()
	{
		return UActorFactoryTriggerSphere::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryTriggerSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryTriggerSphere.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryTriggerSphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryTriggerSphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::ClassParams = {
		&UActorFactoryTriggerSphere::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryTriggerSphere()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryTriggerSphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryTriggerSphere.OuterSingleton, Z_Construct_UClass_UActorFactoryTriggerSphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryTriggerSphere.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryTriggerSphere>()
	{
		return UActorFactoryTriggerSphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryTriggerSphere);
	UActorFactoryTriggerSphere::~UActorFactoryTriggerSphere() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryTriggerSphere, UActorFactoryTriggerSphere::StaticClass, TEXT("UActorFactoryTriggerSphere"), &Z_Registration_Info_UClass_UActorFactoryTriggerSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryTriggerSphere), 597822273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_1135875795(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTriggerSphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
