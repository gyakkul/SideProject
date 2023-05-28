// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelActorContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelActorContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelActorContainer::StaticRegisterNativesULevelActorContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelActorContainer);
	UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister()
	{
		return ULevelActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_ULevelActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Root object for all level actors\n */" },
		{ "IncludePath", "Engine/LevelActorContainer.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Root object for all level actors" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/** Array of actors in a level */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Array of actors in a level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelActorContainer, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelActorContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams = {
		&ULevelActorContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelActorContainer()
	{
		if (!Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton, Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelActorContainer>()
	{
		return ULevelActorContainer::StaticClass();
	}
	ULevelActorContainer::ULevelActorContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelActorContainer);
	ULevelActorContainer::~ULevelActorContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelActorContainer, ULevelActorContainer::StaticClass, TEXT("ULevelActorContainer"), &Z_Registration_Info_UClass_ULevelActorContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelActorContainer), 1358327275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_446310637(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
