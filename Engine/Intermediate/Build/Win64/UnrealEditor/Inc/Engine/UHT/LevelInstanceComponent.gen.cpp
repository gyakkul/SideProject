// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelInstanceComponent::StaticRegisterNativesULevelInstanceComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceComponent);
	UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister()
	{
		return ULevelInstanceComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULevelInstanceComponent subclasses USceneComponent for Editing purposes so that we can have a proxy to the LevelInstanceActor's RootComponent transform without attaching to it.\n *\n * It is responsible for updating the transform of the ALevelInstanceEditorInstanceActor which is created when loading a LevelInstance Instance Level\n *\n * We use this method to avoid attaching the Instance Level Actors to the ILevelInstanceInterface. (Cross level attachment and undo/redo pain)\n * \n * The LevelInstance Level Actors are attached to this ALevelInstanceEditorInstanceActor keeping the attachment local to the Instance Level and shielded from the transaction buffer.\n *\n * Avoiding those Level Actors from being part of the Transaction system allows us to unload that level without clearing the transaction buffer. It also allows BP Reinstancing without having to update attachements.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LevelInstance/LevelInstanceComponent.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceComponent.h" },
		{ "ToolTip", "ULevelInstanceComponent subclasses USceneComponent for Editing purposes so that we can have a proxy to the LevelInstanceActor's RootComponent transform without attaching to it.\n\nIt is responsible for updating the transform of the ALevelInstanceEditorInstanceActor which is created when loading a LevelInstance Instance Level\n\nWe use this method to avoid attaching the Instance Level Actors to the ILevelInstanceInterface. (Cross level attachment and undo/redo pain)\n\nThe LevelInstance Level Actors are attached to this ALevelInstanceEditorInstanceActor keeping the attachment local to the Instance Level and shielded from the transaction buffer.\n\nAvoiding those Level Actors from being part of the Transaction system allows us to unload that level without clearing the transaction buffer. It also allows BP Reinstancing without having to update attachements." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceComponent_Statics::ClassParams = {
		&ULevelInstanceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceComponent()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton, Z_Construct_UClass_ULevelInstanceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelInstanceComponent>()
	{
		return ULevelInstanceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceComponent);
	ULevelInstanceComponent::~ULevelInstanceComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceComponent, ULevelInstanceComponent::StaticClass, TEXT("ULevelInstanceComponent"), &Z_Registration_Info_UClass_ULevelInstanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceComponent), 3606704329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_2287853314(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
