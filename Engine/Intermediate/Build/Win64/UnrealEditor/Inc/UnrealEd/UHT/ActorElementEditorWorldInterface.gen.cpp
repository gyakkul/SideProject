// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Actor/ActorElementEditorWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementEditorWorldInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorElementWorldInterface();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementEditorWorldInterface();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementEditorWorldInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorElementEditorWorldInterface::StaticRegisterNativesUActorElementEditorWorldInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementEditorWorldInterface);
	UClass* Z_Construct_UClass_UActorElementEditorWorldInterface_NoRegister()
	{
		return UActorElementEditorWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementEditorWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorElementWorldInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementEditorWorldInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementEditorWorldInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementEditorWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::ClassParams = {
		&UActorElementEditorWorldInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementEditorWorldInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementEditorWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementEditorWorldInterface.OuterSingleton, Z_Construct_UClass_UActorElementEditorWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementEditorWorldInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorElementEditorWorldInterface>()
	{
		return UActorElementEditorWorldInterface::StaticClass();
	}
	UActorElementEditorWorldInterface::UActorElementEditorWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementEditorWorldInterface);
	UActorElementEditorWorldInterface::~UActorElementEditorWorldInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementEditorWorldInterface, UActorElementEditorWorldInterface::StaticClass, TEXT("UActorElementEditorWorldInterface"), &Z_Registration_Info_UClass_UActorElementEditorWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementEditorWorldInterface), 2402306266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_587025045(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
