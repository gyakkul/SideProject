// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Actor/ActorElementEditorSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementEditorSelectionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementEditorSelectionInterface();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementEditorSelectionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorElementEditorSelectionInterface::StaticRegisterNativesUActorElementEditorSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementEditorSelectionInterface);
	UClass* Z_Construct_UClass_UActorElementEditorSelectionInterface_NoRegister()
	{
		return UActorElementEditorSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorElementSelectionInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementEditorSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementEditorSelectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementEditorSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::ClassParams = {
		&UActorElementEditorSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementEditorSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementEditorSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementEditorSelectionInterface.OuterSingleton, Z_Construct_UClass_UActorElementEditorSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementEditorSelectionInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorElementEditorSelectionInterface>()
	{
		return UActorElementEditorSelectionInterface::StaticClass();
	}
	UActorElementEditorSelectionInterface::UActorElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementEditorSelectionInterface);
	UActorElementEditorSelectionInterface::~UActorElementEditorSelectionInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorSelectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorSelectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementEditorSelectionInterface, UActorElementEditorSelectionInterface::StaticClass, TEXT("UActorElementEditorSelectionInterface"), &Z_Registration_Info_UClass_UActorElementEditorSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementEditorSelectionInterface), 853832443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorSelectionInterface_h_1062417505(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorSelectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
