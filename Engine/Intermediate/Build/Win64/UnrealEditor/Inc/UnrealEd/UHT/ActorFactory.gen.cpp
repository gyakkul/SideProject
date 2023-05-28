// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactory::StaticRegisterNativesUActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactory);
	UClass* Z_Construct_UClass_UActorFactory_NoRegister()
	{
		return UActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MenuPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInEditorQuickMenu_MetaData[];
#endif
		static void NewProp_bShowInEditorQuickMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInEditorQuickMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSurfaceOrientation_MetaData[];
#endif
		static void NewProp_bUseSurfaceOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSurfaceOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlacementExtent_MetaData[];
#endif
		static void NewProp_bUsePlacementExtent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlacementExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactory.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Name used as basis for 'New Actor' menu. */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Name used as basis for 'New Actor' menu." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorFactory, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData[] = {
		{ "Comment", "/** Indicates how far up the menu item should be. The higher the number, the higher up the list.*/" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Indicates how far up the menu item should be. The higher the number, the higher up the list." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority = { "MenuPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorFactory, MenuPriority), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData[] = {
		{ "Comment", "/** name of actor subclass this actorfactory creates - dynamically loaded.  Overrides NewActorClass. */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "name of actor subclass this actorfactory creates - dynamically loaded.  Overrides NewActorClass." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName = { "NewActorClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorFactory, NewActorClassName), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData[] = {
		{ "Comment", "/**  AActor  subclass this ActorFactory creates. */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "AActor  subclass this ActorFactory creates." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass = { "NewActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorFactory, NewActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData[] = {
		{ "Comment", "/** Whether to appear in the editor add actor quick menu */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Whether to appear in the editor add actor quick menu" },
	};
#endif
	void Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_SetBit(void* Obj)
	{
		((UActorFactory*)Obj)->bShowInEditorQuickMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu = { "bShowInEditorQuickMenu", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorFactory), &Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
	};
#endif
	void Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_SetBit(void* Obj)
	{
		((UActorFactory*)Obj)->bUseSurfaceOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation = { "bUseSurfaceOrientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorFactory), &Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
	};
#endif
	void Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent_SetBit(void* Obj)
	{
		((UActorFactory*)Obj)->bUsePlacementExtent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent = { "bUsePlacementExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorFactory), &Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData[] = {
		{ "Comment", "/** Translation applied to the spawn position. */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Translation applied to the spawn position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset = { "SpawnPositionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorFactory, SpawnPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_bUsePlacementExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetFactoryInterface_NoRegister, (int32)VTABLE_OFFSET(UActorFactory, IAssetFactoryInterface), false },  // 3921816976
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactory_Statics::ClassParams = {
		&UActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorFactory_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001030ADu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactory()
	{
		if (!Z_Registration_Info_UClass_UActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactory.OuterSingleton, Z_Construct_UClass_UActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactory>()
	{
		return UActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactory);
	UActorFactory::~UActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactory, UActorFactory::StaticClass, TEXT("UActorFactory"), &Z_Registration_Info_UClass_UActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactory), 2850740937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_2096600032(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
