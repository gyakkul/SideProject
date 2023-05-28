// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_AddComponents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddComponents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddComponents();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddComponents_NoRegister();
	GAMEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureComponentEntry();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry;
class UScriptStruct* FGameFeatureComponentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeatureComponentEntry, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("GameFeatureComponentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.OuterSingleton;
}
template<> GAMEFEATURES_API UScriptStruct* StaticStruct<FGameFeatureComponentEntry>()
{
	return FGameFeatureComponentEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientComponent_MetaData[];
#endif
		static void NewProp_bClientComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerComponent_MetaData[];
#endif
		static void NewProp_bServerComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Description of a component to add to a type of actor when this game feature is enabled\n// (the actor class must be game feature aware, it does not happen magically)\n//@TODO: Write more documentation here about how to make an actor game feature / modular gameplay aware\n" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "Description of a component to add to a type of actor when this game feature is enabled\n(the actor class must be game feature aware, it does not happen magically)\n@TODO: Write more documentation here about how to make an actor game feature / modular gameplay aware" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeatureComponentEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "AllowAbstract", "True" },
		{ "Category", "Components" },
		{ "Comment", "// The base actor class to add a component to\n" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "The base actor class to add a component to" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameFeatureComponentEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// The component class to add to the specified type of actor\n" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "The component class to add to the specified type of actor" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameFeatureComponentEntry, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Should this component be added for clients\n" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "Should this component be added for clients" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent_SetBit(void* Obj)
	{
		((FGameFeatureComponentEntry*)Obj)->bClientComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent = { "bClientComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameFeatureComponentEntry), &Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Should this component be added on servers\n" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "Should this component be added on servers" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent_SetBit(void* Obj)
	{
		((FGameFeatureComponentEntry*)Obj)->bServerComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent = { "bServerComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameFeatureComponentEntry), &Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bClientComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewProp_bServerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		&NewStructOps,
		"GameFeatureComponentEntry",
		sizeof(FGameFeatureComponentEntry),
		alignof(FGameFeatureComponentEntry),
		Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureComponentEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry.InnerSingleton;
	}
	void UGameFeatureAction_AddComponents::StaticRegisterNativesUGameFeatureAction_AddComponents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddComponents);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddComponents_NoRegister()
	{
		return UGameFeatureAction_AddComponents::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds actor<->component spawn requests to the component manager\n *\n * @see UGameFrameworkComponentManager\n */" },
		{ "DisplayName", "Add Components" },
		{ "IncludePath", "GameFeatureAction_AddComponents.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "ToolTip", "Adds actor<->component spawn requests to the component manager\n\n@see UGameFrameworkComponentManager" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList_Inner = { "ComponentList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameFeatureComponentEntry, METADATA_PARAMS(nullptr, 0) }; // 2118818755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** List of components to add to gameplay actors when this game feature is enabled */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddComponents.h" },
		{ "TitleProperty", "{ActorClass} -> {ComponentClass}" },
		{ "ToolTip", "List of components to add to gameplay actors when this game feature is enabled" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList = { "ComponentList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddComponents, ComponentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList_MetaData)) }; // 2118818755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::NewProp_ComponentList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddComponents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::ClassParams = {
		&UGameFeatureAction_AddComponents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddComponents()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddComponents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddComponents.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddComponents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddComponents.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_AddComponents>()
	{
		return UGameFeatureAction_AddComponents::StaticClass();
	}
	UGameFeatureAction_AddComponents::UGameFeatureAction_AddComponents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddComponents);
	UGameFeatureAction_AddComponents::~UGameFeatureAction_AddComponents() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ScriptStructInfo[] = {
		{ FGameFeatureComponentEntry::StaticStruct, Z_Construct_UScriptStruct_FGameFeatureComponentEntry_Statics::NewStructOps, TEXT("GameFeatureComponentEntry"), &Z_Registration_Info_UScriptStruct_GameFeatureComponentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeatureComponentEntry), 2118818755U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddComponents, UGameFeatureAction_AddComponents::StaticClass, TEXT("UGameFeatureAction_AddComponents"), &Z_Registration_Info_UClass_UGameFeatureAction_AddComponents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddComponents), 726684126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_1347754918(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddComponents_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
