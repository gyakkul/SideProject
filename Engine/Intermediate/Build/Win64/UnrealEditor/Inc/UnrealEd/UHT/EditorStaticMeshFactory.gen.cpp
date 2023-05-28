// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Private/Factories/EditorStaticMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStaticMeshFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UNREALED_API UClass* Z_Construct_UClass_UEditorStaticMeshFactory();
	UNREALED_API UClass* Z_Construct_UClass_UEditorStaticMeshFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorStaticMeshFactory::StaticRegisterNativesUEditorStaticMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorStaticMeshFactory);
	UClass* Z_Construct_UClass_UEditorStaticMeshFactory_NoRegister()
	{
		return UEditorStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/EditorStaticMeshFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/EditorStaticMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorStaticMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorStaticMeshFactory_Statics::ClassParams = {
		&UEditorStaticMeshFactory::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UEditorStaticMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorStaticMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UEditorStaticMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorStaticMeshFactory.OuterSingleton, Z_Construct_UClass_UEditorStaticMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorStaticMeshFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorStaticMeshFactory>()
	{
		return UEditorStaticMeshFactory::StaticClass();
	}
	UEditorStaticMeshFactory::UEditorStaticMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorStaticMeshFactory);
	UEditorStaticMeshFactory::~UEditorStaticMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorStaticMeshFactory, UEditorStaticMeshFactory::StaticClass, TEXT("UEditorStaticMeshFactory"), &Z_Registration_Info_UClass_UEditorStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorStaticMeshFactory), 3612357246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_3976755134(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Factories_EditorStaticMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
