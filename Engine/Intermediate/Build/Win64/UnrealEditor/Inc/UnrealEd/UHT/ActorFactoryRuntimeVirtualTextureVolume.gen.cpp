// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryRuntimeVirtualTextureVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryRuntimeVirtualTextureVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryRuntimeVirtualTextureVolume::StaticRegisterNativesUActorFactoryRuntimeVirtualTextureVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryRuntimeVirtualTextureVolume);
	UClass* Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_NoRegister()
	{
		return UActorFactoryRuntimeVirtualTextureVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor factory for ARuntimeVirtualTextureVolume */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryRuntimeVirtualTextureVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryRuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Actor factory for ARuntimeVirtualTextureVolume" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryRuntimeVirtualTextureVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::ClassParams = {
		&UActorFactoryRuntimeVirtualTextureVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryRuntimeVirtualTextureVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryRuntimeVirtualTextureVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryRuntimeVirtualTextureVolume.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryRuntimeVirtualTextureVolume>()
	{
		return UActorFactoryRuntimeVirtualTextureVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryRuntimeVirtualTextureVolume);
	UActorFactoryRuntimeVirtualTextureVolume::~UActorFactoryRuntimeVirtualTextureVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRuntimeVirtualTextureVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRuntimeVirtualTextureVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryRuntimeVirtualTextureVolume, UActorFactoryRuntimeVirtualTextureVolume::StaticClass, TEXT("UActorFactoryRuntimeVirtualTextureVolume"), &Z_Registration_Info_UClass_UActorFactoryRuntimeVirtualTextureVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryRuntimeVirtualTextureVolume), 1301867129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRuntimeVirtualTextureVolume_h_1030044968(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRuntimeVirtualTextureVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRuntimeVirtualTextureVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
