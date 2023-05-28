// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectUserTrait.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectUserTrait() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectUserTrait();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectUserTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	void UMassSmartObjectUserTrait::StaticRegisterNativesUMassSmartObjectUserTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmartObjectUserTrait);
	UClass* Z_Construct_UClass_UMassSmartObjectUserTrait_NoRegister()
	{
		return UMassSmartObjectUserTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmartObjectUserTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trait to allow an entity to interact with SmartObjects\n */" },
		{ "DisplayName", "SmartObject User" },
		{ "IncludePath", "MassSmartObjectUserTrait.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectUserTrait.h" },
		{ "ToolTip", "Trait to allow an entity to interact with SmartObjects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::NewProp_UserTags_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Tags describing the SmartObject user. Used when searching smart objects. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectUserTrait.h" },
		{ "ToolTip", "Tags describing the SmartObject user. Used when searching smart objects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::NewProp_UserTags = { "UserTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSmartObjectUserTrait, UserTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::NewProp_UserTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::NewProp_UserTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::NewProp_UserTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmartObjectUserTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::ClassParams = {
		&UMassSmartObjectUserTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmartObjectUserTrait()
	{
		if (!Z_Registration_Info_UClass_UMassSmartObjectUserTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmartObjectUserTrait.OuterSingleton, Z_Construct_UClass_UMassSmartObjectUserTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmartObjectUserTrait.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<UMassSmartObjectUserTrait>()
	{
		return UMassSmartObjectUserTrait::StaticClass();
	}
	UMassSmartObjectUserTrait::UMassSmartObjectUserTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmartObjectUserTrait);
	UMassSmartObjectUserTrait::~UMassSmartObjectUserTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSmartObjectUserTrait, UMassSmartObjectUserTrait::StaticClass, TEXT("UMassSmartObjectUserTrait"), &Z_Registration_Info_UClass_UMassSmartObjectUserTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmartObjectUserTrait), 1458228327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_1342794077(TEXT("/Script/MassSmartObjects"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectUserTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
