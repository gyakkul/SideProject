// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityActorComponent() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityActorComponent();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityActorComponent::StaticRegisterNativesUEditorUtilityActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityActorComponent);
	UClass* Z_Construct_UClass_UEditorUtilityActorComponent_NoRegister()
	{
		return UEditorUtilityActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorUtilityActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityActorComponent.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityActorComponent_Statics::ClassParams = {
		&UEditorUtilityActorComponent::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityActorComponent()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityActorComponent.OuterSingleton, Z_Construct_UClass_UEditorUtilityActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityActorComponent.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityActorComponent>()
	{
		return UEditorUtilityActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityActorComponent);
	UEditorUtilityActorComponent::~UEditorUtilityActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityActorComponent, UEditorUtilityActorComponent::StaticClass, TEXT("UEditorUtilityActorComponent"), &Z_Registration_Info_UClass_UEditorUtilityActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityActorComponent), 4047530231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_2316327516(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
